# Ahmad Bahloul Avionics Development (ABAD)

## Objective
Brainstorm, design, construct and revise a flight computer for high power rocket avionics.

## Requirements (from high-low priority)
- Capable of Dual Deploy, detect launch, flight, apogee, and fire respective pyrotechnics for drogue and main parachute at programmable altitudes.
- Detect and record max altitude, speed, and acceleration
- GPS/GNSS Location tracker to aid in recovery, preferably with Live telemetry
- High-speed data logging to onboard non-volatile flash memory and SD card
- Live Telemetry to ground during flight over 915 or 433 MHz with Live Ground station UI
- Redundancy and safety checks of the board and its systems to prevent accidental burnouts, shorts, and accidents upon startup and pre-flight
- Ability to fire parachutes early or not fire parachutes at all if flight profile is irregular or not met.
- Use data to have velocity and position predictions accurately

## Hardware
**MCU**: ESP32-WROOM-32  
**MPU**: MPU6050  
**LoRa**: REYAX RYLR998  
**GPS**: Beitian Dual BN-220  
**Pressure & Temperature Sensor**: GY-63 MS5611  
