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
4. Program successfully compiled and uploaded to the ESP32.
5. Temperature and Humidity readings correctly displayed in the Serial Monitor.
6. Updated readings every 2 seconds.
7. Failed sensor readings are accounted for.
8. Initial hardware testing passed for temperature and humidity changes, along with the stability of sensor readings.

## Testing and Validation
### Humidity Validation

The humidity values were manually assigned to test what would happen if readings outside and inside of the valid range were received. 
The tests were manually performed.

| Test Value | Expected Result | Actual Result | Status |
| --- | --- | --- | --- |
| 145% | Reject | Rejected | Pass |
| -5% | Reject | Rejected | Pass |
| 0% | Accept | Accepted | Pass |
| 100% | Accept | Accepted | Pass |
| 50% | Accept | Accepted | Pass |

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
