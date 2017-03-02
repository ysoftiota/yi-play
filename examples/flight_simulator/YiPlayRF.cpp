
#include "YiPlayRF.h"


RFM69 radio(RFM69_NSS, RFM69_INTERRUPT_PIN, IS_RFM69HW, RFM69_INTERRUPT_NUM);
bool radioStarted = false;

byte packetBuffer[100];

void setupRadio(uint8_t networkID, uint8_t nodeID, const char *encryptkey) {
	radio.initialize(FREQUENCY, nodeID, networkID);

	if (IS_RFM69HW) radio.setHighPower();
	if (encryptkey != NULL) radio.encrypt(encryptkey);
	radioStarted = true;
}


bool radioSend(uint8_t address, const byte *data){
  return radio.sendWithRetry(address, data, sizeof(data), RFM69_RETRIES, RFM69_RETRY_DELAY);
}


