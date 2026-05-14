# Latent Fields

Zoe Homan
Creative Embedded Systems — Spring 2026
![Final Sculpture]dome.jpg)
![Simulation visuals](domeVisuals.jpg)
## Overview

Latent fields is an interactive audiovisual installation built around a copper dome structure, capacitive touch sensing, and generative visuals/audio.

The project explores the relationship between simulation, control, and interruption. The inner wires were designed as interaction points that continue and intensify the audiovisual system, while touching the outer dome interrupts the environment and collapses it into static.

The installation was designed with an ESP32 microcontroller, conductive copper surfaces, p5.js visuals, p5.sound audio synthesis, and a planned HC-SR501 PIR motion sensor for viewer detection.

---

## Demo Note

The final video uses keyboard-triggered inputs to simulate the intended sensor states. During move-out before filming, the breadboard assembly, acrylic electronics enclosure, and motion sensor were accidentally packed away, so the physical sensing layer could not be recorded in its fully connected state.

---

## Interaction States

- Motion detection / viewer approach
- Internal touch points that increase audiovisual intensity
- Faster arpeggios
- Color pulsing
- Geometric distortion
- Dome touch interruption into static

---

## Controls for Demo

| Key | Interaction |
|---|---|
| Click | Start audio / enter system |
| 1 | Add heavenly audio layers |
| 2 | Increase speed |
| 3 | Toggle color pulse |
| 4 | Toggle visual distortion |
| Space | Toggle dome/static interruption |
| H | Return to heavenly state |
| R | Reset demo |

---

## Files

- `index.html` — p5.js audiovisual demo
- `src/main.cpp` — ESP32 capacitive touch code
- `platformio.ini` — PlatformIO board configuration

---

## Hardware

- ESP32 development board
- Conductive copper tape
- Wood dowel dome structure
- Clear acrylic electronics enclosure
- Breadboard and jumper wires
- HC-SR501 PIR motion sensor
- Capacitive touch surfaces

---

## Software

- p5.js
- p5.sound
- PlatformIO
- Arduino framework for ESP32

---

## Running the p5.js Demo

Open `index.html` in a browser, or run a local server:

```bash
python3 -m http.server 8000
```

Then open:

```text
http://localhost:8000
```

Click once to start the audio. Use the keyboard controls above to simulate interaction states.

---

## Uploading ESP32 Code

Install PlatformIO, then upload from the project folder:

```bash
pio run --target upload
```

Open the serial monitor:

```bash
pio device monitor
```

The ESP32 code reads a capacitive touch pin and sends touch/release messages over serial.

---

## Project Process

The physical structure was developed through paper prototyping, laser cutting wood dowels, constructing two primary rings, wrapping the rings and leg pieces in conductive copper tape, gluing the dome together, drilling wire-routing holes into the acrylic case, and reinforcing glued joints with additional copper tape to restore conductivity.

