# 02_Button_LED – STM32 Project

This project demonstrates controlling an RGB LED using a push button input on STM32F103C8T6 (Blue Pill).  
When the button is pressed, the LED color changes in sequence: Red → Green → Blue.

---

## Components
- STM32F103C8T6 (Blue Pill)
- RGB LED KY-016 (common cathode)
- Push button (6x6x5mm, 2-pin)
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
| PA0       | Button     |

---

## Features
- Press button to change RGB LED color.
- Demonstrates GPIO Input (button) and GPIO Output (LED).
- Basic debounce handled with HAL_Delay.

---

## Steps to Run
1. Connect RGB LED to PA5, PA6, PA7 (via resistors).  
2. Connect push button to PA0 with internal pull-up.  
3. Open the project in STM32CubeIDE.  
4. Build the project.  
5. Flash firmware to STM32 using ST-LINK/V2.  
6. Press the button to cycle LED colors.

---

## File Structure
- `Core/Src/` : main program (C source files)  
- `Core/Inc/` : header files  
- `Drivers/` : HAL library  
- `02_Button_LED.ioc` : STM32CubeMX configuration  
- `Images/` : demo photos  

---

## Demo
### Wiring Diagram
![Wiring Diagram](images/wiring.jpeg)

### Demo Board
![Demo Board](Images/button_led_board.jpeg)

### Demo Video
[![Demo Video](https://img.youtube.com/vi/Nwj16jEZGUA/0.jpg)](https://youtube.com/shorts/Nwj16jEZGUA?si=g4N_wúiWxUfQWG3p)

---

## Future Work
- Add debounce using timer interrupt.  
- Implement long press and short press actions.  
- Use PWM for brightness control.  

---

## Notes
- Enable GPIO_PULLUP for PA0 to avoid floating input.  
- Use stable power supply (USB 5V or regulated 3.3V).  

---

## License
This project is provided AS-IS for learning and portfolio purposes.
