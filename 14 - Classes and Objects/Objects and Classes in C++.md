
# مقدمه

داخل قسمت قبلی با مفاهیم کلی شی گرایی از جمله کلاس ها و آبجکت ها آشنا شدید. در ادامه می خوایم این مفاهیم رو داخل برنامه ی سی پلاس پلاس خودمون پیاده سازی کنیم و در نهایت مثال های قسمت قبل رو بیایم پیاده سازی کنیم.

# Class in Cpp

برای تعریف یک کلاس در سی پلاس پلاس از سینتکس زیر استفاده می کنیم :

```cpp
class MyClass {       // The class  
  public:             // Access specifier  
    int myNum;        // Attribute (int variable)  
    string myString;  // Attribute (string variable)  
};
```

دقت داشته باشید که این کد رو قبل از `int main()` می نویسیم (مشابه تعریف استراکچر ها)

با استفاده از کلمه ی کلیدی `class` مشخص می کنیم که می خوایم یک کلاس جدید رو تعریف کنیم و با یک فاصله بعد از اون اسم کلاس جدیدمون `MyClass` رو تعریف می کنیم و هرچیزی که خواستید میتونید به جای `MyClass` بزارید (در صورتی که جزو نام گذاری های صحیح به حساب بیاد)

داخل خط بعدی کلمه ی کلیدی `public` دیده میشه که داخل این مرحله بپذیرید که برای اینکه کلاس ما درست کار کنه این کلمه ی کلیدی رو می نویسیم و بعد از اونم ویژگی های کلاس رو تعریف می کنیم که تعریف این ویژگی ها مشابه تعریف ویژگی های استراکچر ها هست.

در نهایت هم `;` رو فراموش نمی کنیم تا مشخص بشه تعریف کردن کلاس ما به پایان رسیده.

بعد از اینکه کلاس رو تعریف کردیم ما میتونیم اشیائی رو از اون کلاس بسازیم. که اصطلاحا به این کار نمونه گیری یا `instantiation` میگن و به نمونه ی تعریف شده از اون آبجکت یا `instance` گفته میشه که در واقع همون شی ما هست.

برای ساختن یک نمونه از این کلاس از سینتکس زیر استفاده می کنیم :

```cpp
int main(){
  MyClass myObj;  // Create an object of MyClass  
  
  // Access attributes and set values  
  myObj.myNum = 15;   
  myObj.myString = "Some text";  
  
  // Print attribute values  
  cout << myObj.myNum << "\n";  
  cout << myObj.myString;  
  return 0;
}
```

یک نکته ای که باید بهش توجه داشته باشید اینه که نمونه گیری یا همون ساختن آبجکت رو داخل بدنه ی اصلی برنامه یا همون `int main()` انجام میدیم و فقط تعریف کردن کلاسه که باید خارج از این بدنه و قبل از اون باشه.

در خط ابتدایی یک آبجکت به نام `myObj` از کلاس `MyClass` ساختیم.

داخل خط های بعد به ویژگی های آبجکت ساخته شده مقدار هایی رو نسبت میدیم که ماهیت اون شی ساخته شده رو مشخص می کنه.

> اینکه از نام های مختلف آبجکت، نمونه ، شی استفاده می کنم اینه که همه ی اونا به گوشتون خورده باشه و اگر جایی شنیدید بدونید منظور چی هست.

در نهایت هم ویژگی های آبجکت ساخته شده رو با استفاده از دستور `cout` در ترمینال چاپ کرده ایم.

حالا برای اینکه بهتر متوجه موضوع بشید شروع می کنیم و دونه دونه مثال های قسمت قبلی رو پیاده سازی می کنیم :

## مثال 1 : کلاس میوه

داخل این برنامه می خوایم کلاس میوه رو تعریف کنیم و آبجکت های سیب و گلابی و موز رو ازش نمونه گیری کنیم :

ویژگی هایی که یک میوه میتونه داشته باشه رو به صورت زیر پیدا می کنیم :
- نام میوه
- رنگ میوه
- وزن میوه

