# SOS LED Signal using Arduino

## Overview

This project demonstrates the implementation of the Morse code distress signal **SOS (... --- ...)** using an Arduino and a single red LED. The LED continuously blinks in the SOS pattern, making it a simple and effective beginner-level Arduino project for learning digital output control, timing, and basic embedded programming.

## Morse Code Representation

| Character | Morse Code |
| --------- | ---------- |
| S         | ...        |
| O         | ---        |
| S         | ...        |

The complete distress signal:

```text
... --- ...
```

## Components Required

* Arduino Uno (or compatible board)
* Red LED
* 330 Ω Resistor
* Breadboard
* Jumper Wires
* USB Cable

## Circuit Connections

| Arduino Pin | Component                        |
| ----------- | -------------------------------- |
| Pin 12      | LED Anode (+)                    |
| GND         | 330 Ω Resistor → LED Cathode (-) |

### Circuit Layout

```text
Arduino Pin 12 -----> LED Anode (+)

LED Cathode (-) -----> 330Ω Resistor -----> GND
```

## Working Principle

The program uses a base time unit of **100 ms**.

### Short Blink (Dot)

```text
LED ON  = 100 ms
LED OFF = 100 ms
```

### Long Blink (Dash)

```text
LED ON  = 300 ms
LED OFF = 100 ms
```

### Signal Sequence

1. Three short blinks (S)
2. Short pause
3. Three long blinks (O)
4. Short pause
5. Three short blinks (S)
6. Long pause before repeating

## Arduino Code

```cpp
const int red = 12;
const int unit = 100;

void setup()
{
    pinMode(red, OUTPUT);
}

void loop()
{
    // S (...)
    for(int i = 0; i < 3; i++)
    {
        digitalWrite(red, HIGH);
        delay(unit);
        digitalWrite(red, LOW);
        delay(unit);
    }

    delay(2 * unit);

    // O (---)
    for(int i = 0; i < 3; i++)
    {
        digitalWrite(red, HIGH);
        delay(3 * unit);
        digitalWrite(red, LOW);
        delay(unit);
    }

    delay(2 * unit);

    // S (...)
    for(int i = 0; i < 3; i++)
    {
        digitalWrite(red, HIGH);
        delay(unit);
        digitalWrite(red, LOW);
        delay(unit);
    }

    delay(6 * unit);
}
```

## Output

The LED repeatedly flashes the Morse code distress signal:

```text
SOS
(... --- ...)
```

## Learning Outcomes

* Understanding Arduino digital output
* Working with LEDs and current-limiting resistors
* Using loops in embedded programming
* Implementing timing with `delay()`
* Introduction to Morse code communication

## Future Enhancements

* Add a buzzer for audio Morse code output
* Support custom messages via Serial Monitor
* Use multiple LEDs for visual effects
* Replace `delay()` with `millis()` for non-blocking execution
* Display Morse code on an LCD or OLED screen

## Author

Created as a beginner Arduino project to demonstrate Morse code signaling using a single LED.
