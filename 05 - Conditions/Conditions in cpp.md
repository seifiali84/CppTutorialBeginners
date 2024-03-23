# مقدمه
داخل برنامه نویسی بعضی جاها لازم میشه که برنامه یه تصمیمی بگیره با توجه به شرایطی که ما براش تعریف می کنیم.

قالب کلی تصمیم گیری برنامه اینجوریه که اول چک می کنه اگر شرط برقرار بود دستورات خاصی رو اجرا می کنه.

# شرط ها در سی پلاس پلاس

برای نوشتن یک شرط داخل سی پلاس پلاس از سینتکس زیر استفاد میشه :

```cpp
if (Condition) 
{
    // Codes 
}
```
ساده ترین حالتی که میتونیم برای نوشتن شرط استفاده کنیم کد بالا هست.

کلمه ی کلیدی if برای گذاشتن یک شرط استفاده میشه. 
ما از هر عملگر منطقی ای میتونیم استفاده کنیم تا شرط خودمون رو بنویسیم و اون عملگر منطقی رو باید با Condition داخل کد نوشته شده جایگزین کنیم.

برای درک بهتر مطلب یه مثال میزنم :

```cpp
if(2 < 1){
    cout << "2 is less than 1";
}
if(10 < 1){
    cout << "10 is less than 1";
}
```

داخل کد بالا من چک کردم که اگر ۲ کوچیک تر از ۱ بود متن `"2 is less than 1"` رو چاپ کنه و بعد از اون بیاد چک کنه اگر ۱۰ کوچیک تر از ۱ بود متن `"10 is less than 1"‍‍‍‍‍` رو چاپ کنه

## ماهیت Condition
شرطی که داخل if() گذاشته میشه در واقع یک مقدار با دیتاتایپ بولین هست که اگر True باشه کد های داخل شرط اجرا میشن و اگر False باشه کد های داخل شرط اجرا نمیشن و برنامه به سراغ ادامه ی کار میره و کد های داخل شرط رو ایگنور می کنه.(ایگنور می کنه منظورم اینه که اجرا نمی کنه.)

اینجا یکسری مثال میزنم که داخل همه ی اونا کد هایی که داخل شرط نوشته شدن اجرا میشن :

```cpp
if(true){
    // Codes here
}
if(1){
    // 1 is equal to True in Binary
}

bool x = true;
if(x){
    // Codes here
}
```
داخل مثال اول مستقیما داخل if مقدار True گذاشتیم که باعث میشه شرط پذیرفته بشه و کد های داخل اون شرط اجرا بشن.

توی مثال دوم به شرطمون مقدار ۱ رو دادیم. داخل برنامه نویسی معمولا مقدار `1` رو معادل با `true` و مقدار `0` رو معادل با `false` فرض می کنند. 
پس شرط دوم هم معادل با `if(true){}` هست و کد های داخل بلاک این شرط هم اجرا میشن.

توی مثال آخر اول اومدیم یک متغیر از نوع بولین که برابر با true هست رو تعریف کردیم و بعد اون متغیر رو داخل شرطمون قرار دادیم که بازم معادل با همون شرط اول میشه و در نهایت کد های داخل این بلاک کد اجرا میشن.


## عملگر های منطقی
در کنار عملگر هایی که داخل قسمت قبل گفتیم یکسری عملگر دیگه هست که داخل شرط ها خیلی کاربرد دارن و باید بلدشون باشیم 

عملگر های منطقی عملگر هایی هستن که فقط روی داده های boolean پاسخگو هستن.

### and (&&)
عملگر `&&` معادل `و` داخل منطق هست.

حالت هایی که پیش میاد اینا هستن :
```cpp
cout << (true && true) << "\n";
cout << (true && false) << "\n";
cout << (false && false) << "\n";
```
خروجی این عملگر همواره `false` هست مگر در صورتی که هر دو عنصرش `true` باشن.
خروجی کد :
```output
1
0
0
```
از این عملگر وقتی استفاده میشه که می خوایم فقط در صورتی true برگرده که همه ی شرط های ما پذیرفته شده.

یکم مثال ملموس تر :
```cpp
cout << ((12 < 2) && (22 > 10)) << "\n";
```
برای مثال داخل کد بالا ما می خوایم اگر 12 کوچیک تر از 2 بود و 22 بزرگتر از 10 بود به ما `true` نمایش داده بشه.
خروجی :
```output
0
```
خروجی ما 0 یا همون `false` بود یعنی شرایطی که ما تعریف کردیم درست نبود.

### or (||)
عملگر `||` معادل کلمه ی `یا` در منطق هست.

حالت هایی که برای این عملگر پیش میاد اینا هستن :
```cpp
cout << (true || true) << "\n"; // 1
cout << (true || false) << "\n"; // 1 
cout << (false || false) << "\n"; // 0
```

