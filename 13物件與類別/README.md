# 物件與類別
- 程序導向就是使用function建立應用程式
	- 優點-效能好，檔案小
	- 缺點-不好共同開發，維護困難  

- 物件導向就是使用類別
	- 優點-好開發，維護簡單，方便共同開發
	- 缺點-檔案大，效能較差

### 建立實體物件的語法為:
- 類別名稱 物件變數名稱;  
//根據類別建立實體物件

- 例如以Person 類別建立 robert
	- Person robert
- 要建立物件前，必需先有類別，有了類別才能產生物件，類別就像建築的藍圖，而物件是依據藍圖所建出的一棟棟的房子


```c++
class 類別名稱{
	private:
		[static] 資料型別 成員;
	public:
		[static] 資料型別 成員;
	protected:
		[static] 資料型別 成員;
};
```

![自行定義的類別](pic/i2.JPG)
	
	
```c++
#include <iostream>
using namespace std;

class Person{
	public:
		int tall;
		string name;
		void walk(int var){
			cout << name << "每小時可跑" << var << "公里" << endl;
		}
};

int main() {
	Person david;
	david.tall = 180;
	david.name = "David";
	cout << david.name << " 身高=" << david.tall << endl;
	david.walk(15);

	Person robert;
	robert.tall = 183;
	robert.name = "Robert";
	cout << robert.name << " 身高=" << robert.tall << endl;
	robert.walk(15);

	Person *john = new Person();
	john->tall = 170;
	john->name = "John";
	cout << john->name << " 身高=" << john->tall << endl;
	john->walk(15);
	return 0;
}
```

```c++
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Student{
	public:
		string name;
		string id;
		int chinese;
		int english;
		int math;
		int sum(){
			return chinese + english + math;
		}

		float average(){
			return sum() / 3.0;
		}
};

int main() {
	Student stu1;
	stu1.name = "stu1";
	stu1.id = "A10001";
	stu1.chinese = 87;
	stu1.english = 96;
	stu1.math = 76;

	cout << "學生姓名:" << stu1.name << endl;
	cout << "學號:" << stu1.id << endl;
	cout << "國文:" << stu1.chinese << endl;
	cout << "英文:" << stu1.english << endl;
	cout << "數學:" << stu1.math << endl;
	cout << "總分:" << stu1.sum() << endl;
	printf("平均:%.2f\n",stu1.average());
	return 0;
}
```

```c++ 
使用namespace

#include <iostream>
using namespace std;
//定義類別
namespace Human{
	class Person{
		public:
		//field欄位
		string name;
		int tall;
		//實體的method
		void walk(int var){
			cout << name << "每小時可以跑多少" << var << "公里" << endl;
		}

		protected:

		private:

	};
}

using namespace Human;

int main() {
	Person david;
	david.name = "Davie Hsu";
	cout << "david的姓名:" << david.name << endl;
	david.tall = 180;
	cout << "david的高度是:" << david.tall << "公分" << endl;
	david.walk(8);
	cout << "======================\n";
	Person robert;	
	robert.name = "Robert Hsu";
	cout << "robert的姓名:" << robert.name << endl;
	robert.tall = 170;
	cout << "robert的高度是:" << robert.tall << "公分" << endl;
	robert.walk(10);
}
```

### 出考題

```c++
#include <iostream>
#include <vector>
using namespace std;

class Question {
public:
  string q;
  int answer;
  bool is_right = false;
};

void check(vector<Question> &list){
	int yes = 0;
	int no = 0;
	for(int i=0; i<list.size(); i++){
		if(list[i].is_right==true){
			yes++;
		}else{
			no++;
		}
	}

	cout << "您答對:" << yes << "題\n";
	cout << "您答錯:" << no << "題\n";
	cout << "======================\n";
	cout << "答錯的題目是:" << endl;
	for(int i=0; i<list.size(); i++){
		if(list[i].is_right == false){
			cout << "第" << i+1 << "題:";
			cout << list[i].q << endl;
			cout << "正確答案是:" << list[i].answer << "\n\n";
		}
		
		
	}
}

int main() {
  Question question1;
  question1.q = "0 + 0 =   (1) 0 (2) 1 (3) 2 (4) 3:";
  question1.answer = 1;

  Question question2;
  question2.q = "0 + 1 =   (1) 0 (2) 1 (3) 2 (4) 3:";
  question2.answer = 2;

  Question question3;
  question3.q = "1 + 1 =   (1) 0 (2) 1 (3) 2 (4) 3:";
  question3.answer = 3;

  Question question4;
  question4.q = "1 + 2 =   (1) 0 (2) 1 (3) 2 (4) 3:";
  question4.answer = 4;

	vector<Question> list{question1,question2,question3,question4};

	for(int i=0; i<list.size(); i++){
		int input_value;
		cout << "第" << i+1 << "題\n";
		cout << list[i].q;
		cin >> input_value;
		if(list[i].answer == input_value){
			list[i].is_right = true;
		}
		cout << endl;
	}
	cout << "輸入完畢" << endl;
	check(list);
}

```
	
