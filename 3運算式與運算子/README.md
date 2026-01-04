# 運算式和運算子

## 目錄
- 運算式
  - 指定運算子
  - 算數運算子
- 運算子優先順序
  - 優先順序表（由高到低）
  - 優先順序範例
  - 重要提醒
- 比較運算子
- 邏輯運算子 
- 複合指定運算子
- sizeof型別運算子
- 三元運算式
  - 數學算式轉換電腦運算

## 運算式

```
運算子: +,-,*,/
運算元: 1+2的1和2
單元運算子:-24的-
二元運算子:1+2的+
三元運算子: true ? a : b
```

### 指定運算子
```c
變數 = 值;
intA = 10;
```

### 算數運算子
算數運算子|意義|
-----|----|
+| 加 |
-| 減 |
*|乘|
/|除|
%|餘|
++|遞增|
--|遞減|

## 運算子優先順序

在C語言中，運算子有不同的優先順序，當一個運算式包含多個運算子時，會按照優先順序來決定運算的順序。

### 優先順序表（由高到低）
| 優先順序 | 運算子 | 說明 | 結合性 |
|---------|--------|------|--------|
| 1 | `()` | 括號 | 左到右 |
| 2 | `++` `--` | 前置遞增/遞減 | 右到左 |
| 3 | `++` `--` | 後置遞增/遞減 | 左到右 |
| 4 | `*` `/` `%` | 乘法、除法、餘數 | 左到右 |
| 5 | `+` `-` | 加法、減法 | 左到右 |
| 6 | `<` `<=` `>` `>=` | 關係運算子 | 左到右 |
| 7 | `==` `!=` | 等於、不等於 | 左到右 |
| 8 | `&&` | 邏輯AND | 左到右 |
| 9 | `||` | 邏輯OR | 左到右 |
| 10 | `?:` | 三元運算子 | 右到左 |
| 11 | `=` `+=` `-=` `*=` `/=` `%=` | 指定運算子 | 右到左 |

### 優先順序範例

```c
#include <stdio.h>

int main() {
    // 範例1: 算數運算子優先順序
    int result1 = 2 + 3 * 4;  // 先算 3*4=12，再算 2+12=14
    printf("2 + 3 * 4 = %d\n", result1);  // 輸出: 14
    
    int result2 = (2 + 3) * 4;  // 括號優先，先算 2+3=5，再算 5*4=20
    printf("(2 + 3) * 4 = %d\n", result2);  // 輸出: 20
    
    // 範例2: 混合運算子
    int a = 10, b = 5, c = 2;
    int result3 = a + b * c - 4;  // 先算 b*c=10，再算 a+10-4=16
    printf("10 + 5 * 2 - 4 = %d\n", result3);  // 輸出: 16
    
    // 範例3: 比較和邏輯運算子
    int result4 = a > b && b > c;  // 先算比較，再算邏輯AND
    printf("10 > 5 && 5 > 2 = %d\n", result4);  // 輸出: 1 (true)
    
    // 範例4: 遞增運算子和算數運算子
    int x = 5;
    int result5 = ++x * 2;  // 先執行++x (x變成6)，再算 6*2=12
    printf("++x * 2 = %d, x = %d\n", result5, x);  // 輸出: 12, 6
    
    int y = 5;
    int result6 = y++ * 2;  // 先算 y*2=10，再執行y++ (y變成6)
    printf("y++ * 2 = %d, y = %d\n", result6, y);  // 輸出: 10, 6
    
    return 0;
}
```

### 重要提醒
- 當不確定優先順序時，建議使用括號 `()` 來明確指定運算順序
- 括號具有最高優先順序，可以改變預設的運算順序
- 相同優先順序的運算子會根據結合性來決定運算順序

```c
//mathop.c
//讓使用者輸入被除數(整數)及除數(整數，不可以是零)，程式會顯示兩數相除的商及餘數。
#include <stdio.h>

int main() {
	int n=0,m=0;
	printf("請輸入被除數(整數):");
	scanf("%d", &n);
	printf("請輸入除數(整數,不可以為0):");
	scanf("%d", &m);

	printf("商:%d餘數:%d\n", n/m, n%m);
	return 0;
}

```

