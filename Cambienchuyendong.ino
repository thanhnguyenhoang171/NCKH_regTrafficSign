// Khai báo chân kết nối cảm biến chuyển động và đèn LED
const int motionSensorPin = 2;  // Chân kết nối cảm biến chuyển động
const int ledPin = 13;          // Chân kết nối đèn LED

void setup() {
  pinMode(motionSensorPin, INPUT);  // Thiết lập chân cảm biến chuyển động là INPUT
  pinMode(ledPin, OUTPUT);          // Thiết lập chân đèn LED là OUTPUT
  Serial.begin(9600);               // Khởi động kết nối Serial (nếu cần thiết)
}

void loop() {
  int motion = digitalRead(motionSensorPin);  // Đọc trạng thái của cảm biến chuyển động

  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);   // Bật đèn LED nếu phát hiện chuyển động
    Serial.println("Phát hiện chuyển động!");
    //delay(1000);                  // Đợi 1 giây
  } else {
    digitalWrite(ledPin, LOW);    // Tắt đèn LED nếu không có chuyển động
    Serial.println("Không có chuyển động!");
    //delay(100);                   // Đợi 0.1 giây
  }
}
