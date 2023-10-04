# ESP8266 KNX Communication

This repository contains code for setting up an ESP8266 module to communicate with the KNX home automation protocol.
It changes the default physical address to 1.1.201 because that fits better in my KNX setup.
It sends a dummy % counter on a non existant groupaddress. Change for your needs.

## Overview

The code initializes the ESP8266 WiFi module, connects it to a specified WiFi network, and then communicates with the KNX protocol to send and receive data. The main functionality includes setting a physical address for the ESP8266 module in the KNX network and sending a counter value to a specified KNX address.

## Features

- WiFi connectivity using ESP8266.
- KNX communication setup.
- Setting a physical address in the KNX network.
- Sending a counter value to a specified KNX address.

## Prerequisites

- ESP8266 development board.
- Arduino IDE with ESP8266 board support installed.
- `esp-knx-ip.h`, `ESP8266WiFi.h`, and `WiFiUdp.h` libraries.

## Setup

1. **Clone the Repository**
   
   ```bash
   git clone https://github.com/yourusername/esp8266-knx.git
   ```

Or.. just download the .ino file..:)

## Install Libraries
Open Arduino IDE and install the required libraries:
- esp-knx-ip
- ESP8266WiFi
- WiFiUdp
- WiFiManager

## Upload to ESP8266
Connect your ESP8266 board to your computer, select the correct board and port in the Arduino IDE, and upload the code.

## Acknowledgments

- Nico Weichbrodt (envy) for the esp-knx-ip library, which provides the essential functionality for KNX communication with the ESP8266 module.
- KNX Association for the KNX protocol specification.
- ESP8266 community for the WiFi module support.
- WiFiManager Library: Special thanks to the developers and contributors of the WiFiManager library for providing an elegant solution to manage WiFi configurations for ESP8266 and ESP32 devices.