خروجی `||` همواره `true` هست مگر اینکه هردو گزاره ای که داریم بررسی می کنیم `false` باشن و فقط در همین صورت false میشه.

این عملگر وقتی استفاده میشه که قبول شدن یکی از شرط ها کافیه و با حداقل یکی از اونا `true` بر میگرده.

### نقیض (!)
با استفاده از علامت `!` میتوینم نقیض یک گزاره رو بنویسیم.

تمام نکته ای که اینجا لازمه بدونیم اینه که نقیض `true` میشه `false` و نقیض `false` هم میشه `true`.

طرز استفاده : 
```cpp
cout << (!true) << "\n"; // output : 0 (false)
cout << (!false) << "\n"; // output : 1 (true)
```
خروجی :
```output 
0
1
```


## گذاشتن شرط برای ورودی کاربر

برای اینکه یکم عملی تر پیش بریم میایم و از ورودی های کاربر استفاده می کنیم و روی اونا شرط میذاریم تا با توجه به ورودیشون یه سری خروجی هارو نمایش بدیم.

چند تا مثال اینجا میارم

### چک کردن زوج یا فرد بودن عدد
می خوایم یه برنامه نویسیم که یه عدد از کاربر بگیره و اگر این عدد زوج بود بهمون بگه عدد زوجه و اگر زوج نبود کاری انجام نده.

اول باید ببینیم تعریف عدد زوج داخل ریاضیات چیه :
به عددی که بر 2 بخش پذیر باشه عدد زوج گفته میشه.

اگر یادتون باشه ما میدونیم که عددی بر 2 بخش پذیره که باقی مانده اش به 2 برابر 0 باشه.
پس همینو میزاریم توی شرطمون و برنامه رو مینویسیم :

```cpp
cout << "Enter your number : ";
int Number;
cin >> Number;

if((Number % 2) == 0)
{
    cout << "this is an even number.\n"; 
}
```
داخل برنامه ی بالا اول یک عدد صحیح از کاربر گرفته میشه.
داخل شرطی که گذاشتیم بررسی میشه که اگر باقی مانده ی عدد وارد شده به 2 برابر با 0 بود (یعنی به 2 بخش پذیر بود) بره کد های داخل شرط رو انجام بده و اگر نبود هم که کاری انجام نمیده برنامه و تموم میشه.

### فقط به علی بگو
می خوایم یه برنامه بنویسیم که موقع شروع شدن برنامه اسم کسی که داره وارد میشه رو بپرسه و اگر اسمش علی بود یه حرفی رو بهش بزنه.

کد برنامه :
```cpp
cout << "What is your name ? ";
string Name;
cin >> Name;

if(Name == "Ali")
{
    cout << "salam Ali, tamrinaro neveshti?\n";
}
```
> دقت داشته باشید که برای ساده تر شدن کار دیگه include ها و int main() و ... رو نمی نویسم که هم کد شلوغ نشه هم کد ها قابل فهم تر بشن. برای اجرا کردن برنامه این کد هارو خودتون باید داخل int main(){} بنویسید.

داخل برنامه ی بالا اول اسم شخص ازش پرسیده میشه و بعد برنامه چک می کنه اگر اسم برابر با Ali بود پیام مورد نظر رو چاپ می کنه و در غیر این صورت چیزی نمیگه.

بر همین اساس شما میتونید یک سیستم یوزرنیم و پسورد درست کنید که اگر یوزرنیم و پسورد مساوی مقدار خاصی بودن یک کار خاصی انجام بشه.

بریم انجامش بدیم 

### سیستم یوزرنیم و پسورد
می خوایم یه برنامه بسازیم که فقط وقتی یوزرنیم و پسورد وارد شده با هم دیگه مچ هستن یک متن نمایش داده بشه و وارد برنامه ی اصلی بشه.

کد :
```cpp
cout << "Enter your username : ";
string username;
cin >> username;

cout << "Enter your password : ";
string password;
cin >> password;

if((password == "1234") && (username == "seifiali"))
{
    cout << "Welcome to your account.\n";
}
```

داخل این مثال اگر به جای `&&` از `||` استفاده کنیم فقط کافیه که کاربر یوزرنیم یا پسورد رو درست حدس بزنه تا بتونه راحت وارد بشه.
پس باید حواسمون باشه که از `&&` استفاده کنیم که تا وقتی که هم پسورد هم یوزرنیم باهم برابر نشدن شرط پذیرفته نشه.

## else
ما میتونیم یه پلن B داشته باشیم برای وقتی که شرط اجرا نمیشه.
یعنی مشخص کنیم که اگر شرط پذیرفته نشد فلان کار رو انجام بده

