#ifndef OSG_H
#define OSG_H
#include "Arduino.h"
	
#include "OSGNeoPixel/OSGNeoPixelController.h"
#include "OSGPubSubController/OSGPubSubController.h"
#include "WiFi/OSGWiFi.h"

class OSG
{
public:
	OSG();	
private:
	OSGWiFi* wifiClient;
	OSGPubSubController* pubsub;
	OSGNeoPixelController* PixelController;

};

#endif