```
*question plus_s.c 計算使用者輸入的2個任意數，程式會顯示2數相加的總和。

顯示=======
請輸入第一個數值:45.67
請輸入第二個數值:67.47
兩個數的和是xxx.xx

```

**[解題]**

```c
/*
*question plus_s.c 計算使用者輸入的2個任意數，程式會顯示2數相加的總和。

顯示=======
請輸入第一個數值:45.67
請輸入第二個數值:67.47
兩個數的和是xxx.xx

*/


#include <stdio.h>
int main() {
  float n = 0, m = 0;
  printf("請輸入第一個數值:");
  scanf("%f", &n);
  printf("請輸入第二個數值:");
  scanf("%f", &m);
  printf("兩個數的和是%f", n + m);
  return 0;
}
```
---



```c
//遞增
#include <stdio.h>
int main() {
	int n = 0;
	++n;
	printf("n=%d\n", n);

	int i = 0;
	printf("i=%d\n", i++);
	printf("i=%d\n", i);

	int j = 0;
	printf("j=%d\n", ++j);
	printf("j=%d\n", j);
	return 0;
}
```

```c
//前置遞增
#include <stdio.h>
int main() {
	int x = 1;
	int y = ++x;
	//x = x + 1;
	//y = x;
	printf("x = %d y = %d\n", x, y);

	//後置遞增
	int m = 1;
	int n = m++;
	//n = m;
	//m = m + 1
	printf("m = %d n = %d\n", m, n);
	return 0;
}
```

```c
#include <stdio.h>

int main() {
	int x = 1;
	int y = ++x;
	printf("x=%d, y=%d\n",x,y);

	x = 1;
	y = x++;
	printf("x=%d, y=%d\n",x,y);
	return 0;
}
```

## 比較運算子
a| 運算子 | 意義 
-|---|--- 
a|== | 內容相等 
a|!= | 內容不相等 
a|> | 大於 
a|< | 小於 
a|>= | 大於等於 
a|<= | 小於等於 

```c
#include <stdio.h>

int main() {
	//比較運算子
	int a = 2, b = 2;
	printf("a==b %d\n", (a==b));

	//
	printf("not 運算子:%d\n", !0);

	int x = 10, y = 10, z = 20;
	printf("x=10同時y=10嗎?===>%d\n", (x==10 && y==10));
	printf("x=10同時z=10嗎?===>%d\n", (x==10 && z==10));

	printf("x=10或者y=10嗎?====>%d\n", (x==10 || y==10));
	printf("x=10或者z=10嗎?====>%d\n", (x==10 || z==10));
	return 0;
}
```

## 邏輯運算子 
| ! | not |
|:--|:--|
| && | and |
| \|\| | or |

## 複合指定運算子
 運算子 | 意義 
---|--- 
+= | 加等於 
-= | 減等於 
*= | 乘等於 
/= | 除等於
%= | 餘等於 

```c
// Name        : complex.c

//請使用者輸入一個任意數，程式會顯示此數的平方值及立方值
#include <stdio.h>

int main() {
	float num,result;
	printf("請輸入任意數:");
	scanf("%f", &num);
	result = num;
	result *= num;
	printf("此數的平方是:%f\n", result);
	result *= num;
	printf("此數的立方是:%f\n", result);
	return 0;
}
```

```
*question
complex_s
請以(複合指定運算子)設計程式,讓用者輸入三個任意數，程式會顯示3數相加的總和(float)


顯示:
請輸入第一個數:87.9
請輸入第二個數:45
請輸入等三個數:87.5
三個數的總和為:220.4
```

**[解題]**

```c
//請以(複合指定運算子)設計程式,讓用者輸入三個任意數，程式會顯示3數相加的總和(float)
#include <stdio.h>

int main() {
  float num, result=0;
  printf("請輸入第一個數:");
  scanf("%f", &num);
  result += num;
  printf("請輸入第二個數:");
  scanf("%f", &num);
  result += num;
  printf("請輸入等三個數:");
  scanf("%f", &num);
  result += num;
  printf("三個數的總和為:%f", result);
  return 0;
}
```

