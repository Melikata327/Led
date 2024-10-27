هدف آزمایش : دست کردن یک ماشین حساب در محیط آردینو 
ابزار و وسایل :  در این آزمایش ما مدار و ابزار و وسایلی نیست
شرح آزمایش : 
قرار است چهار عمل ریاضی اصلی (+ ،  - ,× ,÷ )  را انجام دهیم و در محیط سریال آن را وارد و خروجی را دریافت کنیم .

متغییرهای ورودیمان را نوع آن ها را مشخص و مینویسیم و سپس در قسمت 
Setup: 
Serial.begin(9600); >>  دستور  شروع به کار سریال  و عدد داخل پرانتز سرعت انتقال اطلاعات 

و در قسمت بعد سریال هایی ک به عنوان مثال میخوایم پرینت کنن را مینویسیم 

```cpp
Serial.println("caculator is  enter !")
Serial.println ..
```
 و در قسمت  set loop
 با استفاده از  حلقه های switch case  
کد مورد نظر را مینویسیم

```cpp
float num1;
float num2;
char operatoration;
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
```