### 在類別的外部定義方法  
	
```
	可以將方法定義在類別的內部，也可以將方法定義在類別的外部。此時就必須在類別中加入方法原型宣告，並在類別外部的方法前加上「::」類別範圍解析子。例如「Person::walk」;
```
	
```c++
//============================================================================
// Name        : protClass1.cpp
// 在類別的外部定義方法

#include <iostream>
using namespace std;

namespace Human{
	class Person{
	public:
		string name;
		int tall;
		int weight;
		void walk(int); //將方法定義在類別的外面
		float bmi(void);
	};
	//:: 類別範圍解析子
	void Person::walk(int var){
			cout << name << "每小時可跑" << var << "公里" << endl;
	}

	float Person::bmi(){
		float myBmi = weight / ((tall / 100.0) * (tall / 100.0));
		return myBmi;
	}
}

using namespace Human;

int main() {
	Person david;
	david.name = "David";
	david.tall = 170;
	david.weight = 60;
	cout << "david's name:" << david.name << endl;
	cout << "david's tall:" << david.tall << endl;
	david.walk(20);
	cout << "david's bmi:" << david.bmi() << endl;

	cout << "===========================\n";
	
	Person robert;
	robert.name = "Robert";
	robert.tall = 180;
	robert.weight = 75;
	cout << "robert's name:" << robert.name << endl;
	cout << "robert's tall:" << robert.tall << endl;
	robert.walk(30);
	cout << "robert's bmi:" << robert.bmi() << endl; 
}
```

### 建構式
類別中有一個特殊的方法，稱為建構式，其名稱和類別相同。  
當使用者建立新的物件時，會自動執行此建構式。  
建構式常來做為物件的初始化動作  

```c++
#include <iostream>
using namespace std;

namespace Ford{
	class Car{
		public:
			int speed;
			//預設的建構
			//建構式不要宣告傳出值
			Car();

			//建構式的多載
			Car(int);
	};

	Car::Car(){
		this -> speed = 70;
	}

	Car::Car(int s){
		this -> speed = s;
	}

}


int main() {
	Ford::Car car1;
	cout << "使用Car()建構式建立後,速度是:" << car1.speed << endl;

	Ford::Car car2(100);
	cout << "使用Car(int s)建構式建立後,速度是:" << car2.speed << endl;
}

```


### 方法
方法(method)其實就是函式，在類別中有將函式稱為方法，方法會執行指定的動作，可以傳回或不傳回返回值，在呼叫方法的過程裡可以傳遞參數或不傳遞參數

```
加上static 關鍵字宣告的方法，即為靜態方法。
省略static宣告的方法，則為實體方法。
```

語法
```
回傳值資料型別 [static] 方法名稱 ([參數串列])
{
	[程式碼];
	[return 傳回值]
}
```

```c++
//============================================================================
// Name        : method1.cpp
//建立方法,設定一個Turbo()方法，可以改變speed的屬性
//類別的欄位(靜態成員變數)
//類別方法的建立

#include <iostream>
using namespace std;

	class Car{
		public:
			//類別的欄位(靜態成員變數)
			static int turboCount;
			int speed;
			void turbo(int);
			//類別的方法(靜態方法)
			//必需實作在class內
			//也可以實作在外部，在外部實作時，省略static關鍵字
			int static getCount(){
				return turboCount;
			}
	};

	//靜態成員變數一定要在外部給預設值
	int Car::turboCount = 0;

	void Car::turbo(int s){
		speed += s;
		turboCount += 1;
		//使用this的寫法
		//this -> speed += s;
	}
	
	




int main() {
	Car car1;
	car1.speed = 70;
	cout << "car1現在的速度=" << car1.speed << endl;
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	cout << "加速後的速度=" << car1.speed << endl;
	

	Car car2;
	car2.speed = 30;
	cout << "car1現在的速度=" << car2.speed << endl;
	car2.turbo(1);
	car2.turbo(1);
	car2.turbo(1);
	cout << "加速後的速度=" << car2.speed << endl;

	cout << "加速了多少次(靜態成員變數):" << Car::turboCount << endl;
	cout << "加速了多少次:(靜態方法)" << Car::getCount() << endl;
	
}
```

