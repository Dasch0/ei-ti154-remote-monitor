#ifndef INA228_H_
#define INA228_H_

/// Initialize the ina228
void ina228_init();
/// sample from the ina228
void ina228_sample(float *buf, uint32_t len);

#endif
