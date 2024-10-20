float num1;
float num2;
char operator;
float result;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    num1 = Serial.parseFloat(); // خواندن اولین عملوند از رشته ورودی
    operator = Serial.read();   // خواندن عملگر از رشته ورودی
    num2 = Serial.parseFloat(); // خواندن دومین عملوند از رشته ورودی

  switch(operator) {
    case '+' : result = num1 + num2;
    break;
    case '-' : result = num1 - num2;
    break;
    case '*' : result = num1 * num2;
    break;
    case '/' :
    if (num2 != 0) {    // جلوگیری از رخ دادن خطای تقسیم بر صفر
     result = num1 / num2;
    }
    break;
  }
  
   Serial.print(result);    // چاپ کردن نتیجه محاسبات در خروجی
  }
}