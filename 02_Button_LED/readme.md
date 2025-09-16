# 01_Blink_LED – STM32 Project

This project demonstrates controlling an RGB LED using STM32F103C8T6 (Blue Pill).  
The program cycles through red, green, and blue colors with a fixed delay.

---

## Components
- STM32F103C8T6 (Blue Pill)
- RGB LED KY-016 (common cathode)
- Resistors (220Ω – 330Ω for each LED pin)
- Jumper wires
- Breadboard

---

## Pinout

| STM32 Pin | Function   |
|-----------|------------|
| PA5       | LED RED    |
| PA6       | LED GREEN  |
| PA7       | LED BLUE   |

---

## Features
- Toggle RED, GREEN, and BLUE LEDs with delay.  
- Demonstrates basic GPIO Output.  
- Adjustable delay using HAL_Delay.  

---

## Steps to Run
1. Connect the RGB LED to PA5, PA6, PA7 (via resistors).  
2. Open the project in STM32CubeIDE.  
3. Build the project.  
4. Flash firmware to STM32 using ST-LINK/V2.  
5. Power on the board and observe the LED cycling through RED, GREEN, BLUE.  
6. Adjust `HAL_Delay()` in `main.c` to change blink speed (optional).  

---

## File Structure
- `Core/Src/` : main program (C source files)  
- `Core/Inc/` : header files  
- `Drivers/` : HAL library  
- `01_Blink_LED.ioc` : STM32CubeMX configuration  
- `images/` : demo photos  

---

## Demo
### Demo Board
![Demo Board](images/board.jpeg)

### Demo Video
[![Demo Video](https://img.youtube.com/vi/wllODI0WoEs/0.jpg)](https://youtube.com/shorts/wllODI0WoEs)

---

## Future Work
- Add button input to change colors manually.  
- Implement PWM for smooth RGB fading effects.  
- Integrate with sensors for interactive lighting.  

---

## Notes
- Ensure correct HAL libraries are included.  
- External resistors are required for the RGB LED KY-016 (no built-in resistors).  
- Use stable power supply (USB 5V or regulated 3.3V).  

---

## License
This project is provided AS-IS for learning and portfolio purposes.