اینکار با استفاده از کلید واژه ی `else` انجام میشه :

```cpp
if(Condition){
    // do something...
}
else{
    // do something else...
}
```

برای مثال یکی از اون برنامه های قبلی که نوشته بودیم رو یکم کامل تر می کنیم :

کد های سیستم یوزرنیم و پسوردی که نوشتیم رو به شکل زیر بازنویسی می کنیم که اگر یوزرنیم یا پسورد اشتباه بودن به کاربر بگه که اشتباهه :

```cpp
cout << "Enter your username : ";
string username;
cin >> username;

cout << "Enter your password : ";
string password;
cin >> password;

if((password == "1234") && (username == "seifiali"))
{
    cout << "Welcome to your account.\n";
}
else
{
    cout << "Your username or Password is incorrect.\n";
}
```
اینجوری اگر کاربر مقدار اشتباهی وارد کرد برنامه بهش میگه و همینطور خشک و خالی از برنامه خارج نمیشه.

## else if
در حالت عادی اگر ما بیایم و چند تا شرط رو پشت سر هم بزاریم همه ی اونا چک میشن :

```cpp
if(1 == 1){
    cout << "First Condition Accepted.\n";
}
if(2 == 2){
    cout << "Second Condition Accepted.\n";
}
```
خروجی :
```output
First Condition Accepted.
Second Condition Accepted.
```
اما بعضی وقتا نیاز داریم که اگر شرط اول اجرا شد دیگه وارد شرط بعدی نشه و کلا این سلسله شرط ها به پایان برسه.

برای این کار باید از کلمه ی کلیدی `else if` استفاده کنیم :
```cpp
if(1 == 1){
    cout << "First Condition Accepted.\n";
}
else if(2 == 2){
    cout << "Second Condition Accepted.\n";
}
```
خروجی :
```output 
First Condition Accepted.
```

داخل یک سلسله از شرط ها در ابتدا از یک `if` استفاده می کنیم و بعد از هرچند تا `else if` که بخوایم میتونیم استفاده کنیم و در نهایت هم فقط از یه دونه `else` میتونیم استفاده کنیم.

یعنی در نهایت کامل ترین سلسله شرط هایی که میتونیم داشته باشیم به صورت زیره :

```cpp
if(Condition1){
    // codes
}
else if(Condition2){
    // codes
}
else if(Condition3) {
    // codes
}
// other else if(Conditions){}
else{
    // codes
}
```

اگر کد های زیر رو همینجوری بنویسید با ارور مواجه میشید :
```cpp
else if(true){
    //codes
}
```
چون هیچ شرطی گذاشته نشده که `else if` بخواد تکمیل کننده ی اون باشه.
```cpp
else{
    // code
}
```
چون هیچ شرطی گذاشته نشده که اگر نشد این قطعه کد اجرا بشه.

## شرط های تو در تو
ما میتونیم داخل بلاک یکی از شرط هامون یه شرط دیگه بنویسیم که بعد از اینکه یکی از شرط ها اعمال شد شرط های دیگه ای هم سر راهش قرار بگیره و اونارو هم انجام بشه.

برای مثال :
```cpp
if(1 > 0){ // اگر 1 بزرگتر از 0 بود
    cout << "1 > 0\n"; // بنویس که 1 بزرگ تر از صفره
    if(50 < 1){ // اگر 50 کوچیک تر از 1 بود 
        cout << "50 < 1\n"; // بنویس که 50 کوچیک تر از یکه
    }
    else { // اگر 50 کوچیک تر از 1 نبود
        cout << "50 >= 1\n"; //نقیض گزاره ی شرط قبلی رو نوشتم
    }
}
else{ // اگر 1 بزرگتر از 0 نبود
    cout << "1 <= 0"; // بنویس 1 کوچیکتر یا مساوی با صفره.
}
```

معادل فارسی هرکدوم رو نوشتم که بتونید دنبال کنید و خروجی کد رو حدس بزنید.

خروجی :
```output
1 > 0
50 >= 1
```

تا اینجا با کلیت شرط ها داخل برنامه نویسی آشنا شدید و میتونید ازشون استفاده کنید.

یه سری مطالب تکمیلی در مورد شرط ها هست که الان بهشون میپردازیم 

## شرط های تک خطی
شرط هایی که تا الان دیدیم رو میتونیم با یه سینتکس خاص داخل یک خط هم بنویسیم :

```cpp
variable = (condition) ? expressionTrue : expressionFalse;
```
`variable` : متغیری که تعریف کردیم از قبل
`condition` : شرطی که می خوایم بزاریم
`expressionTrue` : مقداری که می خوایم گذاشته بشه توی متغیر اگر شرط درست بود.
`expressionFalse` : مقداری که می خوایم گذاشته بشه توی متغیر اگر شرط اشتباه بود.

