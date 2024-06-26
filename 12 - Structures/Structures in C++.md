# مقدمه
تا اینجا با یکسری از انواع داده ای که خود C++ در اختیار ما قرار میداد برنامه هامون رو مینوشتیم.
ممکنه داخل یک برنامه ما نیاز داشته باشیم که یک مقداری رو ذخیره کنیم که داخل این دیتا تایپ ها نمی گنجه.
برای اینکار میایم و یک نوع داده ی جدید رو به برنامه اضافه می کنیم و متغیر هایی از نوع اون میسازیم.

# struct
برای انجام اینکار از کلید واژه ی `struct` استفاده میشه. ما ابتدا استراکت یا به طور کامل استراکچر رو داخل برنامه مون تعریف می کنیم و بعد داخل بدنه ی اصلی برنامه مون میتونیم ازش استفاده کنیم 

## سینتکس 

```cpp
#include <iostream>
#include <string>

using namespace std;

struct StructName {
	// Attributes  : ویژگی ها
};
int main(){
	StructName VariableName;
	return 0;
}
```

با استفاده از سینتکس بالا ما میتونیم یک استراکچر رو تعریف کنیم و ازش داخل برنامه به عنوان یک دیتاتایپ استفاده کنیم.

حالا میریم سراغ اینکه بیشتر با ماهیت استراکچر آشنا بشیم و چند تا مثال کاربردی ازش ببینیم.

## ماهیت استراکچر

همونطور که گفتیم ما قراره با استفاده از استراکچر ها یک دیتاتایپ جدید رو به برنامه معرفی کنیم که از قبل وجود نداشته و با استفاده از اون مقادیر جدیدی رو داخل یک متغیر ذخیره کنیم.

برای مثال ما می خوایم به برنامه ی خودمون یک انسان رو معرفی کنیم و از این به بعد با استفاده از دیتاتایپی به اسم `human` متغیر هایی از این نوع بسازیم.

در ابتدا به این موضوع بر میگردیم که چه ویژگی هایی هستن که یک انسان رو تعریف می کنن؟
این ویژگی هارو با توجه به مواردی که داخل برنامه مون نیاز میشه پیدا می کنیم.
برای مثال داخل این برنامه این ویژگی هارو شامل موارد زیر در نظر می گیریم :

- نام
- نام خانوادگی
- سن

حالا کافیه که یک استراکچر به اسم `human` تعریف کنیم و ویژگی هاشو اینجوری تعریف کنیم :

```cpp
struct human{
	string Name;
	string Family;
	int Age;
};
```
برای تعریف کردن ویژگی ها مثل تعریف کردن یک متغیر عمل می کنیم. ولی اینجا فقط یک متغیر تعریف نمیشه و این ویژگی هایی که تعریف کردیم برای هر متغیر از نوع human وجود خواهند داشت و میتونن مقادیر مختلفی داشته باشن (جلوتر داخل مثال ها بهتر متوجه میشید.)

حالا که استراکچر رو تعریف کردیم می خوایم یک متغیر تعریف کنیم و مشخصات یک انسان رو داخلش ذخیره کنیم :

```cpp
struct human{
	string Name;
	string Family;
	int Age;
};

int main() {
	human h;
	h.Name = "Ali"; // Set Name to Ali
	h.Family = "Seifi"; // Set Family to Seifi
	h.Age = 18; // Set Age to 18

	// See the Values :
	cout << h.Name << "\n"; // Show human name
	cout << h.Family << "\n"; // Show human family
	cout << h.Age << "\n"; // Show human age
	
	return 0;
}
```

با استفاده از سینتکس `Variable.Attribute` میتونیم به ویژگی های این متغیر دسترسی داشته باشیم و اونارو تغییر بدیم یا بخونیم.

داخل مثال بالا اسم متغیر رو `h` گذاشتیم و با علامت `.` به ویژگی های اون دسترسی پیدا کردیم.

برای اینکه متوجه جدا بودن این ویژگی ها برای دو متغیر مختلف بشید یک مثال مجزا میزنیم :

می خوایم یک ماشین رو بر اساس مدل و پلاکش به برنامه معرفی کنیم و دو تا متغیر از نوع ماشین بسازیم و اطلاعات دو تا ماشین مختلف رو داخل اونا ذخیره کنیم :

```cpp
struct Car{
	string Model;
	string Plate;
};

int main(){
	// define variables
	Car car1;
	Car car2;

	// set car1 information
	car1.Model = "Benz";
	car1.Plate = "12b435";

	// set car2 information
	car2.Model = "Pride";
	car2.Plate = "52a523";

	// show cars information
	cout << "Car 1 : " << car1.Model << " | " << car1.Plate << "\n";
	cout << "Car 2 : " << car2.Model << " | " << car2.Plate << "\n";
	return 0;
}
```

تا اینجا یاد گرفتید که با استفاده از استراکچر ها یک دیتاتایپ جدید رو به برنامه تون اضافه کنید و ازش استفاده کنید. حالا میریم سراغ چیزای دیگه ای که داخل استراکچر وجود دارن.

## Not Named struct