برنامه ای که برای این مثال مینویسیم :

```cpp
class Fruit{
	public:
		string Name;
		string Color;
		float Weight;
};

int main()
{
    // Create Instances
    Fruit Apple;
    Fruit Banana;
    Fruit Pear;

    // set Apple Attributes
    Apple.Name = "Apple";
    Apple.Color = "Red";
    Apple.Weight = 100.0f;

    // set Banana Attributes
    Banana.Name = "Banana";
    Banana.Color = "Yellow";
    Banana.Weight = 130.0f;

    // set Pear Attributes
    Pear.Name = "Pear";
    Pear.Color = "Yellow";
    Pear.Weight = 110.0f;

	return 0;
}
```

تا اینجا ما نمونه هارو ساختیم و مقدار دهیشون رو هم انجام دادیم. الان می خوایم این نمونه هارو داخل یک لیست نگهداری کنیم و از این به بعد اون لیست رو جا به جا کنیم و با حلقه زدن روی اون لیست میوه هامون رو داخل ترمینال نمایش بدیم.

همونطور که تا الان ما آرایه هایی از نوع int و double و ... تعریف می کردیم میتونیم آرایه هایی از کلاسی که ساختیم تعریف کنیم که اعضای اون کلاس رو برامون نگهداری کنه :

```cpp
int main(){
	// Create Instances
    Fruit Apple;
    Fruit Banana;
    Fruit Pear;

    // set Apple Attributes
    Apple.Name = "Apple";
    Apple.Color = "Red";
    Apple.Weight = 100.0f;

    // set Banana Attributes
    Banana.Name = "Banana";
    Banana.Color = "Yellow";
    Banana.Weight = 130.0f;

    // set Pear Attributes
    Pear.Name = "Pear";
    Pear.Color = "Yellow";
    Pear.Weight = 110.0f;

	// Add Fruits to an Array :
	Fruit Fruits[3];
    Fruits[0] = Apple;
    Fruits[1] = Banana;
    Fruits[2] = Pear;
    
	return 0;
}
```

اما از اونجایی که ممکنه بعدا هم بخوایم آبجکت های بیشتری به این لیست اضافه کنیم شاید استفاده از آرایه خیلی مناسب نباشه. برای همین کار میایم و به جای استفاده از آرایه از `vector` ها که باهاشون آشنا شدیم استفاده می کنیم :

```cpp

int main(){
	// Create Instances
    Fruit Apple;
    Fruit Banana;
    Fruit Pear;

    // set Apple Attributes
    Apple.Name = "Apple";
    Apple.Color = "Red";
    Apple.Weight = 100.0f;

    // set Banana Attributes
    Banana.Name = "Banana";
    Banana.Color = "Yellow";
    Banana.Weight = 130.0f;

    // set Pear Attributes
    Pear.Name = "Pear";
    Pear.Color = "Yellow";
    Pear.Weight = 110.0f;

	// Create a vector of Objects :
    vector<Fruit> Fruits;
    Fruits.push_back(Apple);
    Fruits.push_back(Banana);
    Fruits.push_back(Pear);

	// Show All Fruits using Loops :
    for (Fruit f : Fruits)
    {
        cout << "Name : " << f.Name << " - Color : " << f.Color << " - Weight : " << f.Weight << endl;
    }
    
	return 0;
}
```

در نهایت هم با استفاده از یک حلقه ی for each تمام عضو های لیستمون رو داخل ترمینال نمایش میدیم.


### یادآوری و تکمیل مبحث endl

برای اینکه در ترمینال خروجی خودمون رو داخل خط بعدی نمایش بدیم دو تا از راه هایی که وجود دارن یکی استفاده از `\n` هست و دومی استفاده از `endl` هست. این دو روش تفاوت های ریزی دارن که اینجا اونارو بهتون میگم :

