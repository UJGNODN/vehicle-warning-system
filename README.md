# vehicle-warning-system

## Overview
A C program that receives vehicle data (speed, RPM, coolant temp, fuel level)
and manages warning light states using bit flags.

## File Structure
- `main.c`      : Input handling and program flow
- `vehicle.h/c` : Vehicle data struct and display function
- `danger.h/c`  : Warning light bit flag system

## Key Concepts
- Fixed-width integer types (uint8_t, uint16_t) via stdint.h
- Bitwise operations ( |=, &, ~ ) for flag management
- Multi-file source and header structure
- Pointer-based struct passing

## Warning Flags
| Bit | Flag | Trigger Condition |
|-----|------|-------------------|
| 0 | Engine Warning | RPM > 7000 |
| 1 | Low Fuel | Fuel < 20% |
| 2 | Battery Risk | Speed > 280 && Temp > 80 |
| 3 | AC Failure | Coolant Temp > 60 |
| 4 | Wiper Failure | Speed > 260 && RPM > 6000 |
| 5 | Brake Failure | Speed > 290 && RPM > 7000 |
| 6 | Acceleration Failure | Speed > 270 && RPM > 6000 |
| 7 | Steering Failure | Speed > 280 && RPM > 5000 |