استراکچر هایی که تا الان ساختیم `Named Structurs` یا استراکچر های نام گذاری شده بودند.
الان می خوایم با نوع دیگه ای از تعریف استراکچر ها آشنا بشیم که استراکچر های بدون نام هستند.

مواقعی که قرار نیست استراکتی که تعریف می کنیم داخل پروژه به طور مستمر استفاده بشه و استفاده ی اون در حد تعریف یک یا چند متغیر در نقطه ای مشخص از پروژه هست میتونیم از این روش برای تعریف استراکچرمون استفاده کنیم.

داخل این روش استراکچر رو داخل بدنه ی اصلی برنامه یعنی تابع `int main()` تعریف می کنیم :

```cpp
int main(){
	// define struct and define variable
	struct {
		string Name;
		string Family;
		int Age;
	} human1;

	// set human1 information
	human1.Name = "Ali";
	human1.Family = "Seifi";
	human1.Age = 18;

	// show human1 information
	cout << "Name : " << human1.Name << " | Family : " << human1.Family << " | Age : " << human1.Age << "\n";
	
	return 0;
}
```

داخل کد بالا در همون لحظه ای که struct رو تعریف می کنیم یک متغیر از نوع استراکت ساخته شده به اسم `human1` هم میسازیم. داخل این حالت استراکچر ما نام خاصی نداره و صرفا بر اساس ویژگی هاش تعریف میشه و متغیری که ساختیم اون ویژگی هارو شامل میشه.

### Define Multi-Variables
ما میتونیم در لحظه ی تعریف استراکچر بدون نام چند متغیر از اون نوع بسازیم.

برای اینکار باید به روش زیر عمل کنیم :

```cpp
int main(){
	// define structure and variables
	struct {
		string Model;
		string Plate;
	} car1 , car2 , car3;

	// set car1 infromation
	car1.Model = "Benz";
	car1.Plate = "10T456";

	// set car2 information
	car2.Model = "Pride";
	car2.Plate = "24A874";

	// set car3 information
	car3.Model = "peugeot";
	car3.Plate = "14L154";

	// show cars infromation
	cout << "Car 1 : " << car1.Model << " | " << car1.Plate << "\n";
	cout << "Car 2 : " << car2.Model << " | " << car2.Plate << "\n";
	cout << "Car 3 : " << car3.Model << " | " << car3.Plate << "\n";

	return 0;
}
```
در ابتدا یک استراکچر بدون نام که شامل ویژگی های ماشین هست رو تعریف کردیم و در همون لحظه 3 متغیر با نام های `car1` , `car2` , `car3` از نوع استراکچر ساخته شده میسازیم.

داخل خط های بعدی دونه دونه اطلاعات مربوط به هرکدوم از این 3 متغیر رو براش وارد می کنیم و در نهایت اطلاعاتی که داخل متغیر ها ذخیره شدن رو نمایش میدیم.

### نتیجه گیری کلی
در کل ما با توجه به استفاده ای که می خوایم از این استراکچر داشته باشیم میایم و از یکی از این روش ها استفاده می کنیم.

اگر می خواستیم فقط داخل یک جای خاص ازش استفاده کنیم از استراکچر بدون نام استفاده می کنیم و اگر هم نیاز بود که در جاهای مختلفی ازش استفاده بشه از استراکچر نام گذاری شده استفاده می کنیم.

## اضافه کردن تابع به استراکچر

ما میتونیم به هر استراکچر یکسری توابع اضافه کنیم تا منحصر به متغیر هایی باشن که از اون نوع استراکچر هستند.

برای مثال میتونیم برای هر استراکچر یک تابع تعریف کنیم تا مشخصات اون داده رو برامون چاپ کنه.

همین مثال رو با استراکچر car پیاده سازی می کنیم :

```cpp
struct car{
	string Model;
	string Plate;

	void introduce(){
		cout << Model << " - " << Plate;
	}
};

int main(){
	car c1;
	c1.Model = "Benz";
	c1.Plate = "71B234";

	c1.introduce();

	return 0;
}
```

در خروجی خواهیم داشت :

```output
Benz - 71B234
```

در کد بالا داخل استراکچر car یک تابع به نام introduce() تعریف کردیم که مدل و پلاک متغیر مد نظرمون رو چاپ کنیم.

این تابع رو روی هر متغیری که اجرا کنیم مقادیر مربوط به اون متغیر رو نمایش خواهد داد.

برای اجرا کردن این تابع روی متغیر `c1` از دستور `c1.introduce()` استفاده می کنیم. که مشخص کننده ی این هست که تابع `introduce()` روی متغیر `c1` باید اجرا بشه.

## جمعبندی نهایی

در نهایت با استفاده از استراکچر ها میتونیم برنامه ی تمیز تری داشته باشیم.

داخل قسمت های بعدی وارد برنامه نویسی شی گرا میشیم و میبینید که شی گرایی شباهت زیادی با مباحثی که توی این قسمت داشتیم دارن و اونجا بیشتر و عمیق تر در مورد این مباحث صحبت می کنیم.


از داخل این فایل میتونید کد های این قسمت رو ببینید و فایل رو برای خودتون اجرا کنید تا نتیجه ی کد هارو ببینید : [Examples](Program.cpp)