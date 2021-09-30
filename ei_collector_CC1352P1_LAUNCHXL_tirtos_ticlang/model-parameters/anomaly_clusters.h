/* Generated by Edge Impulse
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

#ifndef _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
#define _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_

#include "edge-impulse-sdk/anomaly/anomaly.h"

// (before - mean) / scale
const float ei_classifier_anom_scale[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 4.735934431428502, 2.6370697886685024, 1.752289641283062 };
const float ei_classifier_anom_mean[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 4.292335472136911, 2.1852703082689375, 1.6949875804138423 };

const ei_classifier_anom_cluster_t ei_classifier_anom_clusters[EI_CLASSIFIER_ANOM_CLUSTER_COUNT] = { { { 1.349934697151184, -0.15300726890563965, -0.36159002780914307 }, 0.48524047143152094 }
, { { 1.0675075054168701, -0.3657354712486267, -0.24731338024139404 }, 0.3961780320780492 }
, { { -0.6762292981147766, -0.024811485782265663, 1.8214235305786133 }, 0.3901911715933889 }
, { { -0.905547022819519, -0.8271730542182922, -0.9636279940605164 }, 0.07057358582419748 }
, { { 1.1066194772720337, -0.17779278755187988, 0.08708272874355316 }, 0.4710715877942552 }
, { { -0.6078516244888306, 0.33619487285614014, -0.276086688041687 }, 0.3438348116210809 }
, { { 1.8684074878692627, -0.06796807050704956, 0.9028781652450562 }, 0.3441783105648554 }
, { { -0.7409022450447083, -0.34725621342658997, -0.8029352426528931 }, 0.21884703625369306 }
, { { -0.5081180930137634, -0.36631521582603455, 2.230417013168335 }, 0.768890681496484 }
, { { -0.6943041086196899, -0.3137279152870178, 1.5869786739349365 }, 0.3986025098701931 }
, { { 0.7493807077407837, 2.8090922832489014, 0.8038313388824463 }, 0.4756844734737089 }
, { { -0.6844053864479065, -0.14970919489860535, -0.8244701623916626 }, 0.26707199648543406 }
, { { 1.537161111831665, 0.735927939414978, 0.4909364879131317 }, 0.44771361902855356 }
, { { 1.749261498451233, 0.20914678275585175, 0.6204587817192078 }, 0.42894733590995804 }
, { { -0.5733339190483093, 0.6051406264305115, 0.03641818091273308 }, 0.5798294678174766 }
, { { -0.7589687705039978, -0.5149730443954468, 1.1454917192459106 }, 0.41873647710696993 }
, { { -0.05679144710302353, 3.7772927284240723, -0.1680907905101776 }, 0.6198724087866133 }
, { { 0.9676327705383301, 3.318385362625122, 1.194267749786377 }, 0.3862170996134061 }
, { { -0.2844802737236023, 1.537797212600708, 0.1910410225391388 }, 1.22139638735694 }
, { { -0.32254695892333984, 3.4531116485595703, -0.3141982853412628 }, 0.6034041015264767 }
, { { -0.7231196761131287, -0.3596212565898895, -0.5751107335090637 }, 0.2102935035976298 }
, { { -0.5915605425834656, 0.08042755722999573, 1.3673137426376343 }, 0.4198700057040337 }
, { { 1.310836911201477, 0.20108787715435028, -0.4221164286136627 }, 0.43696545938117964 }
, { { -0.43208494782447815, -0.31616970896720886, 2.6703827381134033 }, 0.7428648633878625 }
, { { 0.9033530950546265, -0.10304564982652664, 0.8442068099975586 }, 0.5476026773357243 }
, { { 1.7062028646469116, 0.3152112662792206, 0.2792452275753021 }, 0.44409731626980087 }
, { { 1.120583176612854, 0.283238023519516, -0.11542977392673492 }, 0.37113209784281836 }
, { { 0.9593397974967957, -0.03496839106082916, -0.37316417694091797 }, 0.3172385730893269 }
, { { 1.856144905090332, 0.10583265125751495, 1.442669153213501 }, 0.5646097743142842 }
, { { 1.4128798246383667, 0.6346893310546875, -0.044355373829603195 }, 0.4032684452337602 }
, { { 1.271083116531372, -0.4015991687774658, 0.6439639329910278 }, 0.3732363493805618 }
, { { -0.45955681800842285, 0.4951651692390442, 2.6590280532836914 }, 1.2006103466109113 }
};

#endif // _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_