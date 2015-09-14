#ifndef USERMAIN_H
#define USERMAIN_H

#define SSID "Moia"
#define SSID_PASSWORD "Starburst"
	
#include "user_config.h"
#include "ets_sys.h"
#include "osapi.h"
#include "gpio.h"
#include "os_type.h"
#include "user_config.h"
#include "user_interface.h"

#include "OSGNeoPixel/OSGNeoPixelController.h"
#include "OSGPubSubController/OSGPubSubController.h"
// #include "OSGWiFi/OSGWiFi.h"

#define user_procTaskPrio        0
#define user_procTaskQueueLen    1
os_event_t    user_procTaskQueue[user_procTaskQueueLen];
static void loop(os_event_t *events);

//Main code function

#endif