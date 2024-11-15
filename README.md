# Button-to-Note Mapping Project

This project allows you to play musical notes using an Arduino and a buzzer. By pressing combinations of four buttons, each corresponding to a musical note, the system generates sound through the buzzer. This interactive "button piano" enables users to explore the relationship between buttons and musical notes. The project is ideal for learning about electronics and sound generation with Arduino.

## Hardware Components

- Arduino Board
- Buzzer: Produces the musical notes when triggered by button presses.
- Buttons (4): Each button, or combination of buttons, corresponds to a different musical note. The buttons are mapped as follows:
    - Button 1: C4 (261.63 Hz)
    - Button 2: D4 (293.66 Hz)
    - Button 3: E4 (329.63 Hz)
    - Button 4: F4 (349.23 Hz)
- Resistors
- Jumper Wires

## Software Details

The code is structured to detect the state of each button and play the corresponding musical note on the buzzer. The setup and loop functions work as follows:

### Variable Initialization
Pin Definitions: The pins for the four buttons and the buzzer are defined.
Frequency Definitions: The frequencies for each musical note (C4, D4, E4, F4, G4, A4, B4, and C5) are stored as float variables.

### setup() Function
Initializes the button pins as input and the buzzer pin as output to control the sound generation.

### loop() Function
Checks the button inputs and triggers the corresponding musical note by calling the tone() function.
- Single Buttons: Each button corresponds to a specific note (C4, D4, E4, F4).
- Button Combinations: If two or more buttons are pressed together, a different note (like G4, A4, or B4) is triggered.
If all four buttons are pressed at once, the highest note (C5) is played.
If no buttons are pressed, the noTone() function is called to stop the buzzer.

### Example Notes and Button Mappings
- Button 1 plays the note C4.
- Button 2 plays the note D4.
- Button 3 plays the note E4.
- Button 4 plays the note F4.

### Combinations:
- Button 1 + Button 2 plays G4.
- Button 1 + Button 3 plays A4.
- Button 1 + Button 4 plays B4.
- All buttons pressed together play C5.
