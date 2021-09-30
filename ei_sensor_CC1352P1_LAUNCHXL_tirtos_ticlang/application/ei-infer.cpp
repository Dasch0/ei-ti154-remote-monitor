/* Edge Impulse inference implementation
 * Copyright (c) 2021 EdgeImpulse Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/* Include ----------------------------------------------------------------- */
#include "ei_run_classifier.h"
#include "ei_classifier_porting.h"
#include "model-parameters/model_metadata.h"
#include "numpy.hpp"
extern "C" {
    #include "ina228.h"
}

// define for enabling standalone inference. Standalone inference means that
// the neural network is run against a static buffer of features. These features
// should be copied from live classification within edge impulse, and is used
// to verify model operation and correctness
//
// If standalone inference is != 1, this implementation will try to sample
// from the INA228 driver defined in ina228.h
#define EI_STANDALONE_INFERENCE 0

#if EI_STANDALONE_INFERENCE == 0
static const float features[] = {
13972.7800, 13916.0100, 13831.7900, 13742.0700, 13732.9100, 13612.0600, 13533.3300, 13421.6300, 13304.4400, 13192.7400, 13027.9500, 12927.2400,
12800.9000, 12669.0700, 12559.2100, 12398.0700, 12299.2000, 12182.0100, 12077.6400, 12006.2300, 11823.1200, 11691.2800, 11515.5000, 11319.5800,
11143.8000, 10920.4100, 10753.7900, 10570.6800, 10382.0800, 10220.9500, 10021.3600, 9860.2300, 9671.6300, 9490.3500, 9325.5600, 9096.6800,
8897.1000, 8688.3600, 8497.9300, 8305.6700, 8089.6000, 7915.6500, 7699.5800, 7494.5100, 7272.9500, 7023.9300, 6818.8500, 6591.8000, 6370.2400,
6154.1800, 5879.5100, 5635.9800, 5364.9900, 5112.3000, 4826.6600, 4537.3500, 4323.1200, 4059.4400, 3828.7400, 3563.2300, 3284.9100, 3063.3500,
2786.8600, 2552.4900, 2261.3600, 1959.2300, 1761.4700, 1490.4800, 1285.4000, 1018.0700, 670.1700, 419.3100, 98.8800, -95.2200, -302.1200,
-558.4700, -743.4100, -1025.3900, -1234.1300, -1483.1500, -1759.6500, -1997.6800, -2352.9100, -2636.7200, -2944.3400, -3246.4600, -3466.1800,
-3770.1500, -3993.5300, -4246.2200, -4508.0500, -4685.6700, -4932.8700, -5143.4300, -5375.9700, -5610.3500, -5769.6600, -6026.0000, -6221.9300,
-6399.5300, -6646.7300, -6826.1700, -7077.0300, -7283.9400, -7532.9600, -7811.2800, -8020.0200, -8291.0200, -8523.5600, -8785.4000, -9067.3900,
-9268.8000, -9503.1800, -9669.8000, -9834.5900, -10050.6600, -10200.8000, -10402.2200, -10583.5000, -10755.6200, -10971.6800, -11118.1600,
-11317.7500, -11504.5200, -11665.6400, -11865.2400, -12026.3700, -12213.1300, -12387.0800, -12561.0400, -12769.7800, -12903.4400, -13066.4100,
-13244.0200, -13406.9800, -13595.5800, -13738.4000, -13857.4200, -13936.1500, -13992.9200, -14080.8100, -14166.8700, -14265.7500, -14401.2500,
-14520.2600, -14646.6000, -14741.8200, -14827.8800, -14902.9600, -14941.4000, -14974.3700, -15018.3100, -15080.5700, -15115.3500, -15148.3100,
-15181.2800, -15192.2600, -15206.9100, -15217.9000, -15245.3600, -15305.7900, -15349.7300, -15426.6400, -15468.7500, -15498.0400, -15549.3200,
-15576.7900, -15635.3700, -15662.8400, -15695.8100, -15743.4100, -15743.4100, -15759.8800, -15697.6300, -15648.1900, -15624.3900, -15565.7900,
-15558.4800, -15492.5500, -15474.2500, -15496.2200, -15424.8000, -15390.0200, -15309.4400, -15256.3500, -15205.0800, -15078.7300, -15014.6500,
-14882.8200, -14793.0900, -14694.2100, -14549.5600, -14489.1400, -14392.0900, -14322.5100, -14258.4200, -14122.9200, -14088.1300, -14007.5700,
-13914.1900, -13846.4300, -13699.9500, -13635.8600, -13471.0700, -13322.7500, -13165.2900, -12984.0000, -12886.9600, -12711.1800, -12573.8600,
-12427.3700, -12216.8000, -12081.3000, -11865.2400, -11654.6700, -11471.5600, -11246.3300, -11094.3600, -10883.7900, -10713.5000, -10541.3800,
-10323.4900, -10164.1800, -9953.6100, -9790.6500, -9613.0400, -9376.8300, -9190.0700, -8913.5800, -8673.7100, -8457.6400, -8219.6000, -8041.9900,
-7794.8000, -7602.5400, -7386.4700, -7148.4400, -6945.1900, -6654.0500, -6412.3500, -6168.8200, -5894.1700, -5639.6500, -5352.1800, -5130.6200,
-4905.4000, -4663.7000, -4425.6600, -4118.0400, -3914.7900, -3691.4100, -3442.3900, -3209.8300, -2927.8600, -2689.8200, -2422.4900, -2155.1500,
-1896.9800, -1591.1900, -1353.1500, -1043.7000, -747.0700, -488.8900, -194.0900, 42.1100, 318.6100, 580.4500, 791.0200, 1071.1700, 1367.7900,
1673.5900, 1955.5600, 2180.7900, 2455.4400, 2636.7200, 2882.0800, 3153.0800, 3372.8000, 3682.2500, 3894.6600, 4152.8300, 4390.8600, 4564.8200,
4828.4900, 5028.0700, 5289.9200, 5553.5900, 5776.9800, 6068.1200, 6262.2000, 6481.9300, 6696.1700, 6826.1700, 7062.3800, 7269.2800, 7501.8300,
7719.7300, 7873.5400, 8137.2100, 8347.7800, 8574.8300, 8800.0500, 8950.2000, 9147.9500, 9298.0900, 9484.8600, 9702.7600, 9852.9000, 10079.9600,
10213.6200, 10396.7300, 10596.3100, 10729.9800, 10949.7100, 11109.0100, 11277.4700, 11467.9000, 11594.2400, 11770.0200, 11927.4900, 12099.6000,
12273.5600, 12390.7500, 12557.3800, 12661.7400, 12800.9100, 12962.0400, 13086.5500, 13253.1800, 13370.3600, 13507.6900, 13637.7000, 13731.0800,
13868.4000, 13994.7500, 14119.2600, 14236.4500, 14313.3600, 14437.8700, 14500.1200, 14575.1900, 14633.7900, 14639.2800, 14622.8100, 14626.4700, 14663.0800, 14690.5500, 14694.2100, 14710.7000, 14714.3600, 14719.8500, 14732.6600, 14736.3300, 14725.3400, 14749.1400, 14758.3000, 14765.6200, 14756.4700, 14739.9900, 14714.3600, 14708.8600, 14696.0500, 14657.5900, 14626.4700, 14571.5300, 14547.7300, 14529.4200, 14494.6300, 14454.3400, 14403.0800, 14360.9600, 14324.3400, 14254.7600, 14232.7900, 14168.7000, 14104.6100, 14031.3800, 13919.6800, 13853.7600, 13742.0600, 13659.6700, 13610.2300, 13536.9900, 13483.8800, 13359.3700, 13249.5100, 13134.1500, 12956.5400, 12854.0100, 12687.3800, 12544.5600, 12421.8800, 12271.7300, 12172.8500, 11982.4200, 11841.4300, 11678.4700, 11466.0700, 11336.0600, 11130.9800, 10968.0200, 10803.2200, 10609.1400, 10438.8500, 10204.4700, 10032.3500, 9827.2700, 9576.4200, 9495.8500, 9255.9800, 9091.1800, 8893.4300, 8659.0500, 8479.6200, 8252.5600, 8082.2700, 7886.3500, 7692.2600, 7532.9600, 7304.0800, 7141.1100, 6934.2000, 6679.6800, 6465.4500, 6170.6500, 5954.5900, 5714.7200, 5487.6700, 5293.5800, 5022.5800, 4823.0000, 4579.4700, 4324.9500, 4086.9100, 3750.0000, 3502.8100, 3220.8200, 2973.6400, 2737.4300, 2438.9600, 2200.9300, 1924.4400, 1675.4100, 1424.5600, 1118.7800, 888.0600, 617.0600, 399.1700, 140.9900, -140.9900, -342.4100, -600.5900, -838.6200, -1102.2900, -1367.8000, -1638.7900, -1975.7100, -2268.6800, -2554.3200, -2867.4300, -3116.4500, -3396.6100, -3643.7900, -3870.8500, -4145.5100, -4357.9100, -4605.1100, -4826.6600, -5037.2400, -5278.9300, -5473.0200, -5711.0600, -5941.7700, -6176.1500, -6412.3600, -6597.2900, -6851.8100, -7100.8300, -7296.7500, -7553.1000, -7736.2100, -7981.5700, -8193.9700, -8367.9200, -8598.6300, -8776.2500, -9003.3000, -9223.0200, -9428.1000, -9656.9800, -9829.1000, -10067.1400, -10307.0100, -10493.7700, -10755.6200, -10962.5300, -11207.8900, -11403.8100, -11546.6300, -11746.2200, -11861.5700, -12033.6900, -12216.8000, -12354.1300, -12570.1900, -12716.6700, -12890.6200, -13037.1100, -13170.7800, -13364.8700, -13485.7100, -13637.6900, -13787.8400, -13883.0600, -14024.0400, -14086.3100, -14208.9800, -14348.1400, -14434.2000, -14584.3500, -14677.7300, -14794.9200, -14895.6300, -14998.1700, -15108.0300, -15139.1600, -15230.7100, -15335.0800, -15417.4800, -15510.8700, -15556.6400, -15635.3800, -15666.5000, -15648.2000, -15646.3600, -15629.8800, -15648.1900, -15681.1500, -15684.8100, -15701.2900, -15679.3200, -15688.4700, -15693.9700, -15671.9900, -15644.5300, -15613.4000, -15606.0700, -15595.0900, -15562.1300, -15547.4800, -15514.5300, -15505.3700, -15518.1900, -15503.5400, -15461.4300, -15395.5000, -15311.2700, -15199.5800, -15076.9000, -14992.6800, -14924.9300, -14866.3300, -14831.5400, -14749.1500, -14708.8600, -14630.1300, -14553.2300, -14465.3400, -14346.3200, -14262.0800, -14133.9100, -14053.3400, -13976.4400, -13870.2400, -13771.3600, -13613.8900, -13509.5200, -13394.1600, -13244.0100, -13126.8300, -12949.2200, -12822.8700, -12667.2400, -12506.1000, -12374.2700, -12182.0100, -12064.8200, -11912.8500, -11738.8900, -11594.2400, -11370.8400, -11222.5300, -11076.0500, -10909.4200, -10742.7900, -10488.2800, -10349.1200, -10149.5400, -9878.5400, -9702.7600, -9448.2400, -9312.7500, -9124.1400, -8944.7000, -8743.2800, -8477.7900, -8296.5100, -8040.1600, -7805.7900, -7600.7000, -7311.4100, -7115.4800, -6837.1600, -6608.2700, -6405.0300, -6123.0500, -5916.1400, -5606.6900, -5368.6500, -5132.4500, -4841.3100, -4628.9100, -4324.9500, -4055.7900, -3795.7800, -3466.1900, -3206.1800, -2850.9500, -2598.2700, -2365.7200, -2083.7400, -1860.3500, -1558.2200, -1327.5200, -1087.6400, -802.0100, -562.1400, -232.5400, 12.8200, 265.5100, 540.1600, 754.3900, 1021.7200, 1224.9800, 1543.5800, 1860.3600, 2124.0300, 2400.5100, 2666.0200, 2931.5200, 3173.2200, 3370.9700, 3587.0400, 3804.9300, 4024.6600, 4240.7200, 4423.8300, 4628.9100, 4806.5200, 4991.4600, 5192.8700, 5370.4800, 5597.5300, 5831.9100, 6077.2700, 6340.9500, 6580.8100, 6864.6300, 7100.8300, 7342.5300, 7589.7200, 7767.3400, 8031.0100, 8245.2400, 8430.1800, 8637.0800, 8805.5400, 9028.9300, 9228.5200, 9422.6000, 9647.8300, 9827.2700, 10056.1600, 10226.4400, 10400.3900, 10621.9500, 10772.0900, 10993.6500, 11174.9300, 11339.7200, 11535.6400, 11654.6700, 11850.5900, 12017.2100, 12169.1900, 12359.6200, 12456.6700, 12623.2900, 12753.3000, 12883.3000, 13055.4200, 13148.8000, 13315.4300, 13438.1100, 13580.9300, 13749.3900, 13855.5900, 14027.7100, 14128.4200, 14208.9800, 14331.6700, 14392.0900, 14516.6000, 14569.7000, 14635.6200, 14729.0000, 14745.4800, 14813.2300, 14860.8400, 14895.6300, 14935.9200, 14904.7800, 14945.0700, 14930.4200, 14924.9200, 14956.0500, 14930.4200, 14959.7200, 14974.3700, 14965.2100, 14943.2400, 14890.1400, 14888.3000, 14866.3300, 14844.3600, 14831.5500, 14793.0900, 14754.6400, 14719.8400, 14668.5800, 14622.8100, 14560.5400, 14511.1100, 14461.6700, 14404.9000, 14362.8000, 14318.8400, 14225.4600, 14157.7200, 14058.8400, 13994.7500, 13934.3200, 13873.9000, 13787.8400, 13677.9700, 13584.6000, 13482.0500, 13368.5300, 13269.6600, 13137.8200, 13035.2800, 12929.0700, 12837.5300, 12720.3400, 12603.1500, 12502.4400, 12354.1300, 12249.7600, 12090.4500, 11953.1200, 11834.1100, 11676.6400, 11568.6100, 11407.4700, 11264.6500, 11156.6200, 10979.0000, 10847.1700, 10671.3800, 10512.0800, 10360.1000, 10127.5700, 9984.7400, 9763.1900, 9554.4400, 9343.8700, 9065.5500, 8873.2900, 8616.9400, 8446.6600, 8298.3400, 8052.9800, 7869.8800, 7602.5300, 7401.1200, 7207.0300, 6941.5200, 6749.2600, 6470.9400, 6262.2000, 6033.3200, 5720.2100, 5485.8400, 5194.7000, 4974.9800, 4740.6000, 4467.7700, 4324.9500, 4033.8200, 3812.2500, 3570.5500, 3306.8800, 3127.4400, 2819.8300, 2603.7600, 2340.0800, 2047.1200, 1832.8800, 1481.3200, 1228.6400, 915.5300, 596.9300, 388.1800, 38.4500, -212.4000, -457.7600, -693.9700, -867.9200, -1137.0800, -1338.5000, -1600.3500, -1893.3100, -2156.9800, -2490.2300, -2775.8800, -3096.3200, -3405.7600, -3660.2800, -3933.1100, -4145.5100, -4370.7200, -4594.1200, -4813.8400, -5040.8900, -5233.1600, -5443.7300, -5663.4500, -5853.8800, -6051.6400, -6223.7600, -6432.4900, -6655.8900, -6890.2600, -7139.2800, -7377.3200, -7611.7000, -7862.5500, -8089.6000, -8322.1400, -8532.7200, -8754.2700, -8959.3500, -9155.2800, -9376.8300, -9589.2300, -9810.7900, -10045.1600, -10264.8900, -10488.2800, -10709.8400, -10931.3900, -11156.6100, -11328.7300, -11541.1400, -11718.7500, -11903.6800, -12099.6000, -12260.7400, -12484.1300, -12650.7500, -12833.8700, -13024.2900, -13119.5100, -13280.6400, -13383.1700, -13522.3400, -13712.7700, -13826.3000, -13978.2700, -14066.1700, -14141.2400, -14243.7700, -14324.3400, -14503.7900, -14600.8300, -14688.7200, -14798.5800, -14851.6900, -15010.9900, -15073.2400, -15162.9700, -15281.9800, -15338.7500, -15494.3900, -15499.8800, -15543.8200, -15622.5600, -15613.4100, -15710.4500, -15692.1300, -15686.6500, -15737.9200, -15726.9300, -15791.0200, -15800.1700, -15829.4700, -15858.7600, -15803.8400, -15842.2800, -15794.6800, -15783.6900, -15791.0200, -15748.9000, -15741.5700, -15668.3400, -15640.8700, -15626.2200, -15549.3200, -15523.6800, -15490.7200, -15492.5600, -15474.2400, -15371.7100, -15314.9500, -15230.7100, -15140.9900, -15047.6100, -14959.7200, -14877.3200, -14778.4400, -14697.8800, -14615.4800, -14505.6200, -14401.2400, -14273.0700, -14119.2600, -14007.5700, -13903.2000, -13793.3400, -13688.9600, -13568.1100, -13467.4100, -13333.7400, -13214.7200, -13099.3700, -12971.1900, -12861.3300, -12734.9800, -12572.0200, -12392.5800, -12213.1300, -12053.8400, -11905.5100, -11781.0100, -11647.3300, -11519.1700, -11374.5200, -11193.2400, -11035.7700, -10810.5500, -10620.1200, -10444.3400, -10224.6100, -10065.3100, -9851.0800, -9702.7600, -9565.4300, -9375.0000, -9182.7400, -8935.5500, -8765.2600, -8558.3500, -8292.8400, -8080.4500, -7780.1500, -7553.1000, -7289.4300, -7031.2500, -6820.6800, -6538.7000, -6372.0700, -6159.6600, -5897.8200, -5700.0700, -5418.0900, -5234.9900, -4991.4500, -4685.6700, -4447.6400, -4114.3800
};
#endif

