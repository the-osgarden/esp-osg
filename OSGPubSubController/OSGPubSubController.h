#ifndef OSGPUBSUBCONTROLLER_H
#define OSGPUBSUBCONTROLLER_H

#include "Arduino.h"
#include <PubSubClient.h>
#include <ESP8266WiFi.h>

class OSGPubSubController {


//a pointer of this type points to any member of OSGPubSubController that takes char* byte int!!!
typedef int (OSGPubSubController::*callback)(char*, byte*, uint16_t);
public:

	OSGPubSubController(char* host, uint16_t port, WiFiClient* wifi) {
		this->wifi = wifi;
		this->myClient = new PubSubClient((char*) host, uint16_t(port), &OSGPubSubController::callbackMbrFn, *wifi);
		
		Serial.println("PubSubController instantiated.");
	}

	static void callbackMbrFn(char* topic, byte* payload, unsigned int length) {
		Serial.println("fkn finally");
	}
private:
	WiFiClient* wifi;
	PubSubClient* myClient;
};

#endif