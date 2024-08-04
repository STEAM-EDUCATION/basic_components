# DHT11 Sensor

The DHT11 is a basic, digital temperature and humidity sensor. It uses a capacitive humidity sensor and a thermistor to measure the surrounding air, and spits out a digital signal on the data pin (no analog input pins needed). It’s fairly simple to use, but requires careful timing to grab data.

## Features

- Measures temperature from 0°C to 50°C
- Measures humidity from 20% to 90%
- Factory calibrated
- Easy to interface with microcontrollers
- Output: Serial data

## Specifications

- **Operating Voltage**: 3.5V to 5.5V
- **Operating Current**: 0.3mA (measuring), 60μA (standby)
- **Temperature Range**: 0°C to 50°C
- **Humidity Range**: 20% to 90%
- **Resolution**: 16-bit (Temperature and Humidity)
- **Accuracy**: ±1°C and ±1%
- **Output**: Serial data (8-bit humidity integer + 8-bit humidity decimal + 8-bit temperature integer + 8-bit fractional temperature + 8-bit parity bit)

## Pinout Configuration

- **Vcc**: Power supply (3.3V to 5.5V)
- **Data**: Outputs both Temperature and Humidity through serial Data
- **Ground**: Connected to the ground of the circuit

## Wire Connection

| DHT11 Pin | Arduino Pin |
|-----------|-------------|
| Vcc       | 3.3V - 5V   |
| Data      | Digital Pin 2|
| Ground    | Ground       |

## Applications

- Measure temperature and humidity
- Local Weather station
- Automatic climate control
- Environment monitoring

## Library & Reference

To use the DHT11 with Arduino, you can refer to the [DHT Sensor Library](https://www.arduino.cc/reference/en/libraries/dht-sensor-library/).

## Example Code

You can find an example of how to use the DHT11 sensor with an Arduino in the [dht11_sensor.ino](https://github.com/STEAM-EDUCATION/basic_components/blob/main/Digital_Temperature_Humidity_Sensor/Digital_Temperature_Humidity_Sensor.ino) file.

## Wiring Diagram

Please refer to the following wiring diagram to connect your DHT11 sensor to an Arduino:

- **Vcc**: Connect to Arduino 5V
- **Data**: Connect to Arduino Digital Pin 2 (use a 10k pull-up resistor)
- **Ground**: Connect to Arduino Ground