---
## sizeof型別運算子
```c
int a = sizeof(char);   // a = 1
int b = sizeof(double); // b = 8
int c = sizeof(a);      // c = 4
int d = sizeof(a+b);    // d = 4
```

## 三元運算式
```c
語法:
條件判斷 ? 程式碼1 : 程式碼2 ;

// Name        : triop.c
//讓使用者輸入三個任意數，程式會顯示三數中的最大數。
#include <stdio.h>

int main() {
	float in1, in2, in3, max;
	printf("請輸入第一個數:");
	scanf("%f", &in1);

	printf("請輸入第二個數:");
	scanf("%f", &in2);

	max = in1 > in2 ? in1 : in2;

	printf("請輸入第三個數:");

	scanf("%f", &in3);

	max = max > in3 ? max : in3;

	printf("輸入三個數中最大的數為:%f\n", max);
	return 0;
}

```

```
*question triop_s
讓使用者輸入國文成績,程式會顯示該成績是否及格(請使用3元運算式). 

顯示:
請輸入國文成績:80
成績及格(成績不及格)
```

**[解題]**

```c
/*
*question triop_s
讓使用者輸入國文成績,程式會顯示該成績是否及格(請使用3元運算式). 
*/


#include <stdio.h>

int main() {
  int chinese;
  const char *result;
  printf("請輸入國文成績:");
  scanf("%d", &chinese);
  result = chinese >= 60 ? "成績及格" : "成績不及格";
  printf("%s", result);
  return 0;
}
```
---

### 數學算式轉換電腦運算

```c
// Name        : ladder.c
//讓使用者輸入梯形的上底、下底及高，程式會計算梯形的面積(上底加下底乘以高除以2)

#include <stdio.h>

int main() {
	float top, bottom, height, area;
	printf("請輸入梯形的上底(公分):");
	scanf("%f", &top);

	printf("請輸入梯形的下底(公分):");
	scanf("%f", &bottom);

	printf("請輸入梯形的高(公分):");
	scanf("%f", &height);

	area = (top + bottom) * height /2;
	printf("梯形的面積:%f平方公分\n", area);
	return 0;
}
```

```c
*question circle_s.c
讓使用者輸入圓柱體的半徑及高，程式會計算圓柱體的體積(圓柱體體積的公式為「圓週率乘以半徑平方再乘以高)。

顯示========
請輸入圓柱體的半徑(公分):10
請輸入圓柱體的高(公分):5
圓柱體的體積:xxxx立方公分
```

**[解題]**

```c
/*
讓使用者輸入圓柱體的半徑及高，程式會計算圓柱體的體積(圓柱體體積的公式為「圓週率乘以半徑平方再乘以高)。

顯示========
請輸入圓柱體的半徑(公分):10
請輸入圓柱體的高(公分):5
圓柱體的體積:xxxx立方公分

*/


#include <stdio.h>

int main() {
    float radius;
    float height;
    const float PI = 3.14159;
    printf("請輸入圓柱體的半徑(公分):");
    scanf("%f", &radius);
    printf("請輸入圓柱體的高(公分):");
    scanf("%f", &height);
    float area = radius * radius * PI * height;
    printf("圓柱體的體積:%f立方公分", area);
    return 0;
}
```

---

```c
#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main() {
  int opposite_side, hypotenuse;
  double radian, degree;
  printf("請輸入對邊:");
  scanf("%d", &opposite_side);
  printf("請輸入斜邊:");
  scanf("%d", &hypotenuse);
  radian = asin(opposite_side / (double)hypotenuse);
  degree = radian * 180 / PI;

  printf("對邊是:%d\n", opposite_side);
  printf("斜邊是:%d\n", hypotenuse);
  printf("弧度是:%f\n", radian);
  printf("直角三角形的角度是:%f\n", degree);
  return 0;
}
```
