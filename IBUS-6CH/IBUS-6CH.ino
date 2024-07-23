#include <Arduino.h>
#include "ibus.h"

// Define the number of channels and pin assignments
#define N 6       // Total number of channels
#define CH1 2     // Pin number for Channel 1
#define CH2 3     // Pin number for Channel 2
#define CH3 4     // Pin number for Channel 3
#define CH4 5     // Pin number for Channel 4
#define CH5 6     // Pin number for Channel 5
#define CH6 7     // Pin number for Channel 6

int ch[N]; // Array to store pulse widths for each channel

// Create an instance of the IBus class with the number of channels
IBus ibus(N);

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(115200);

  // Set each channel pin as an INPUT
  pinMode(CH1, INPUT);
  pinMode(CH2, INPUT);
  pinMode(CH3, INPUT);
  pinMode(CH4, INPUT);
  pinMode(CH5, INPUT);
  pinMode(CH6, INPUT);

  // Initialize the IBus object
  ibus.begin();
}

void loop() {  
  // Read pulse width from each channel and store in array
  ch[0] = pulseIn(CH1, HIGH);
  ch[1] = pulseIn(CH2, HIGH);
  ch[2] = pulseIn(CH3, HIGH);
  ch[3] = pulseIn(CH4, HIGH);
  ch[4] = pulseIn(CH5, HIGH);
  ch[5] = pulseIn(CH6, HIGH);

  // Send pulse widths over IBUS protocol
  ibus.begin();
  for (int i = 0; i < N; i++) {
    ibus.write(ch[i] & 0xFFFF); // Write each pulse width value
  }
  ibus.end();

  // Delay to avoid flooding the bus with too frequent updates
  delay(50); // Adjust the delay as needed
}