برای اینکه بهتر متوجه بشید به کد زیر دقت کنید :
```cpp
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
```
اگر تایم از 18 کو.چیک تر بود "Good day." رو داخل متغیر `result` میریزه و اگر تایم کوچیک تر از 18 نبود مقدار "Good evening." رو داخل متغیر `result` میریزه.

اگر نمی خواستیم از این روش استفاده کنیم کد معادلی که باید می نوشتیم این کد بود :
```cpp
int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
```

پس از این سینتکس هم میشه استفاده کرد تا بعضی جاها کد رو کوتاه تر کرد.
البته ممکنه بعضی جاها خوانایی کد رو برای عموم افراد کمتر کنه و بهتر باشه که کد طولانی تر نوشته بشه تا خوانایی کد حفظ بشه.


## switch case
راه دیگه ای که برای گذاشتن یک سلسله از شرط ها وجود داره استفاده از `switch` هست.

کاری که `switch` انجام میده مشابه همون کاریه که `if` , `else if` , `else` انجام میدادن.

### سینتکس
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

`expression` : یک متغیر که وارد سوییچ می کنیم تا با توجه به مقدارش تصمیم بگیریم.

مثال :

```cpp
int a = 3;
switch(a){
    case 0:
        cout << "a is 0" << "\n";
        break;
    case 1:
        cout << "a is 1" << "\n";
        break;
    case 2:
        cout << "a is 2" << "\n";
        break;
    case 3:
        cout << "a is 3" << "\n";
        break;
    default:
        cout << "a is 4" << "\n";
}
```
داخل خط اول متغیر `a` رو تعریف کردیم.
بعد اون رو وارد سوییچ کردیم و با استفاده از کلید واژه `case` مشخص می کنیم که با توجه به مقدار `a` چه کاری انجام بشه.

اگر مقدار نوشته شده در جلوی `case` برابر با `a` باشه بدنه ی اون case اجرا خواهد شد.

چون `a = 3` هست پس کد های زیر `case 3` اجرا خواهد شد و خروجی زیر رو خواهیم داشت :

```output
a is 3
```

اگر هیچ کدوم از case ها اجرا نشه کدی که زیر `default` نوشته شده اجرا خواهد شد.

دقت داشته باشید که اگر بعد از پایان دستوراتی که داخل بدنه ی کیس نوشتید دستور `break` رو نزارید برنامه به درستی کار نخواهد کرد و باگ خواهد داشت. (جلوتر دقیق تر بررسی خواهیم کرد.)

دقت داشته باشید که از سوییچ فقط برای داده های عددی میتونید استفاده کنید و برای string نمیتونید این کار رو انجام بدید.

### نذاشتن دستور break
اگر بعد از نوشتن دستورات داخل کیس دستور `break` رو ننویسیم. دستورات case های بعدی تا جایی که به دستور break بر بخوریم اجرا خواهد شد.

برای اینکه بهتر متوجه بشید به کد زیر توجه کنید :
```cpp
int a = 0;

switch(a)
{
    case 0:
        cout << "0";
    case 1:
        cout << "1";
        break;    
    case 2:
        cout << "2";
    default:
        cout << "def";
    }
```
خروجی :
```output
01
```

در نهایت اگر از `break` استفاده نشده باشه تمام دستورات بعد از کیس اجرا شده تا انتهای default اجرا خواهند شد.

```cpp
int a = 1;
switch(a){
    case 0:
        cout << "0";
        break;
    case 1:
        cout << "1";
    case 2:
        cout << "2";
    default:
        cout << "def";
}
```
خروجی :
```output
12def
```

در نهایت تمام روش های گفته شده برای گذاشتن شرط داخل برنامه استفاده میشن و قدرت تصمیم گیری رو به برنامه ی ما میدن.

---

یکسری از کد هارو برای فهم بیشتر نوشتم و اینجا گذاشتم میتونید اجرا کنید و ببینید : [ٍExamples](C++/CppTutorialBeginners/05%20-%20Conditions/Program.cpp)

--- 

برای درک بهتر این مبحث یک پروژه ی خیلی ساده ی بازی سنگ کاغذ قیچی رو آماده کردیم که از شما دو تا ورودی به عنوان player1 و player2 میگیره و با توجه به ورودی شما مشخص می کنه که برنده ی بازی چه کسی هست : [Game](SKG.cpp)

سعی کنید با خوندن این کد ها متوجه منطق برنامه بشید و بعد یک بار بدون اینکه این کد هارو ببینید خودتون این بازی رو بسازید.

جلوتر به عنوان تمرین یکسری پروژه ها تعریف می کنیم که خودتون بنویسید و ذهنتون آماده تر بشه برای برنامه نویسی.