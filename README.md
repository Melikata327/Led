هدف ازمایش : روشن و خاموش کردن LEDها با نوشتن کاراکترهای h(روشن) و نوشتن l (خاموش)
ابزار و وسایل : بردبورد ، ۳ عدد سیم مخابراتی ، ۱ عدد مقاومت ، ۱ عدد چراغLED
شرح کد : 
ابتدا برد آردینو را به وسیله کابل USB  به سیستم متصل میکنیم و نوع پورت و نوع برد آردینو را مشخص میکنیم . 
 در ابتدا نوع پایه ۱۳ را مینویسیم.
  const int led = 13;
و بعد در قسمت setup
حالت LED  را مشخص میکنیم و یا به عبارتی برای راه اندازی آن به دستور pinMode  نیاز داریم.
برای اینکه بتوانیم از پنل serial استفاده کنیم از دستور serial.Begin استفاده می کنیم.
ک با  استفاده از عبارت begin (دستور شروع به کار سریال) و عدد درون پرانتز ک سرعت انتقال اطلاعات و همینطور شروع سریال را مشخص میکند.
در قسمت void loop 
```cpp
if(Serial.available()>0)  //وجود دیتا در پنل
{
 char incominByte=Serial.read();  //خواندن کاراکتر پنل 
 if( incominByte =='h‌‌‌‌') //چک کردن اینکه h  کاراکتر هست.
{
  digitalWrite (ledPin,HIGH); //دستور روشن کردن led
}
else if ( incominByte =='l')   >>چک کردن ال کاراکتر بودن
{
  digitalWrite (ledPin,LOW); دستور خاموش شدن 
    }
   }
}
```


بخش عملی : 
بعد از اینکه مدار را با کابل usb  وصل کردیم . 
  چراغ را روی برد بورد قرار داده و یکی از پایه های مقاومت را در یک ستون پایه مثبت LED قرار داده و سپس با سیم مخابراتی در همان ستون، آنها را به پایه 13 برد آردینو وصل میکنیم.پایه دیگر مقاومت را باسیم مخابراتی به بخش زمین برد بورد برده و آنجا به GND 
.برد آردینو وصل میکنیم

خطایابی و آپلود را شروع میکنیم
سپس پنل سریال را باز کرده و خواهیم دید که با فرستادن h در پنل،LED روشن و با نوشتن l
  LEDخاموش می شود
