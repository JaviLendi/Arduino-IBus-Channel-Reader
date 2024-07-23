# Arduino-IBus-Channel-Reader

This repository contains an Arduino sketch for reading pulse widths from multiple channels and transmitting the data using the IBUS protocol. The code is designed to read input from six channels connected to specified digital pins on an Arduino board, then send these readings via the IBUS communication protocol. It is ideal for applications requiring integration with radio control systems or other IBUS-compatible devices.

The code provided in this repository demonstrates how to set up an Arduino to read pulse widths from six input channels and transmit these values using the IBUS protocol. The main features include:

- **Channel Setup**: Configurable to read from six different input pins.
- **IBUS Protocol**: Utilizes the IBUS library (from @Cleric-K) to transmit channel data.
- **Serial Communication**: Initializes serial communication for debugging or monitoring.
- **Pulse Width Reading**: Uses the `pulseIn` function to measure pulse widths from each channel.
- **Data Transmission**: Sends the read pulse widths over the IBUS protocol at regular intervals.
- **Integration**: Used with [vJoySerialFeeder](https://github.com/Cleric-K/vJoySerialFeeder) for feeding data from the serial port of the Arduino to a virtual joystick.

## Key Components

- **Arduino Board**: Hardware platform for running the code.
- **IBUS Library**: A library to facilitate communication using the IBUS protocol.
- **Digital Pins**: Configured to read input signals from connected devices.
- **PulseIn Function**: Reads the duration of high pulses on the input pins.
- **Serial Monitor**: Can be used to monitor the setup process and debug if needed.

## Usage

1. **Connect the Channels**: Attach the signal wires for each of the six channels (from the receiver) to the corresponding pins (2-7) on the Arduino. Don't forget to connect the ground pin and power the receiver from the 5V pin of the Arduino or with an external battery.  
   ![image](https://github.com/user-attachments/assets/d511f729-9d1e-4217-939f-40a8f93245b2)
2. **Upload the Code**: Load the provided sketch onto the Arduino using the Arduino IDE.
3. **Monitor Output**: Use the Serial Monitor to observe the setup process and ensure the IBUS communication is working correctly (Using **Check**).
   ![image](https://github.com/user-attachments/assets/6866de3d-ff70-4595-909b-5a5792cc564e)
4. **Adjust Delay**: Modify the delay in the `loop` function as necessary to control the frequency of IBUS updates.
5. **Virtual Joystick Mapping**: Refer to [vJoySerialFeeder](https://github.com/Cleric-K/vJoySerialFeeder) for using the data from the serial port of the Arduino and mapping the channels to a virtual joystick.  
   ![image](https://github.com/user-attachments/assets/f2a3fd58-9196-4957-949d-29e9b755729c)

This code is useful for projects involving remote control systems, robotics, or any other application where reading multiple input channels and transmitting their values over IBUS is required.
