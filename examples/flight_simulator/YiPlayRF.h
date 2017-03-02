#ifndef YiPlayRF_h
#define YiPlayRF_h

#include <RFM69.h> // obtained from https://github.com/LowPowerLab/RFM69

#define RFM69_NSS           8
#define RFM69_INTERRUPT_PIN 3
#define RFM69_INTERRUPT_NUM digitalPinToInterrupt(RFM69_INTERRUPT_PIN)

#define FREQUENCY           RF69_868MHZ
#define IS_RFM69HW          true

#define RFM69_RETRIES       4
#define RFM69_RETRY_DELAY   100

extern RFM69 radio;

void setupRadio(uint8_t networkID, uint8_t nodeID, const char *encryptkey=NULL);

bool radioSend(uint8_t address, const byte *data);

#endif