### 實作練習(BMI)

```
#include <iostream>
#include <math.h>

using namespace std;

class Person{
	public:
	string name;
	int height;
	int weight;
	Person(string name,int height, int weight){
		this -> name = name;
		this -> height = height;
		this -> weight = weight;
	}
	

	float getBmi(){
		return weight / pow((height/100.0),2);
	}

	void suggestion(){
		float bmi = getBmi();
		string message;
		if(bmi<18.5){
			message = "體重過輕";
		}else if(bmi < 24){
			message = "正常範圍";
		}else if(bmi < 27){
			message = "過重";
		}else if(bmi < 30){
			message = "輕度肥胖";
		}else if(bmi < 35){
			message = "中度肥胖";
		}else{
			message = "重度肥胖";
		}
		cout << "提醒:" << message << endl;
	}
};

int main() {
	Person p1("徐國堂",179, 75);
	cout << "姓名:" << p1.name << endl;
	cout << "身高:" << p1.height << endl;
	cout << "體重:" << p1.weight << endl;
	cout << "BMI:" << p1.getBmi() << endl;
	p1.suggestion();

	Person p2("robert",170, 100);
	cout << "姓名:" << p2.name << endl;
	cout << "身高:" << p2.height << endl;
	cout << "體重:" << p2.weight << endl;
	cout << "BMI:" << p2.getBmi() << endl;
	p2.suggestion();
}
```

### 實例練習50位學生，儲存至陣列中

```c++
#include <iostream>
#include "student.h"
using namespace std;

void sortedStudents(Student *s,int nums){
	Student temp;
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (s[i].sum() < s[j].sum()){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}

}

int main() {
	int nums;
	Student::begin();
	cout << "請輸入學生人數:";
	cin >> nums;
	Student students[nums];
	for(int i=0; i<nums; i+=1){
		students[i] = Student("stu"+to_string(i+1));		
	}

	//依總分排序
	sortedStudents(students,nums);

	cout << "學生姓名\t國文\t數學\t英文\t總分\t平均\t名次" << endl; 

	for(int i=0; i<nums; i+=1){
		Student s = students[i];
		cout << s.name << "\t\t" << s.chinese << "\t\t" << s.math << "\t\t" << s.english << "\t\t" << s.sum() << "\t\t" << s.average() << "\t\t" << i+1 << endl;
	}
	return 0;
}


student.h

#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
#include <time.h>

using namespace std;


class Student{
	public:
		//自訂的建構式(4個參數)
		Student(string n,int c, int e, int m){
			name = n;
			chinese = c;
			english = e;
			math = m;
		}
		//自訂的建構式(1個參數)
		Student(string n){					
			name = n;
			chinese = rand() % 41 + 60;
			english = rand() % 41 + 60;
			math = rand() % 41 + 60;
		}
		//自訂的建構式()
		Student(){
			
		}

		//type method
		//使用Student時，必需先執行Student::begin()
		static void begin(){
			srand(time(NULL));
		}
		
		string name;
		int chinese;
		int english;
		int math;

		int sum(){
			return chinese + english + math;
		}

		float average(){
			return sum() / 3.0;
		}
};
#endif
```

