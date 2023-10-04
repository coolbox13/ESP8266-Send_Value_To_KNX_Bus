# ESP8266-Send_Value_To_KNX_Bus

Making use of the library https://github.com/envy/esp-knx-ip from Nico Weichbrodt, envy. A simple script to send a value to a group address on the KNX bus.
Default physical address is changed to 1.1.201, which work in my setup.
A value of intitially 40% is now send to address 3/0/15. The address is dummy for me. 
The code is meant to be incorporated in a larger programm which is supposed to be a cheap replacement of a real KNX Thermostat.
You could make use of this script to send values to the KNX bus yourself.