- `\n` : داخل این روش صرفا اشاره گر کیبورد در ترمینال به خط بعد برده میشه و روند خیلی عادی ادامه پیدا می کنه.
- `endl` : داخل این روش علاوه بر اینکه اشاره گر به خط بعد میره عملیاتی به اسم flush داخل ترمینال انجام میشه که باعث میشه خروجی های ما دقیقا در همون لحظه به ترمینال منتقل بشن.
برای اینکه بهتر متوجه بشید به روند زیر برای نمایش داده شدن چیزایی که ما می خوایم داخل ترمینال دقت کنید :

وقتی ما می خوایم یک متنی رو با استفاده از `cout` داخل ترمینال منتقل کنیم مقداری که ما می خوایم در ترمینال نمایش داده بشه ابتدا به یک حافظه تحت عنوان بافر (`Buffer`) فرستاده میشه و بعد از اینکه بافر پر میشه مقادیر ما به ترمینال منتقل میشن و اونجا نمایش داده میشن.

این کار باعث کاهش بار پردازشی برنامه میشه اما ما میتونیم با استفاده از دستور flush; بافر رو قبل از اینکه کاملا پر بشه خالی کنیم و مقادیر رو به صورت آنی تر داخل تمرینال نمایش بدیم.

> حجم این بافر خیلی کمه و معمولا بین 512 بایت تا 1 کیلوبایته. که البته میتونه توسط ما تغییر داده بشه و بستگی به کامپایلر و سیستم عامل و مواردی که داخل این موضوع دخیل هستن داره.


## مثال 2 : کلاس حیوان

حالا می خوایم یک کلاس برای حیوان ها تعریف کنیم و حیوانات سگ، مرغ، ماهی رو از اون نمونه گیری کنیم.

```cpp
class Animal
{
public:
    string Name;
    bool IsWild;
    int LegsCount;
};

int main(){
	
	// Create Instances
    Animal Dog;
    Animal Chicken;
    Animal Fish;

    // Set Dog Attributes
    Dog.Name = "Dog";
    Dog.IsWild = false;
    Dog.LegsCount = 4;

    // Set Chicken Attributes
    Chicken.Name = "Chicken";
    Chicken.IsWild = false;
    Chicken.LegsCount = 2;

    // Set Fish Attributes
    Fish.Name = "Fish";
    Fish.IsWild = false;
    Fish.LegsCount = 0;
  
    // Create a Vector of Animals
	vector<Animal> Animals;
    Animals.push_back(Dog);
    Animals.push_back(Chicken);
    Animals.push_back(Fish);
	
	// Show Animals using For Each Loop
    for (Animal a : Animals)
    {
        cout << "Name : " << a.Name << " - Legs : " << a.LegsCount << " - Is Wild? " << a.IsWild << endl;
    }

    return 0;
}
```

داخل کد بالا هم مشابه کد قبل عمل کردیم.

اول کلاس حیوان رو تعریف کردیم و بعد  سگ و مرغ و ماهی رو از اون کلاس نمونه گیری کردیم و مقدار دهی کردیم. در نهایت هم اونارو به یک لیست اضافه کردیم و با استفاده از حلقه ی `foreach` اونارو داخل ترمینال نمایش دادیم.

به عنوان مثال های ساده ای که توی دنیای واقعی دیده میشه این دو مثال کافی هستن. حالا میریم سراغ مثال هایی که داخل نرم افزار ها هم دیده میشه :

## مثال 1 : فروشگاه کامپیوتر

یکی از مثال هایی که داخل قسمت قبل زدیم مثال فروشگاه کامپیوتر بود و تحلیلش هم کردیم. حالا می خوایم با استفاده از اون تحلیل بیایم و برنامه ای که نیاز داشتیم رو بنویسیم :

به هر کامپیوتر به دید یک شی نگاه می کنیم و یک کلاس کامپیوتر رو هم در نظر میگیریم که اشیاء از اون نمونه گیری بشن.

```cpp
class Computer
{
public:
    string Motherboard;
    string CPU;
    int Ram;
    string GPU;
    int Storage;
};
```
در ابتدا کلاس کامپیوتر رو به صورت بالا تعریف می کنیم .