### 實作練習(儲存students資料成為csv檔)
```c++
#include <iostream>
#include <vector>
#include <time.h>
#include <fstream>

using namespace std;
class Student{
	public:
	int chinese;
	int english;
	int math;

	int sum(){
		return chinese + english + math;
	}

	double average(){
		return sum() / 3.0;
	}
	
};

void generator(vector<Student>& s,int n){
	for(int i=0;i<n;i++){
		Student student;
		student.chinese = random() % (100-50+1) + 50;
		student.english = random() % (100-50+1) + 50;
		student.math = random() % (100-50+1) + 50;
		s.push_back(student);
	}
}

void print_students(vector<Student>& stus){
	cout << "國文\t英文\t數學\t總分\t平均\n";
	for(Student& s:stus){
		cout << s.chinese << "\t\t";
		cout << s.english << "\t\t";
		cout << s.math << "\t\t";
		cout << s.sum() << "\t\t";
		cout << s.average() << endl;
	}
}

void save_students(vector<Student>& stus){
	string filename;
	cout << "請輸入檔名:";
	cin >> filename;
	filename += ".csv";
	ofstream out;
	out.open(filename);
	if(out.good()){
		out << "國文,英文,數學,總分,平均\n";
		for(Student& s:stus){
			out << s.chinese << ",";
			out << s.english << ",";
			out << s.math << ",";
			out << s.sum() << ",";
			out << s.average() << endl;
		}
		
	}else{
		cout << "存檔失敗";
	}
	out.close();
}

int main() {
	srandom(time(NULL));
	int student_nums;
	vector<Student> students;
	cout << "請輸入學生數:";
	cin >> student_nums;
	generator(students,student_nums);
	print_students(students);
	save_students(students);
}
```
### public 欄位的保護
物件的另一個特點是封裝，封裝是為了保護物件，避免物件因為外界不正當的存取而破壞。使用自訂的方法對資料成員作保護。如此可以保護物件的正當存取。

![public 欄位的保護](pic/pic2.png)

```c++
//============================================================================
// Name        : speed2.cpp
// 使用private 保護欄位


#include <iostream>
using namespace std;

namespace Ford{
	class Car{
		private:
			int speed=0;

		public:
			void turbo(int);
			int getSpeed();
	};

	void Car::turbo(int s){
		speed += s;
	}

	int Car::getSpeed(){
		return speed;
	}
}

int main() {
	Ford::Car car1;
	cout << "尚未加速前的速度:" << car1.getSpeed() << endl;
	car1.turbo(30);
	cout << "加速後的速度:" << car1.getSpeed() << endl;
}

```

```
*問題 自行定義類別
- 定義Circle類別
- 並建立Radius欄位表示半徑
- Area()方法計算圓面積。
- 輸入半徑後計算圓面積

顯示================
半徑 = 10
圓面積=314.159



#include <iostream>
#define PI 3.14159

using namespace std;

namespace Shape{
	class Circle{
		private:
			int _radius;

		public:
			void setRadius(int);
			int getRadius(void);		
			float area(void);
	};

	float Circle::area(){
		return PI * _radius * _radius;
	}
	void Circle::setRadius(int r){
		_radius = r;
	}

	int Circle::getRadius(void){
		return _radius;
	}
}

Shape::Circle circle;

int main() {
	circle.setRadius(10);
	cout << "半徑=" << circle.getRadius() << endl;
	cout << "圓面積=" << circle.area() << endl;
}
```

### 實體方法的多載
- 相同的方法名稱
- 有不同數量的參數
- 不同資料類型的參數
- 
```c++
#include <iostream>
#define PI 3.14159

using namespace std;

namespace Shape{
	class Circle{
		private:
			int _radius;

		public:
			void setRadius(int);
			void setRadius(void);
			int getRadius(void);		
			float area(void);
	};

	float Circle::area(){
		return PI * _radius * _radius;
	}
	//多載
	void Circle::setRadius(int r){
		_radius = r;
	}
	//多載
	void Circle::setRadius(){
		_radius = 100;
	}

	int Circle::getRadius(void){
		return _radius;
	}
}

Shape::Circle circle;

int main() {
	circle.setRadius();
	cout << "半徑=" << circle.getRadius() << endl;
	cout << "圓面積=" << circle.area() << endl;
}
```





### 實作.h 和 .cpp
建立h檔和cpp檔整合的class  

```c++
/*
 * Person.h
 *
 *  Created on: 2019年7月20日
 *      Author: t1
 */

#define PI 3.14159
#define SQUARE(x) (x) * (x)

//預防被重覆的#include
#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person{
	public:
	static int count;	
	int tall;
	string name;
	void walk(int); //輸出走路的速度
	int static sub(int a, int b){
		return a - b;
	}
	
};

int add(int, int);

#endif

```
	
### 

```c++
/*
* Person.cpp
*/

#include "Person.h"

int Person::count = 0;
void Person::walk(int w){
	cout << name << "每小時可跑" << w << "公里" << endl;
}

int add(int a, int b){
	return a + b;
}
```
	


