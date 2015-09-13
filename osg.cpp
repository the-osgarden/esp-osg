#include "osg.h"

OSG::OSG() {
	Serial.begin(115200);
	delay(10);
	Serial.println("Booting the Open Source Garden...");
	Serial.println("Starting WiFi Module");
	wifiClient = new OSGWiFi();
	wifiClient->connect();
	PixelController = new OSGNeoPixelController();
	Serial.println("Hello.");
	// pubsub = new OSGPubSubController();

	pubsub = new OSGPubSubController((char*) "192.168.1.146", 1883, wifiClient->getClient());
}