int raw_feature_get_data(size_t offset, size_t length, float *out_ptr) {
    memcpy(out_ptr, features + offset, length * sizeof(float));
    return 0;
}

int ina228_feature_get_data(size_t offset, size_t length, float *out_ptr) {
    ina228_sample(out_ptr, length);
    return 0;
}

extern "C" void ei_init() {
#if !(EI_STANDALONE_INFERENCE == 1)
    ina228_init();
#endif
}

/// Minimal function for running inference, returns the index of the highest scoring label
extern "C" uint16_t ei_infer() {
    ei_impulse_result_t result = { 0 };

    // the features are stored into flash, and we don't want to load everything into RAM
    signal_t features_signal;
    features_signal.total_length = EI_CLASSIFIER_RAW_SAMPLE_COUNT;
#if EI_STANDALONE_INFERENCE == 1
    features_signal.get_data = &raw_feature_get_data;
#else
    features_signal.get_data = &ina228_feature_get_data;
#endif
    // invoke the impulse
    EI_IMPULSE_ERROR res = run_classifier(&features_signal, &result, true);

    uint16_t result_idx;
    float max_val = 0.0;
    for (uint16_t ix = 0; ix < EI_CLASSIFIER_LABEL_COUNT; ix++) {
        if (max_val < result.classification[ix].value) {
            max_val = result.classification[ix].value;
            result_idx = ix;
        }
    }

    return result_idx;
}

/**
 * @brief Write data to the serial output
 *
 * @param string
 * @param length
 */
extern "C" void Serial_Out(char *string, int length)
{
}

/**
 * @brief Get current time in ms
 *
 * @return uint64_t
 */
extern "C" uint64_t Timer_getMs(void)
{
    return 0;
}

