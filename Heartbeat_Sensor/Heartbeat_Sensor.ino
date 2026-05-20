// Project 42: Heartbeat Sensor
// Reads data from a pulse sensor and blinks an LED with the heartbeat.

int pulsePin = A0; // Pulse Sensor purple wire
int ledPin = 13;   // LED to blink with heartbeat

// Volatile variables used in the interrupt service routine
volatile int BPM;                // int that holds raw Analog in 0. updated every 2mS
volatile int Signal;             // holds the incoming raw data
volatile int IBI = 600;           // int that holds the time interval between beats! Must be seeded!
volatile boolean Pulse = false;  // "True" when User's live heartbeat is detected. "False" when not a "live beat".
volatile boolean QS = false;     // becomes true when Arduoino finds a beat.

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  // This function sets up the timer interrupt that will read the sensor
  interruptSetup();
}

void loop() {
  if (QS == true) { // A Heartbeat Was Found
    // BPM and IBI are updated every time a new beat is detected
    Serial.print("BPM: ");
    Serial.println(BPM);
    QS = false; // reset the Quantified Self flag for next time
  }
  delay(20); // take a break
}

// Timer interrupt service routine
ISR(TIMER2_COMPA_vect) {
  cli(); // disable interrupts
  Signal = analogRead(pulsePin); // read the Pulse Sensor
  // This is the original processing sketch from PulseSensor.com
  // ... (A lot of code to process the signal and find the BPM)
  // For simplicity, we'll just blink the LED based on a threshold
  
  if(Signal > 550 && Pulse == false){ // 550 is a sample threshold, you may need to adjust it
    Pulse = true;
    digitalWrite(ledPin, HIGH);
    IBI = millis() - IBI; // Time between beats
    BPM = 60000 / IBI;
    QS = true;
  }
  
  if(Signal < 500 && Pulse == true){
    Pulse = false;
    digitalWrite(ledPin, LOW);
  }
  
  sei(); // enable interrupts
}

void interruptSetup() {
  // Initializes Timer2 to throw an interrupt every 2mS.
  TCCR2A = 0x02;     // DISABLE PWM ON PINS 3 AND 11, AND GO INTO CTC MODE
  TCCR2B = 0x06;     // DON'T FORCE COMPARE, 256 PRESCALER
  OCR2A = 0X7C;      // SET THE TOP OF THE COUNT TO 124 FOR 500Hz SAMPLE RATE
  TIMSK2 = 0x02;     // ENABLE INTERRUPT ON MATCH BETWEEN TIMER2 AND OCR2A
  sei();             // MAKE SURE GLOBAL INTERRUPTS ARE ENABLED
}
