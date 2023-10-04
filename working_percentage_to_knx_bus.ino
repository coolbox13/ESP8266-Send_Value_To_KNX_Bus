#include <esp-knx-ip.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <ESP8266WebServer.h>  // Include the ESP8266WebServer library

// WiFi credentials
const char* ssid = "coolbox_down";
const char* password = "1313131313131";

address_t ph_addr = {};   // empty assigment to change default 1.1.0 into 1.1.201

uint8_t counter = 40; //start value for dummy percentage

void setKNXPhysicalAddress (int area, int line, int member) {
    // We want to send a counter to 3/0/16
    address_t receiving_pa;
    receiving_pa.pa.area = area;
    receiving_pa.pa.line = line;
    receiving_pa.pa.member = member;
    // Set the physical address
    knx.physical_address_set(receiving_pa);
}

address_t calculate_ga (int area, int line, int member) {
    address_t tmp;
    tmp.ga.area = area;
    tmp.ga.line = line;
    tmp.ga.member = member;
    return tmp;
}

void setup() {

  Serial.begin(115200);

  // Connect to WiFi
  Serial.println("Connecting to WiFi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Waiting for WiFi connection...");
  }
  Serial.print("Connected to WiFi!\nIP Address: ");
  Serial.println(WiFi.localIP());

  // Start knx
  knx.start(nullptr); //knx loop started without webserver

  // set physical address to 1.1.201
  setKNXPhysicalAddress(1,1,201);
}



void loop() {
  knx.loop();

  knx.write_1byte_uint(calculate_ga(3,0,15), counter);    // send value to knx address 3/0/15

  counter++;

  delay(10000); // Wait one second
}
