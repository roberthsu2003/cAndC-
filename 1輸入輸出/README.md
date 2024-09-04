# C++ 輸入輸出
### DevC++ 下載位置
[下載](https://sourceforge.net/projects/orwelldevcpp/)

### 
	
```c++
//cin_s.cpp
#include <iostream>
using namespace std;

int main() {
	int englishScore = 60;
	cout << "請輸入您的英文分數:";
	cin >> englishScore;
	cout << "Hello ! 您的英文分數是: " << englishScore;
	return 0;
}
```


```c++
//cin.cpp

#include <iostream>
using namespace std;
	
int main() {
	string name;
	cout << "請輸入中文姓名:";
	cin >> name;
	cout << "Hello! " << name;
	return 0;
}	
```
<br/><br/>

# C 語言 輸入輸出
## printf()
### printf("字串\n");
```c
//print1.c
int main(void) {
    printf("Hello World!\n");  // \n表示换行
    return 0;
}
```

## c語言輸出控制符號
| 字串格式化 | 說明 |
|:---------|:----|
|%d | 按十進制整數實際長度輸出 |
|%ld | 輸出長整數 |
|%u  | 輸出無符號整數 |
|%hhu  | unsigned char |
|%c  | 輸出字元 |
|%f  | 輸出實數(浮點數) |
|%lf | double |
|%o  | 輸出八進位 |
|%s  | 輸出字串 |
|%x  | 輸出十六進位 |

[c datatype](https://en.wikipedia.org/wiki/C_data_types)

### 2 printf("字串格式化"，輸出参数);
```c
//print2.c

#include <stdio.h>

int main(void) {
    int i = 10;
    printf("%d\n", i);  /*%d是字串格式符號，d 表示十進位，後面的 i 是輸出参数*/
    return 0;
}
```

```c++
#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	char myChar = 100;
	printf("myChar:%d\n", myChar); 
	unsigned short myShort = 60000;
	printf("myShort:%d\n", myShort);
	int myInt = 210000000;
	printf("myInt:%d\n", myInt);
	long long myLong = 2100000000000000000;
	printf("myLong:%lld\n", myLong);
	float myFloat = 3.145;
	printf("myFloat:%.2f\n", myFloat);
	double myDouble = 35689.34567;
	printf("myDouble:%.4f\n", myDouble);
}
```

```c
//printf3.c
//「\n」換行符號

#include <stdio.h>

int main(void) {
  int i = 10;
  int j = 3;
  printf("%d %d\n", i, j);
  return 0;
}
```

```c
//print4.c

#include <stdio.h>

int main(void) {
    int i = 10;
    int j = 3;
    printf("i = %d, j = %d\n", i, j);
    return 0;
}
```

```c
//print5.c
#include <stdio.h>

int main(void) {
    int i = 47;
    printf("%x\n", i);   
    printf("%X\n", i);   
    printf("%#x\n", i);   
    printf("%#X\n", i);   
    return 0;
}
```

```c
//print5.c

#include <stdio.h>

int main(void) {
    printf("%%d\n");
    printf("\\\n");
    printf("\"\"\n");
    return 0;
}
```

## scanf()
```c
//scanf1.c

#include <stdio.h>

int main(void) {
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &a);  //輸入整數並將值給變數a
    scanf("%d", &b);  //輸入整數並將值給變數b
    printf("a+b=%d\n", a+b);  //計算a+b並將值輸出
    scanf("%d %d", &c, &d);  //輸入2個整數值中間用空格，並將值給依序給變數c和d
    printf("c*d=%d\n", c*d);  //計算c和d相乘並輸出
    return 0;
}
```

```cpp
//scanf2.cpp

#include <stdio.h>

int main(void) {
	char letter;
	int age;
	char url[30];
	float price;
	
	printf("請輸入字元:");
	scanf("%c", &letter);
	printf("請輸入age:");
	scanf("%d",&age);
	printf("請輸入字串:");
	scanf("%s", url);
	printf("請輸入價格:");
	scanf("%f", &price);
	
	printf("這是字元:%c\n",letter);
	printf("這是整數:%d，這是字串:%s, 這是浮點數:%f\n",age, url, price);

    return 0;
}
```




```c
題目
//age.c
輸入出生「民國年份」後，求取對應「西元年份」及「現在年齡」。
公式 
西元年份 = 民國年份xx + 1911 
年齡 = 現在年份-西元年份 

顯示==================================
出生民國年份:69
對應西元年份:1980，今年39歲
```

**[解答]**

```
#include <stdio.h>
/*
輸入出生「民國年份」後，求取對應「西元年份」及「現在年齡」。
公式 
西元年份 = 民國年份59 + 1911 
年齡 = 現在年份-西元年份 


顯示==================================
出生民國年份:69
對應西元年份:1980，今年39歲
*/

int main(void) {
  int year=0;
  printf("出生民國年份:");
  scanf("%d",&year);
  int westernYear = 1911 + year;
  int age = 2019 - westernYear;
  printf("對應西元年份:%d,今年%d歲",westernYear,age);
  return 0;
}
```

---
```c
題目
//sumAve.c
同步登錄「國文、英文、數學」學測成績， 進行三科「總分、平均」計算報告。
提示．將「總分、平均」求取項目結果值後，輸出。

顯示====================================
科目:國文,英文,數學
請輸入:92 85 73

---計算學測分數----
三科總分:250
三科平均:83.3
```
**[解答]**

```/*
題目
//sumAve.c
同步登錄「國文、英文、數學」學測成績， 進行三科「總分、平均」計算報告。
提示．將「總分、平均」求取項目結果值後，輸出。

顯示====================================
科目:國文,英文,數學
請輸入:92 85 73

---計算學測分數----
三科總分:250
三科平均:83.3
*/

#include <stdio.h>

int main(void) {
  int chinese,english,math;
  int sum=0;
  float average = 0;
  printf("科目:國文,英文,數學\n");
  printf("請輸入:");
  scanf("%d %d %d",&chinese,&english,&math);
  sum = chinese + english + math;
  average = sum / 3.0;
  printf("三科總分:%d\n",sum);
  printf("三科平均:%.2f",average);
  return 0;
}
```