حالا وارد بدنه ی اصلی برنامه میشیم و یه سری کامپیوتر هارو نمونه گیری می کنیم از این کلاس :

```cpp
int main()
{
    // Create Instances
    Computer c1;
    Computer c2;

    // Set c1 Attributes
    c1.Motherboard = "Asus z690";
    c1.CPU = "Intel i9-9900k";
    c1.GPU = "Nvidia GTX-1660Ti";
    c1.Ram = 12;
    c1.Storage = 1024;

    // Set c2 Attributes
    c2.Motherboard = "Asus b550";
    c2.CPU = "AMD Ryzen 5";
    c2.GPU = "Nvidia gt-730";
    c2.Ram = 8;
    c2.Storage = 3072;

    return 0;
}
```
تا اینجا تعاریفی که داخل مراحل قبل هم یاد گرفته بودیم رو پیاده سازی کردیم. مواردی که باقی مونده رو لیست می کنیم که بهتر وضعیت رو ببینیم :

- امکان خرید کامپیوتر
- امکان فروش کامپیوتر

برای اینکه این قسمت رو قشنگ تر پیاده سازی کنیم میریم سراغ اینکه چطور میتونیم داخل کلاسمون یه سری توابع تعریف کنیم :

## Class Methods

ما میتونیم داخل هر کلاس یک سری توابع تعریف کنیم که فقط نمونه های اون کلاس بتونن ازش استفاده کنن. و مزیتی که این روش تعریف برای ما نسبت به تعریف کردن تابع خارج از کلاس داره اینه که میتونیم داخل تابعمون به ویژگی های آبجکتی که این تابع روی اون فراخوانی شده دسترسی داشته باشیم.

برای اینکه برای کلاس یک تابع تعریف کنیم از روش زیر استفاده می کنیم :

```cpp
class MyClass {        // The class  
  public:              // Access specifier  
    void myMethod() {  // Method/function defined inside the class  
      cout << "Hello World!";  
    }
};
```
برای اینکه بهتر متوجه بشید به ادامه ی نوشتن برنامه ی فروشگاه کامپیوتر میریم تا طرز استفاده از این متد رو بهتر متوجه بشید

## ادامه ی مثال 1 : فروشگاه کامپیوتر

حالا می خوایم سیستم اینکه یک کامپیوتر خریداری بشه و به انبار منتقل بشه رو پیاده سازی می کنیم.

برای اینکار یک تابع داخل کلاس کامپیوتر تعریف می کنیم که وقتی اون تابع رو روی آبجکت های کامپیوتر اجرا می کنیم اونا رو به انبار اضافه کنه.

```cpp
class Computer
{
public:
    string Motherboard;
    string CPU;
    int Ram;
    string GPU;
    int Storage;
  
    void Buy()
    {

    }
};
```
داخل تابع `AddToInventory()` که تعریف کردیم ما با دیدن مقدار داخل ویژگی های متغیر هایی که بالای اون تعریف کردیم میتونیم به ویژگی های کامپیوتری که این تابع روی اون اجرا شده دسترسی پیدا کنیم.

برای اینکه این تابع رو روی یکی از کامپیوتر هایی که تعریف کردیم صدا کنیم از روش زیر استفاده می کنیم :
```cpp
int main()
{
	// Create Instances
    Computer c1;
    Computer c2;

    // Set c1 Attributes
    c1.Motherboard = "Asus z690";
    c1.CPU = "Intel i9-9900k";
    c1.GPU = "Nvidia GTX-1660Ti";
    c1.Ram = 12;
    c1.Storage = 1024;

    // Set c2 Attributes
    c2.Motherboard = "Asus b550";
    c2.CPU = "AMD Ryzen 5";
    c2.GPU = "Nvidia gt-730";
    c2.Ram = 8;
    c2.Storage = 3072;

    // Buy Computers and Add Them To Inventory
    c1.Buy();
}
```
با استفاده از دستور `c1.Buy();` وقتی که تابع `Buy` در حال اجرا شدن هست مشخصات `c1` تابع میتونه با استفاده از اسم ویژگی های کامپیوتر به مقادیر ویژگی های `c1` دسترسی داشته باشه.

