# 資料型別和變數
```
宣告變數
資料型別 變數名稱 [ = 初始值]
```

```c++
//沒有初始值
int intA;
char a;
```

```c++
//有初始值
int intA = 100;
char a = 's';
```

## 變數的命名規則
```c++
第一個字元，只可以是英文字
第一個字元符號，只可以是_
文字內不可以有特殊符號
```

## 數值型別
數值型別 | 記憶體大小 | 範圍
------|------ | ---
char | 1 Byte | -128 ~ 127
unsigned char | 1 Byte | 0 ~ 255
short | 2 Byte | -32768 ~ 32767
unsigned short | 2 Byte | 0 ~ 65535	
int | 4 Byte | -2147483648 ~ 2147483647
unsigned int | 4 Byte | 0 ~ 4294967295
long | 4 Byte | -2147483648 ~ 2147483647
long long | 8 Byte | ——————————-
unsigned long | 4 Byte | 0 ~ 4294967295
float | 4 Byte | 6,7位數
double | 8 Byte | 15位數


```
特殊字元
\'
\"
\n 換行
\t tab
```

```
*question student.cpp
請輸出:  
姓名      座號      電話  
李振聲    11        0229435437  
張四聲    13        0229435467  
```
[解題](https://repl.it/@roberthsu2003/student)

## 字元型別
```c++
char chrB;
chrB = ’A‘;
char chrC;
chrC = 65;
```

```c++
#include <iostream>
using namespace std;

int main() {
  char characterA;
  characterA = 'A';
  cout << characterA << "\n";

  char characterB;
  characterB = 65;
  cout << characterB << "\n";
}
```
## 字串型別(string和字元陣列)
```c++
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	//c++ 型別
	string str1 = "這是字串1";

	//c語言的字元陣列
	const char* str2 = "這是字串2";

	//cout輸出
	cout << str1 << endl;
	cout << str2 << endl;

	//printf()
	printf("%s\n",str2);
	
}
```

## 布林型別(bool)
```c++
bool bolA = true;
bool bolB = false;

cout << bolA;
cout << bolB;

true 代表 1
false 代表 0

1,2,3...代表true
只有0 ...代表false
``` 


## 型別轉換
#### 型別自動轉換
```c++
運算式中若含有不同的數值型別，編譯器會自動以值域較大的型別為轉換依據

#include <iostream>
#include "stdlib.h"

using namespace std;

int main() {
	double PI = 3.1415915987;
	int radius = 9;
	cout << "圓面積=" << PI * radius * radius << endl;
	printf("圓面積=%.2f\n",PI * radius * radius);
}
```

```c++
如果是指定式，編譯器會自動將=右邊的資料型別轉換為左邊的資料型別。

int area;
area = PI * radius * radius; //自動由float轉換為int
cout << "area =" << area;
```

```c++
#include <iostream>

int main() {
	unsigned short a = 3000;
	int b;
	b = a;//可以小轉大
	printf("b=%d\n", b);

	char c;
	c = a;//由大轉小，資料會移失
	printf("c=%d\n", c);
}
```

## 強制轉換

```
語法:
(資料型別) 變數名稱;
```

```c++
short a = 123;
int b;
b = (int) a; //可以強制小轉大
```

```c++
int a = 1234567;
short b;
b = (short)a; //大轉小，資料會遺失
```

```c++
	範例:請讓使用者輸入三科成績後，自動計算其總分及平均
	//============================================================================
	// Name        : calscore.cpp
	// Author      : 
	// Version     :
	// Copyright   : Your copyright notice
	// Description : Hello World in C++, Ansi-style
	//============================================================================
	
	#include <iostream>
	using namespace std;
	
	int main() {
		unsigned short chinese = 0, english = 0, math = 0;
		float average;
		cout << "請輸入國文成績(0~100):";
		cin >> chinese;
	
		cout << "請輸入英文成績(0~100):";
		cin >> english;
	
		cout << "請輸入數學成績(0~100):";
		cin >> math;
	
		int sum = chinese + english + math;
		//average = (float)sum / 3;
		//average = (float)(sum / 3);
		average = sum / 3.0;
		cout << "您的總分為:" << sum << "分, 平均為" << average << "分\n";
	
		return 0;
	}
	
```

```c++
*question
outlay_s.cpp
小張要了解三天出遊花費的總支出和平均，設計程式讓小張輸入三天的支出後，自動計算其支出總額及平均

------
請輸入第一天的支出: 321
請輸入第二天的支出: 123
請輸入第三天的支出: 567
您的總支出為 xxxx 元，平均每天支出 xxx.xxx 元
```
[解題](https://repl.it/@roberthsu2003/outlays)
## 常數
#### 以#define 自訂常數

```c++
#define 常數名稱 常數值
#define PI 3.14
```

#### 以const 自訂常數
```c++
const 類別型別 常數名稱 = 常數值

const double PI = 3.14;

```

```c++
//defint.cpp

#include <iostream>
#define PI 3.14
using namespace std;

int main() {
	const double Tax_1 = 0.06, Tax_2 = 0.13;

	cout << "PI是" << PI << endl;
	cout << "Tax_1 = " << Tax_1 << ",Tax_2 = " << Tax_2;
	return 0;
}
```

```c++
//define1.cpp

#include <iostream>
#define MYPI 3.14159
using namespace std;

	int main() {
		const float PI = 3.14159;
		cout << "常數PI:" << PI << endl;
		cout << "前端處理指#define MYPI" << MYPI ;
		return 0;
	}
```

```c++
//輸入半徑,計算出圓面積

#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
	double radius;
	cout << "請輸入圓半徑:";
	cin >> radius;
	cout << "半徑" << radius << "的圓面積是" << radius * radius * PI;
}
```

```
#include <iostream>
#include <math.h>
#define PI 3.1415926
using namespace std;

int main() {
  int side, anotherSide;
  double radian, degree;
  cout << "請輸入對邊:";
  cin >> side;
  cout << "請輸入斜邊:";
  cin >> anotherSide;
  radian = asin(side / (double)anotherSide);
  degree = radian * 180 / PI;

  cout << "對邊是:" << side << endl;
  cout << "斜邊是:" << anotherSide << endl;
  cout << "弧度是:" << radian << endl;
  cout << "直角三角形的角度是:" << degree << endl;
}
```