# Water Level Monitoring System
 This is a simple water level monitoring system using a water level sensor. The system uses LEDs to indicate different water levels and a buzzer for additional alerts.

## How It Works
- The system works by continuously reading the analog value from the water level sensor, which is connected to pin A0. The water level sensor provides varying analog readings based on the water level it is exposed to.

- The code sets predefined threshold values (130, 180, 220, 235) to categorize different water levels. Depending on the analog reading, the system illuminates different LEDs and activates the buzzer to visually and audibly indicate the current water level.

