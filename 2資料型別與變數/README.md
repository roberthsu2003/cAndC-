# 資料型別與變數

## 變數宣告與初始化

在C/C++中，變數的宣告格式如下：

```cpp
資料型別 變數名稱 [= 初始值];
```

### 範例

```cpp
// 未初始化
int intA;
char a;

// 已初始化
int intB = 100;
char b = 's';
float pi = 3.14;
```

> **專業說明**：
> 變數宣告時，建議養成初始化的習慣，以避免未定義行為（undefined behavior）。

---

## 變數命名規則

- 第一個字元必須為英文字母或底線（_）
- 其餘字元可為英文字母、數字或底線
- 不可包含特殊符號或空白
- 不可使用關鍵字（如 int, float, if 等）

### 範例

```cpp
int score1;      // 合法
float _average;  // 合法
char name_2;     // 合法
int 2ndScore;    // 不合法，不能以數字開頭
```

---

## 數值型別

| 型別              | 記憶體大小 | 範圍                        | 輸出格式符號 |
|-------------------|------------|-----------------------------|-----------| 
| char              | 1 Byte     | -128 ~ 127                  | %c, %d    |
| unsigned char     | 1 Byte     | 0 ~ 255                     | %c, %u    |
| short             | 2 Byte     | -32768 ~ 32767              | %hd       |
| unsigned short    | 2 Byte     | 0 ~ 65535                   | %hu       |
| int               | 4 Byte     | -2147483648 ~ 2147483647    | %d        |
| unsigned int      | 4 Byte     | 0 ~ 4294967295              | %u        |
| long              | 4 Byte     | -2147483648 ~ 2147483647    | %ld       |
| long long         | 8 Byte     | -9223372036854775808 ~ 9223372036854775807 | %lld |
| unsigned long     | 4 Byte     | 0 ~ 4294967295              | %lu       |
| float             | 4 Byte     | 約6~7位有效數字             | %f, %e, %g |
| double            | 8 Byte     | 約15位有效數字              | %lf, %le, %lg |

> **備註**：不同編譯器或平台，型別大小可能略有差異。

### 格式符號說明

```c
#include <stdio.h>

int main() {
    char ch = 'A';
    int num = 123;
    unsigned int unum = 456;
    float pi = 3.14159f;
    double e = 2.71828;
    
    printf("字元: %c (ASCII: %d)\n", ch, ch);
    printf("整數: %d\n", num);
    printf("無符號整數: %u\n", unum);
    printf("浮點數: %f\n", pi);
    printf("浮點數(科學記號): %e\n", pi);
    printf("雙精度浮點數: %lf\n", e);
    
    return 0;
}
```

**輸出結果：**
```
字元: A (ASCII: 65)
整數: 123
無符號整數: 456
浮點數: 3.141590
浮點數(科學記號): 3.141590e+00
雙精度浮點數: 2.718280
```

---

## 特殊字元

| 字元 | 說明   |
|------|--------|
| \'   | 單引號 |
| \"   | 雙引號 |
| \n   | 換行   |
| \t   | Tab    |

### 範例

```cpp
printf("Hello\tWorld!\n"); // 輸出: Hello   World!（並換行）
```

---

## 字元型別

```cpp
char chrA = 'A';
char chrB = 65; // ASCII碼65為'A'
printf("%c %d\n", chrA, chrB); // 輸出: A A  (A的ASCII碼為65)
```

---

## 字串處理

### C語言字串（陣列）

```c
#include <stdio.h>
int main(void) {
    char name[100];
    printf("請輸入您的姓名: ");
    scanf("%s", name);
    printf("您的姓名是 %s\n", name);
    return 0;
}
```

### C語言字串（fgets，支援空白）

```c
#include <stdio.h>
int main(void) {
    char name[100];
    printf("請輸入您的姓名: ");
    fgets(name, 100, stdin);
    printf("您的姓名是 %s\n", name);
    return 0;
}
```

### C++字串

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "這是C++字串";
    const char* str2 = "這是C字元陣列";
    cout << str1 << endl;
    cout << str2 << endl;
    return 0;
}
```

---

## 布林型別（bool）

```cpp
bool isPassed = true;
bool isFailed = false;
cout << isPassed << endl; // 輸出: 1
cout << isFailed << endl; // 輸出: 0
```

> **說明**：  
> 在C++中，`true` 代表 1，`false` 代表 0。  
> 任何非零值皆視為 true，僅有 0 視為 false。

---

## 型別轉換

### 自動型別轉換

當運算式中包含不同型別時，編譯器會自動將較小型別提升為較大型別。

```cpp
double pi = 3.14159;
int radius = 5;
double area = pi * radius * radius; // radius 會自動轉為 double
```

### 指定式自動轉換

```cpp
int area;
area = pi * radius * radius; // 結果會自動轉為 int，可能造成精度損失
```

### 強制型別轉換

```cpp
int a = 123456;
short b;
b = (short)a; // 可能造成資料遺失
```

---

## 綜合範例：計算三科成績總分與平均

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned short chinese = 0, english = 0, math = 0;
    float average;
    cout << "請輸入國文成績(0~100): ";
    cin >> chinese;
    cout << "請輸入英文成績(0~100): ";
    cin >> english;
    cout << "請輸入數學成績(0~100): ";
    cin >> math;

    int sum = chinese + english + math;
    average = sum / 3.0;
    cout << "您的總分為: " << sum << " 分, 平均為 " << average << " 分\n";
    return 0;
}
```

---

## 常數宣告

### 使用 `#define`

```cpp
#define PI 3.14159
```

### 使用 `const`

```cpp
const double PI = 3.14159;
```

### 範例：計算圓面積

```cpp
#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
    double radius;
    cout << "請輸入圓半徑: ";
    cin >> radius;
    cout << "半徑 " << radius << " 的圓面積為 " << radius * radius * PI << endl;
    return 0;
}
```



