# Tugas Diagram ERC dan FERC

| Nama | Division | Sub-Division |
| ----- | ---------- | ---------- |
| Nibras Faros Siahaan | ELC | Microcontroller |


# ERC

Berikut diagram yang saya buat

![ERC_Diagram](https://github.com/user-attachments/assets/da540e29-be60-4c41-bbc6-b068dba18e7d)

Ada 2 board yaitu board transmitter dan juga board receiver

## Transmitter

Electric Remote Control (ERC) System
This repository contains the design and explanation of an Electric Remote Control (ERC) system. The ERC system is designed to wirelessly control an electric motor and servo system through a transmitter and receiver configuration.


System Overview
The ERC system consists of two primary components:

Transmitter Board: The user interface for sending control signals.
Receiver Board: The controller that processes commands and manages the motor and servo.
Communication between the two boards is achieved using the SPI protocol.

Diagram Explanation
1. Transmitter Board
The transmitter board is responsible for generating control signals and relaying them to the receiver. Its components include:

Microcontroller:
Processes input signals from buttons.
Sends data to the transmitter module.
Updates the LED display with relevant system information.
Transmitter:
Sends control signals wirelessly to the receiver.
LED Display:
Displays system information such as the status of the connection or battery levels.
Buttons:
Provides input for controlling the motor and servo (e.g., throttle up/down, start/stop).
Battery:
Powers the transmitter board.
2. Receiver Board
The receiver board interprets commands sent by the transmitter and controls the motor and servo accordingly. Its components include:

Receiver:
Receives wireless signals from the transmitter board.
Microcontroller:
Processes the received data and generates control signals for the ESC and servo.
ESC (Electronic Speed Controller):
Controls the speed and direction of the motor based on commands from the microcontroller.
Motor:
Executes movement based on ESC commands.
Servo:
Adjusts the angle or position of a mechanical component.
Battery:
Powers the receiver board and all connected components.
Communication Protocol
The transmitter and receiver communicate using the SPI protocol for fast and reliable data exchange.

Features
Wireless Communication: Enables seamless control between the transmitter and receiver.
Dynamic Motor Control: Adjusts motor speed and direction using the ESC.
Servo Adjustment: Allows precise positioning using a servo.
User Feedback: The LED display provides real-time system information to the user.
Future Improvements
Adding sensors for telemetry data such as battery levels, RPM, or temperature.
Implementing bi-directional communication for real-time feedback from the receiver to the transmitter.
Enhancing security with encryption protocols for communication
