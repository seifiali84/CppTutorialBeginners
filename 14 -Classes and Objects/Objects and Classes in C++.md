
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

## 