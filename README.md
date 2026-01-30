# Fishtank Mini

ESP32-C3 based aquarium monitoring system with OLED display.

## Hardware

- **Microcontroller:** ESP32-C3-DevKitM-1
- **Display:** 0.42" SSD1306 OLED (72x40 pixels) via I2C

## Features

- Real-time aquarium monitoring display
- I2C OLED display support using U8g2 library
- Serial debugging support

## Pin Configuration

| Signal | GPIO |
|--------|------|
| SDA    | 6    |
| SCL    | 7    |

## Building

Requirements:
- PlatformIO CLI or VS Code with PlatformIO extension
- Python 3.7+

Build the project:
```bash
cd "fishtank mini"
pio run
```

## Uploading

Upload to the ESP32-C3 board:
```bash
pio run --target upload
```

Monitor serial output:
```bash
pio device monitor
```

## Libraries

- **U8g2** - Display graphics and text rendering
- **Wire** - I2C communication (built-in)
- **Arduino** - Framework

## Project Structure

```
fishtank mini/
├── src/
│   └── main.cpp          # Main application code
├── include/              # Header files
├── lib/                  # Custom libraries
├── platformio.ini        # PlatformIO configuration
└── README.md             # This file
```

## Next Steps

- [ ] Add temperature sensor integration (DS18B20 or DHT)
- [ ] Add pH sensor support
- [ ] Add water level monitoring
- [ ] Implement WiFi connectivity for remote monitoring
- [ ] Add data logging to SD card
- [ ] Create mobile app for notifications

## License

MIT License - See LICENSE file for details

## Author

Dan
