// تعريف دبابيس التحكم بالجانب الأيسر
const int enableLeft  = 9;
const int in1 = 2;
const int in2 = 3;

// تعريف دبابيس التحكم بالجانب الأيمن
const int enableRight = 10;
const int in3 = 4;
const int in4 = 5;

void setup() {
  pinMode(enableLeft, OUTPUT);
  pinMode(enableRight, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // تفعيل محركات الجانبين
  digitalWrite(enableLeft, HIGH);
  digitalWrite(enableRight, HIGH);
}

void loop() {
  // 1. حركة للأمام لمدة 30 ثانية (30000 مللي ثانية)
  moveForward();
  delay(30000);

  // 2. حركة للخلف لمدة دقيقة (60000 مللي ثانية)
  moveBackward();
  delay(60000);

  // 3. التناوب يميناً ويساراً لمدة دقيقة
  // نقوم بتكرار الدوران لليمين ثم اليسار عدة مرات لتغطية 60 ثانية
  unsigned long startTime = millis();
  while (millis() - startTime < 60000) {
    turnRight();
    delay(2000); // دوران لليمين لمدة ثانتين
    turnLeft();
    delay(2000); // دوران لليسار لمدة ثانتين
  }

  // إيقاف المحركات في نهاية الدورة (أو يمكنك تركها لتتكرر)
  stopMotors();
  while(true); // إيقاف التنفيذ
}

// دالة الحركة للأمام
void moveForward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

// دالة الحركة للخلف
void moveBackward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

// دالة الدوران لليمين
void turnRight() {
  digitalWrite(in1, HIGH); // المحركات اليسرى للأمام
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);  // المحركات اليمنى للخلف
  digitalWrite(in4, HIGH);
}

// دالة الدوران لليسار
void turnLeft() {
  digitalWrite(in1, LOW);  // المحركات اليسرى للخلف
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH); // المحركات اليمنى للأمام
  digitalWrite(in4, LOW);
}

// دالة إيقاف المحركات
void stopMotors() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}