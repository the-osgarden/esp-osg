#ifndef OSG_WIFI
#define OSG_WIFI
#include <ESP8266WiFi.h>

class OSGWiFi {
public:
	OSGWiFi() {
		this->ssid = (char*) "Moia";
		this->password = (char*)  "starburst";
		
	};

	WiFiClient* getClient() {
		return this->espClient;
	};

	void connect() {
		Serial.print("Connecting to ");
		Serial.println(ssid);

		WiFi.begin(ssid, password);

		while (WiFi.status() != WL_CONNECTED) {
			delay(500); -
			Serial.print(".");
		}

		Serial.println("");
		Serial.println("WiFi connected");
		Serial.println("IP address: ");
		Serial.println(WiFi.localIP());
	}
private:
	WiFiClient* espClient;
	char* ssid;
	char* password;
};
#endif