برای اینکه این تابع رو کامل کنیم نیاز داریم که یک مبحث دیگه رو هم بلد باشیم.

برای اینکه یک انبار تعریف کنیم تا کامپیوتر هارو داخلش ذخیره کنیم دو راه داریم. 

- مثل مثال های قبلی یک وکتور رو داخل بدنه ی اصلی تعریف کنیم
- داخل خود کلاس کامپیوتر یک انبار تعریف کنیم که وابسطه به ساخته شدن آبجکت ها نباشه و در واقع یک ویژگی از آبجکت ها نباشه و مستقل از ویژگی ها باشه
راه اول رو که دیدیم چطور تعریف شد. (برای استفاده از روش اول دیگه نمیتونیم تابع رو داخل خود کلاس تعریف کنیم و همین باعث میشه که کد های ما حجمشون زیاد و نا مرتب بشن در صورت زیاد شدن تعداد کامپیوتر ها.)

حالا می خوایم ببینیم برای استفاده از راه دوم چه کاری لازمه انجام بدیم.

## Static Attributes

گاهی اوقات هست که می خوایم یک متغیر رو داخل کلاسمون تعریف کنیم و اون متغیر مقدارش برای کل کلاس یک چیز باشه. یا به عبارتی یک ویژگی از کل کلاس باشه و به ازای هر آبجکت متفاوت نباشه.

برای مثال برای همه ی کامپیوتر های ما انبار یک لیست ثابت هست و قرار نیست هر کامپیوتری انبار مخصوص به خودش رو داشته باشه.

در چنین مواقعی میایم و از ویژگی های `static` استفاده می کنیم.

برای اینکار فقط کافیه قبل از تعریف ویژگی از کلمه ی کلیدی `static` استفاده کنیم :
```cpp
class MyClass
{
public:
	static int RemainingComputers;
};

int MyClass::RemainingComputers;
```

دقت داشته باشید که وقتی یک متد یا ویژگی استاتیک رو داخل تابع گذاشتید در واقع فقط به تابع اعلام کردید که قراره این ویژگی یا متد استاتیک رو داشته باشه. برای اینکه این ویژگی رو دارا بشه بعد از اینکه اونو معرفی کردید باید تعریفش هم کنید که داخل خط آخر کد بالا طریقه ی انجام این کار رو میتونید ببینید.

> در واقع با اینکار داریم یک متغیر رو خیلی عادی داخل کلاسمون تعریف می کنیم به جای اینکه داخل بدنه ی اصلیمون ذخیره کنیم. اینجوری میتونیم چیزای مرتبط به کلاس رو داخل خود اون کلاس بزاریم تا برنامه مون شلوغ نشه. جلوتر میبینیم که توابع رو هم میتونیم اینجوری static تعریف کنیم.



برای دسترسی به مقدار متغیر `static` ساخته شده هم باید از روش زیر استفاده کنیم :
```cpp
int main(){
	MyClass::RemainingComputers = 12;

	cout << MyClass::RemainingComputers << endl;
	return 0;
}
```

حالا دوباره وارد مثال خودمون میشیم تا با چیز جدیدی که یاد گرفتیم کاملش کنیم.

## ادامه ی مثال فروشگاه کامپیوتر

ما می خوایم انبارمون رو به صورت یک لیست از کامپیوتر داخل خود کلاس کامپیوتر تعریف کنیم.

ولی چون انبار برای هر آبجکت متفاوت نیست و قرار نیست برای هر آبجکت جداگونه ساخته بشه اونو به صورت static تعریف می کنیم :
```cpp
class Computer
{
public:
    string Motherboard;
    string CPU;
    int Ram;
    string GPU;
    int Storage;

    static vector<Computer> Inventory;
  
    void Buy()
    {

    }
};

vector<Computer> Computer::Inventory;
```
حالا فقط کافیه داخل تابع `Buy()` بیایم و عنصری که تابع روش صدا زده شده رو به لیست اضافه کنیم.

