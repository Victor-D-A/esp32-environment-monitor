# esp32-environment-monitor
An ESP32 environmental monitoring system that uses C++ and a DHT11 sensor. It is developed with scaling in mind for wireless communication, backend integration, and real-time data.


## Overview
 
### Planned
- A control dashboard that communicates and displays real-time data. 
- Send commands from a computer that activates functionality in physical form.
- Save logs in the backend.
- Simulate issues and recovery.

This project is the foundation for a mini spacecraft-inspired system. It will
combine embedded systems, backend engineering, and full stack development.

## Hardware
- ESP32 Development Board
- DHT11 Temperature and Humidity Module
- Breadboard
- DuPont Cables

## Technologies

### Current
- C++
- Arduino
- DHT Library

### Planned
- React
- TypeScript

## Current Implementation
1. Connected the DHT11 sensor to the ESP32 using GPIO4.
2. Wrote the setup for the DHT11 sensor.
3. Created variables that store the readings of temperature and the humidity and 
	display a failure if either fails to obtain a reading.
4. Program successfully compiled but physical readings have not been tested.

## Development Roadmap
- Display onboard systems current operational conditions
- Allow device to receive commands from the computer.
- Activate proper parts of the device that correspond with the commands.
- Detect any failures and report/document warnings.
- Record data for analysis.
- Simulate errors and interruptions along with recovery methods.

## Development Approach
This project is a learning experience that connects physical parts with software that communicates with it.
AI is used as an educational resource for explanations, guided exercises, debugging assistance and code review.
The project's code is independently written by the developer.
