# BTInjector
A tool that sends keystrokes wirelessly using Bluetooth for HID automation.

# Key Features
- Minimal Setup.
- Simply controlled by Serial Bluetooth Terminal App.
- Execute payloads by just sending numbers.
- Store upto `9` payloads in the flash memory.

# Hardware Requirements
- `1` Arduino Leonardo
- `1` HC-05 Bluetooth Module
- `4` Male to Female Jumper Wires

# Pinout Table
| Arduino Leonardo | HC-05 |
|------------------|-------|
| 5V               | VCC   |
| GND              | GND   |
| TX               | D10   |
| RX               | D11   |
- `D` means Digital Pin.

# Connection Diagram
![Arduino Leonardo with HC-05 Module](https://github.com/user-attachments/assets/bf12087f-2243-4962-9877-d5ab5080abec)

# Setup
1. Download Arduino IDE from [here](https://www.arduino.cc/en/software) according to your Operating System.
2. Simply install it.

# Install
1. Download or Clone the Repository.
2. Open the folder and just double click on `BTInjector.ino` file.
3. It opens in Arduino IDE.
4. Compile the code.
5. Select the correct board from the `Tools` → `Board` → `Arduino AVR Boards`.
   - It is `Arduino Leonardo`.
6. Select the correct port number of that board.
7. Upload the code.

# Generate Payloads
- Refer to this github repository - [here](https://github.com/wirebits/ArduinoHID-Web).
- There are `4` example codes in that repository.
- Copy the code between `Keyboard.begin();` and `Keyboard.end();` and paste at the area of the code where `//Put your payload here ;)` is present.

# Use
1. Turn on your mobile bluetooth.
2. Pair the `HC-05` normally.
3. Enter the password - It is generally `0000` OR `1234`.
4. Then open `Serial Bluetooth Terminal` app.
5. Click on `☰`.
6. Click on `Devices`.
7. Click on `Bluetooth Classic`.
8. Click on the `HC-05`.
9. After that, when it show `Connected` it means it is ready to execute payloads.
10. Just type the number and click on Send button.
    - The payload of that number executes immediately.
