# ESP8266 KNX Communication

This repository contains code for setting up an ESP8266 module to communicate with the KNX home automation protocol.

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