### 
```c++
//============================================================================
// Name        : protClass1.cpp
// 使用外部class



#include "Person.h"


#include <iostream>

using namespace std;
int main() {
	int radius = 10;
	float area = SQUARE(radius) * PI;
	cout << "面積是:" << area << endl;

	Person person1;
	person1.walk(50);
	cout << add(3,5) << endl;
	cout << "class method:" << Person::sub(10, 3) << endl;
	Person::count = 20;
	cout << "class static field=" << Person::count;
}

```



### 繼承  
繼承是從既有的類別中衍生新的類別,繼承後的類別稱為子類別(child class)或衍生類別(derived class), 而被繼承的類別稱為父類別(parent class)或基底類別(base class)  

```c++
class base{
};

//子類別derived繼承父類別base
class derived:public base{
};
```

子類別以public方式繼承，代表子類別會繼承父類別中宣告為public 及 protectd的成員(包括欄位或屬性、方法),但不會繼承宣告為private的成員.  

```c++
class base{
	public;
	protected;
	private;
};

//子類別derived繼承父類別base
class derived:public base{
};
```

```c++
定義2個類別，一個為父類別一個為子類別,第一個類別Vehicle父類別是具有1個方法和3個欄位的基底類別,第2個類別Car子類別,從基底類別Vehicle繼承方法methosA()和非private 欄位a1,a3,並新增b1欄位和方法methodB()


#include <iostream>
using namespace std;

class Vehicle{
	public:
		int a1;
		Vehicle(){
			a1 = 1;
		}
		void methodA(){
			cout << "這是Vehicle的methodA" << endl;
		}
	private:
		int a2;
	
	protected:
		int a3;
};

class Car:public Vehicle{
	public:
		int b1;
		void methodB(){
			a1 = 8;
			a3 = 7;
			//a2 = 5;
		}
};


int main() {
	Vehicle vehicle;
	Car car;
	cout << "vehicle 中的a1的值:" << vehicle.a1 << endl;
	cout << "car 中的a1的值:" << car.a1 << endl;
	//cout << "car 中的a3的值:" << car.a3 << endl; //錯誤
	car.methodA();
	car.methodB();
	cout << "----執行car的methodB後---" << endl;
	cout << "Vehicle 中的a1的值:" << vehicle.a1 << endl;
	cout << "Car中的a1的值:" << car.a1 << endl;
}
```

### 子類別的應用

```c++
計算面積  inherits2.cpp

先定義Rectangle類別,並宣告public欄位width及protected欄位Height,再定義getArea()方法來計算矩形面積。然後再定義Triangle類別,Triangle類別繼承Rectangel類別並增加一個計算三角形面積的方法getArea2()

使用virtual method,override 就要有關鍵字override

顯示====================================

正方型的面積是100
矩型的面積是500
三角型的面積是250

========================================

#include <iostream>

class Square{
	public:		
		int width;
		Square(int w){
			width = w;
		}
		virtual int getArea(){
			return width * width;
		}
};

class Rectangle:public Square{
	public:
		int height;
		Rectangle(int w,int h):Square(w){
			height = h;
		}
		int getArea() override{
			return width* height;
		}
};

class Triangle:public Rectangle{
	public:
	int getArea() override{
		return (width*height) / 2;
	}
};

using namespace std;
int main() {
	Square sq = Square();
	sq.width = 10;
	cout << "正方型的面積是" << sq.getArea() << endl;

	Rectangle rec = Rectangle();
	rec.width = 10;
	rec.height = 50;
	cout << "矩型的面積是" << rec.getArea() << endl;

	Triangle tri = Triangle();
	tri.width = 10;
	tri.height = 50;
	cout << "三角型的面積是" << tri.getArea() << endl;
 } 



```

### 子類別的應用

```
tools.h
#ifndef __TOOLS_H__
#define __TOOLS_H__

class Square{
	public:
		int width;
		Square(int width);
		int area();
};

Square::Square(int width){
	this->width = width;
}

int Square::area(){
	return width * width;
}

class Rectangle:public Square{
	public:
	int height;
	Rectangle(int width, int height);
	int area();
};

Rectangle::Rectangle(int width, int height):Square(width){	
	this -> height = height;
}

int Rectangle::area(){
	return width * height;
}

class Triangle:public Rectangle{
	public:
	Triangle(int width, int height);
	float area();
};

Triangle::Triangle(int width, int height):Rectangle(width,height){
	
}

float Triangle::area(){
	return width * height / 2.0;
}
#endif


main.cpp

#include <iostream>
#include "tools.h"

using namespace std;
int main() {
	Square s(10);
	cout << "s正方形的面積是:" << s.area() << endl;

	Rectangle r(30, 20);
	cout << "r矩形的面積是:" << r.area() << endl;

	Triangle t(30,20);
	cout << "t三角形的面積是:" << t.area() << endl;
}

```

