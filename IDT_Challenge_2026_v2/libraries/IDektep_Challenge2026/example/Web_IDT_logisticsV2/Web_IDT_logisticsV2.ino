// ####################################################################################
// ###################### IDEKTEP Logistic 2026 ##########################
// ####################################################################################

#include <Arduino.h>
#include <WifiConfig.h>
#include <WARC.h>
#include <Motor.h>
#include <Auto.h>
#include <Sensors.h>

WifiConfig wifi;
WARC warc;
Motor motor;
Sensors ultra;

const char *ssid = "IDT 0";
const char *password = "12345678";

AsyncWebServer server(80);
AsyncWebSocket ws("/ws");

void setup()
{
  // ##################################################################################
  // ############################# SERIAL INITTIALIZE #################################
  Serial.begin(115200);

  // ##################################################################################
  // ############################# WIFI INITTIALIZE #################################
  wifi.wifiInit(ssid, password);
  // ##################################################################################
  // ############################# WEB SERVER INITTIALIZE #############################
  server.on("/", HTTP_GET, warc.handleRoot);
  server.on("/readings", HTTP_GET, warc.handleReadSensor);
  server.onNotFound(warc.handleNotFound);
  server.addHandler(&ws);
  ws.onEvent(warc.onWebSocketEvent);
  server.begin();
  Serial.println("HTTP server started");

  // ##################################################################################
  // ############################# MOTOR INITTIALIZE ##################################
  motor.motorInit();
  motor.adjectMotorSpeed(255, 255, 255, 255); // Please adject value of motor speed in range 120-255 <------- EDIT ME
  //-----------------------------BR_Speed, FR_Speed, BL_Speed, FL_Speed --------------------

  // ##################################################################################
  // ############################# ULTRASONIC SENSOR INITTIALIZE ######################
  ultra.ultraInit();
  ultra.ultraAdjustDistance(0); // Please adject value of ultrasonic distance to do something ?? <---------- EDIT ME
}

void loop()
{
  ultra.ultraCheckDistance();
}