برای اینکار لازمه که با کلمه ی کلیدی `this` آشنایی داشته باشید.

### this Keyword

وقتی که لازم دارید آبجکتی که تابع روش صدا زده شده رو ازش استفاده کنید و اونو داشته باشید باید از کلمه ی کلیدی this استفاده کنید.

فقط نکته ای که وجود داره اینه که کلمه ی کلیدی `this` در واقع پوینتر آبجکت ما هست و برای اینکه خود آبجکت رو به دست بیاریم باید یک `*` قبل از اون بزاریم.

پس برای اینکه کد ما کامل بشه و داخل تابع `Buy()` آبجکت به انبار اضافه بشه کد زیر کد نهایی ما میشه :

```cpp
class Computer
{
public:
    string Motherboard;
    string CPU;
    int Ram;
    string GPU;
    int Storage;

    static vector<Computer> Inventory;
  
    void Buy()
    {
        Inventory.push_back(*this);
        cout << Motherboard << " - " << CPU << " - " << GPU << " - " << Ram << " - " << Storage << endl;
    }
};

vector<Computer> Computer::Inventory;
```
داخل خط اول تابع میایم و آبجکت رو به لیست انبارمون اضافه می کنیم و داخل خط بعدی هم برای اینکه ببینیم کدوم کامپیوتر فروخته شده مشخصات اون کامپیوتر رو با استفاده از ویژگی های اونا داخل ترمینال چاپ می کنیم.

تا اینجا علاوه بر اینکه آپشن خرید کامپیوتر رو به برنامه اضافه کردیم مقدار قابل قبولی هم اطلاعات در مورد شی گرایی به دست آوردیم و بیشتر با مباحث اون آشنا شدیم.

حالا باید تابع فروختن کامپیوتر رو هم اضافه کنیم. یک تابع به نام `Sell()` هم به کلاسمون اضافه می کنیم که کارش اینه که کامپیوتر فروخته شده رو از لیست انبارمون حذف کنه :

برای اینکه یک عضو از وکتور که نمیدونیم چندمین عضوه رو حذف کنیم اول باید ببینیم چندمین عضوه تا بعد بتونیم با استفاده از دستور `erase()` اون رو پاک کنیم از لیستمون.

```cpp
class Computer
{
public:
    string Motherboard;
    string CPU;
    int Ram;
    string GPU;
    int Storage;

    static vector<Computer> Inventory;
  
    void Buy()
    {
        Inventory.push_back(*this);
        cout << Motherboard << " - " << CPU << " - " << GPU << " - " << Ram << " - " << Storage << endl;
    }
    void Sell()
    {
        // Find Index to Delete :
        int Index = 0;
        for (Computer c : Inventory)
        {
            if (c.Motherboard == Motherboard &&
                c.CPU == CPU &&
                c.GPU == GPU &&
                c.Ram == Ram &&
                c.Storage == Storage)
            {
                break;
            }
            Index++;
        }
  
        // Delete From Inventory :
        Inventory.erase(Inventory.begin() + Index);
        cout << Motherboard << " - " << CPU << " - " << GPU << " - " << Ram << " - " << Storage << " Was Sold." << endl;
    }    
};

vector<Computer> Computer::Inventory;
```
داخل این کد ما اون عضوی رو که دقیقا با آبجکت خودمون یکی باشه رو پیدا می کنیم و اون رو حذف می کنیم.

داخل این مثال بین دو تا کامپیوتر یکسان فرقی نداره که کدومشون رو بفروشیم پس کد بالا درست کار می کنه. ولی ممکنه شرایطی پیش بیاد که دو تا چیز به ظاهر یکسان باشن ولی داخل مواردی با هم دیگه تفاوت داشته باشن. برای مثال دو نفر که اسم و فامیل مشابهی دارن ولی در واقع افراد متفاوتی هستند.

