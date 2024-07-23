#define N 6
#define CH1 2
#define CH2 3
#define CH3 4
#define CH4 5
#define CH5 6
#define CH6 7

int ch[N];

void setup() {
  Serial.begin(115200);
  pinMode(CH1, INPUT);
  pinMode(CH2, INPUT);
  pinMode(CH3, INPUT);
  pinMode(CH4, INPUT);
  pinMode(CH5, INPUT);
  pinMode(CH6, INPUT);
}

void loop() {  
  ch[0] = pulseIn(CH1, HIGH);
  ch[1] = pulseIn(CH2, HIGH);
  ch[2] = pulseIn(CH3, HIGH);
  ch[3] = pulseIn(CH4, HIGH);
  ch[4] = pulseIn(CH5, HIGH);
  ch[5] = pulseIn(CH6, HIGH);

  Serial.print(ch[0]);
  Serial.print(",");
  Serial.print(ch[1]);
  Serial.print(",");
  Serial.print(ch[2]);
  Serial.print(",");
  Serial.print(ch[3]);
  Serial.print(",");
  Serial.print(ch[4]);
  Serial.print(",");
  Serial.print(ch[5]);
  Serial.println();
}
