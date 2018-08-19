//Motor 1
int ENA = 10;
int IN1 = 9;
int IN2 = 8;
//Motor 2
int ENB = 5;
int IN3 = 7;
int IN4 = 6;

void setup() {
  // put your setup code here, to run once:
pinMode(ENA, OUTPUT);
pinMode(ENB, OUTPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
}

void adelante()
{
  //Motor 1
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 255);

  //Motor 2
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 255);
  }

  void reversa(){
    //Motor 1
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    analogWrite(ENA, 255);

    //Motor 2
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    analogWrite(ENB, 255);
    }

  void derecha(){
    //Motor 1 hacia delante
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(ENA, 200);

    //Motor 2 hacia atras
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    analogWrite(ENB, 100);
    }

    void izquierda(){
      //Motor 1 hacia atras
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      analogWrite(ENA, 50);

      //Motor 2 hacia adelante
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      analogWrite(ENB, 150);
      }

      void parar(){
        //Motor 1
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        analogWrite(ENA, 0);
  
        //Motor 2
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        analogWrite(ENB, 0);
        }

void loop() {
  // put your main code here, to run repeatedly:
  adelante();
  delay(2000);
  parar();
  delay(1000);
  reversa();
  delay(2000);
  parar();
  delay(1000);
  derecha();
  delay(2000);
  parar();
  delay(1000);
  izquierda();
  delay(2000);
  parar();
  delay(2000);

}