```c++
問題: 繼承 calculator1.cpp

先定義Calculator類別,再定義sum()方法來計 1+2+....+n總和。然後再定義Computer類別繼承Calculator類別並增加1*2*3....*n的方法sum2()

顯示=============================
輸入 n=5
1+2+3 .... +n = 15
1*2*3 .... *n = 120
```

### 子類別多載
類別被繼承後,父類別中的public及protected成員均會被子類別繼承,同時子類別也可以對父類別中不足的功能作擴充或調整.要完成這樣的機制,常用的方式有多載(overloads)和覆寫(override).

#### 不同參數的多載
多載(同名異式),即具有相同名稱但不同參數的方法。如此一來,就可以使用相同的方法名稱完成多樣的功能,只要傳遞的參數不同即可,c++會根據所傳入的參數執行正確的方法,所以多載實際上是以參數來區分。

```c++
不同參數的多載  override2.cpp
父類別 Employee 可用 show() 方法顯示「本薪」,子類別Manager繼承Employee父類別,並且以多載show()的方法改成顯示「本薪和獎金」.

顯示====================================

Employee 本薪 20000
----------------------------
Manager 薪資(本薪 + 獎金) = 35000

=========================================

#include <iostream>
using namespace std;

class Employee{
	public:
		void show(int);
		int salary;		
};

void Employee::show(int x){
	cout << "Employee 本薪" << x << endl;
	cout << "------------------------" << endl;
}

class Manager:public Employee{
	public:
	void show(int,int);
	int bonus;
};

void Manager::show(int x, int y){
	cout << "Manager 薪資(本薪+獎金) = " << x + y << endl;
}

int main() {
	Employee employee;
	employee.salary = 20000;
	employee.show(employee.salary);

	Manager manager;
	manager.salary = 30000;
	manager.bonus = 5000;
	manager.show(manager.salary, manager.bonus);	
}
```

### 保留父類別的多載方法

```c++
#include <iostream>
using namespace std;

class Employee{
	public:
		int salary;
		void show(int x){
			cout << "本薪 =" << x << endl;
		}
};

class Manager:public Employee{
	public:
	int bonus;
	void show(int x, int y){
		Employee::show(x);
		cout << "獎金=" << y << endl;
	}
};

int main() {
	Employee employee;
	cout << "employee:" << endl;
	employee.salary = 20000;
	employee.show(employee.salary);
	cout << "============================" << endl;
	Manager manager;
	cout << "Manager:" << endl;
	manager.salary = 30000;
	manager.bonus = 5000;
	manager.show(manager.salary, manager.bonus);
}
```

### 相同參數的多載(覆寫)

```c++
#include <iostream>
using namespace std;

class Employee{
	public:
		int salary;
		void show(int x){
			cout << "本薪 =" << x << endl;
		}
};

class Manager:public Employee{
	public:
	int bonus;
	void show(int x, int y){
		Employee::show(x);
		cout << "獎金=" << y << endl;
	}
};

int main() {
	Employee employee;
	cout << "employee:" << endl;
	employee.salary = 20000;
	employee.show(employee.salary);
	cout << "============================" << endl;
	Manager manager;
	cout << "Manager:" << endl;
	manager.salary = 30000;
	manager.bonus = 5000;
	manager.show(manager.salary, manager.bonus);
}
```

### 建構式的多載與繼承

```c++
#include <iostream>
using namespace std;

class A{
	public:
		int n;
		A(){
			n=1;
		}
		A(int x){
			n = x;
		}
};

class B: public A{
	public:
		B():A(){

		}

		B(int x):A(){
			n = x + 5;
		}

};

int main() {
	B b1;
	cout << "b1.n=" << b1.n << endl;
	B b2(10);
	cout << "b2.n" << b2.n << endl;
}
```

```c++
問題:子類別中以相同的的參數多載(覆寫)父類別
先定義Cauculator類別，再定義sum()方法來計算1+2+...+n總和。然後再定義Computer類別繼承Calculator類別並以相同的參數多載1*2*3*4....*n的法法Sum()


顯示=========================
輸入 n = 5
1+2+3...+n = 15
1*2*3...*n = 120
```

## 實作練習[Tinkercad](https://www.tinkercad.com)
