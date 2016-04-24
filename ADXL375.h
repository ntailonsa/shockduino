#ifndef ADXL375_h
#define ADXL375_h

#include "Arduino.h"
#include "AccelReading.h"
#include "SPI.h"

#define ADXL375_REG_DEVID               0x00    // Device ID
#define ADXL375_REG_THRESH_SHOCK        0x1D    // Shock threshold
#define ADXL375_REG_OFSX                0x1E    // X-axis offset
#define ADXL375_REG_OFSY                0x1F    // Y-axis offset
#define ADXL375_REG_OFSZ                0x20    // Z-axis offset
#define ADXL375_REG_DUR                 0x21    // Shock duration
#define ADXL375_REG_LATENT              0x22    // Shock latency
#define ADXL375_REG_WINDOW              0x23    // Tap window
#define ADXL375_REG_THRESH_ACT          0x24    // Activity threshold
#define ADXL375_REG_THRESH_INACT        0x25    // Inactivity threshold
#define ADXL375_REG_TIME_INACT          0x26    // Inactivity time
#define ADXL375_REG_ACT_INACT_CTL       0x27    // Axis enable control for activity and inactivity detection
#define ADXL375_REG_SHOCK_AXES          0x2A    // Axis control for single/double tap
#define ADXL375_REG_ACT_SHOCK_STATUS    0x2B    // Source for single/double tap
#define ADXL375_REG_BW_RATE             0x2C    // Data rate and power mode control
#define ADXL375_REG_POWER_CTL           0x2D    // Power-saving features control
#define ADXL375_REG_INT_ENABLE          0x2E    // Interrupt enable control
#define ADXL375_REG_INT_MAP             0x2F    // Interrupt mapping control
#define ADXL375_REG_INT_SOURCE          0x30    // Source of interrupts
#define ADXL375_REG_DATA_FORMAT         0x31    // Data format control
#define ADXL375_REG_DATAX0              0x32    // X-axis data 0
#define ADXL375_REG_DATAX1              0x33    // X-axis data 1
#define ADXL375_REG_DATAY0              0x34    // Y-axis data 0
#define ADXL375_REG_DATAY1              0x35    // Y-axis data 1
#define ADXL375_REG_DATAZ0              0x36    // Z-axis data 0
#define ADXL375_REG_DATAZ1              0x37    // Z-axis data 1
#define ADXL375_REG_FIFO_CTL            0x38    // FIFO control
#define ADXL375_REG_FIFO_STATUS         0x39    // FIFO status

class ADXL375
{
  public:
    ADXL375();
    void init();
    AccelReading getXYZ();
    uint8_t readRegister(uint8_t reg);
    void writeRegister(uint8_t reg, uint8_t value);
};

#endif