داخل شرایط بالا این مهم میشه که ما اطلاعاتی رو ازشون بدونیم که اونارو از هم تفکیک کنه (مثل کد ملی) و در صورتی که این اطلاعات رو ازشون نداشتیم با اضافه کردن یکسری اطلاعات به اونا بیایم و اونارو از هم دیگه تفکیک کنیم. (مثل کد اشتراک) داخل این قسمت وارد اون بخش ها نمیشیم.

و برای تست کردن اینکه کلاسمون رو درست تعریف کردیم یا نه کد بدنه ی اصلی برنامه مون رو هم مینویسیم و در نهایت کد ما به صورت زیر خواهد شد :

```cpp
class Computer
{
public:
    string Motherboard;
    string CPU;
    int Ram;
    string GPU;
    int Storage;

    static vector<Computer> Inventory;
  
    void Buy()
    {
        Inventory.push_back(*this);
        cout << Motherboard << " - " << CPU << " - " << GPU << " - " << Ram << " - " << Storage << endl;
    }
    void Sell()
    {
        // Find Index to Delete :
        int Index = 0;
        for (Computer c : Inventory)
        {
            if (c.Motherboard == Motherboard &&
                c.CPU == CPU &&
                c.GPU == GPU &&
                c.Ram == Ram &&
                c.Storage == Storage)
            {
                break;
            }
            Index++;
        }
  
        // Delete From Inventory :
        Inventory.erase(Inventory.begin() + Index);
        cout << Motherboard << " - " << CPU << " - " << GPU << " - " << Ram << " - " << Storage << " Was Sold." << endl;
    }    
};

vector<Computer> Computer::Inventory;

int main(){
    // Create Instances
    Computer c1;
    Computer c2;
  
    // Set c1 Attributes
    c1.Motherboard = "Asus z690";
    c1.CPU = "Intel i9-9900k";
    c1.GPU = "Nvidia GTX-1660Ti";
    c1.Ram = 12;
    c1.Storage = 1024;
  
    // Set c2 Attributes
    c2.Motherboard = "Asus b550";
    c2.CPU = "AMD Ryzen 5";
    c2.GPU = "Nvidia gt-730";
    c2.Ram = 8;
    c2.Storage = 3072;
  
    // Buy Computers and Add Them To Inventory
    c1.Buy();
    c2.Buy();
  
    // Sell c1
    c1.Sell();
  
    // Check Inventory :
    for (Computer c : Computer::Inventory)
    {
        cout << c.Motherboard << " - " << c.CPU << " - " << c.GPU << " - " << c.Ram << " - " << c.Storage << " Remains" << endl;
    }
  
    return 0;
}
```


که اگر اجراش کنیم خروجی زیر رو به ما نشون میده و یعنی درست کار می کنه :
```output
Asus z690 - Intel i9-9900k - Nvidia GTX-1660Ti - 12 - 1024 Was Bought.
Asus b550 - AMD Ryzen 5 - Nvidia gt-730 - 8 - 3072 Was Bought.
Asus z690 - Intel i9-9900k - Nvidia GTX-1660Ti - 12 - 1024 Was Sold.
Asus b550 - AMD Ryzen 5 - Nvidia gt-730 - 8 - 3072 Remains
```

برای اینکه قسمت ها خیلی هم طولانی نشن این مبحث رو به دو قسمت میشکنیم که خیلی زیاد طولانی نشه. مبحث شی گرایی بحثی هست که با دیدن مثال های زیاد قدرت تحلیل و تصمیم رو به شما میده و وقتی حالت های مختلف رو بشناسید به راحتی میتونید برنامه های سنگین رو تحلیل کنید و پیاده سازی کنید.

داخل این قسمت با مقدمات شی گرایی تا حد خوبی آشنا شدید. داخل قسمت بعد مثال مدیریت آزمون های قلمچی رو پیاده سازی می کنیم و با یکسری موارد پایه ای دیگه داخل شی گرایی آشنایی پیدا می کنیم.

کد های این قسمت رو هم میتونید از اینجا ببینید و خودتون اجرا کنید و تغییرات داخلشون ایجاد کنید : [Examples](C++/CppTutorialBeginners/14%20-%20Classes%20and%20Objects/Program.cpp)