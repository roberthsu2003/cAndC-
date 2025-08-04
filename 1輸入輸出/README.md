# C++ 輸入輸出 (Input/Output)

## 概述
C++ 提供了強大的輸入輸出功能，主要通過標準輸入輸出流 (Standard I/O Streams) 來實現。本節將詳細介紹 C++ 的輸入輸出機制，包括基本語法、格式化輸出、錯誤處理等進階概念。

### 開發環境設置
**DevC++ 下載位置**: [下載](https://sourceforge.net/projects/orwelldevcpp/)

---

## C++ 標準輸入輸出流

### 基本概念
C++ 使用流 (Stream) 的概念來處理輸入輸出：
- `cout`: 標準輸出流 (Standard Output Stream)
- `cin`: 標準輸入流 (Standard Input Stream)
- `cerr`: 標準錯誤流 (Standard Error Stream)
- `clog`: 標準日誌流 (Standard Log Stream)

### 基本語法
```cpp
#include <iostream>
using namespace std;
```

---

## 輸出 (Output) - cout

### 基本輸出語法
```cpp
cout << "要輸出的內容";
```

### 範例 1: 基本輸出
```cpp
// basic_output.cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    cout << "歡迎學習 C++ 程式設計" << endl;
    return 0;
}
```

### 範例 2: 變數輸出
```cpp
// variable_output.cpp
#include <iostream>
using namespace std;

int main() {
    int score = 95;
    string name = "張三";
    double average = 87.5;
    
    cout << "學生姓名: " << name << endl;
    cout << "考試分數: " << score << endl;
    cout << "平均分數: " << average << endl;
    
    return 0;
}
```

### 範例 3: 格式化輸出
```cpp
// formatted_output.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159265359;
    int number = 42;
    
    // 設定小數點位數
    cout << fixed << setprecision(2);
    cout << "圓周率 (保留2位小數): " << pi << endl;
    
    // 設定欄位寬度
    cout << setw(10) << "數字: " << setw(5) << number << endl;
    
    // 十六進位輸出
    cout << "十六進位: " << hex << number << endl;
    
    // 八進位輸出
    cout << "八進位: " << oct << number << endl;
    
    // 恢復十進位
    cout << dec;
    
    return 0;
}
```

---

## 輸入 (Input) - cin

### 基本輸入語法
```cpp
cin >> 變數名稱;
```

### 範例 1: 基本輸入
```cpp
// basic_input.cpp
#include <iostream>
using namespace std;

int main() {
    int englishScore = 60;
    cout << "請輸入您的英文分數: ";
    cin >> englishScore;
    cout << "Hello! 您的英文分數是: " << englishScore << endl;
    return 0;
}
```

### 範例 2: 字串輸入
```cpp
// string_input.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "請輸入中文姓名: ";
    cin >> name;
    cout << "Hello! " << name << endl;
    return 0;
}
```

### 範例 3: 多變數輸入
```cpp
// multiple_input.cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    string name;
    double height;
    
    cout << "請輸入姓名: ";
    cin >> name;
    
    cout << "請輸入年齡: ";
    cin >> age;
    
    cout << "請輸入身高 (公尺): ";
    cin >> height;
    
    cout << "\n=== 個人資料 ===" << endl;
    cout << "姓名: " << name << endl;
    cout << "年齡: " << age << " 歲" << endl;
    cout << "身高: " << height << " 公尺" << endl;
    
    return 0;
}
```

### 範例 4: 一行輸入多個值
```cpp
// line_input.cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "請輸入三個整數 (用空格分隔): ";
    cin >> a >> b >> c;
    
    cout << "您輸入的數字是: " << a << ", " << b << ", " << c << endl;
    cout << "總和: " << a + b + c << endl;
    cout << "平均值: " << (a + b + c) / 3.0 << endl;
    
    return 0;
}
```

---

## 進階輸入輸出技巧

### 範例 5: 輸入驗證
```cpp
// input_validation.cpp
#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "請輸入考試分數 (0-100): ";
    cin >> score;
    
    // 輸入驗證
    if (cin.fail()) {
        cout << "錯誤: 請輸入有效的數字!" << endl;
        cin.clear(); // 清除錯誤狀態
        cin.ignore(10000, '\n'); // 忽略錯誤輸入
        return 1;
    }
    
    if (score < 0 || score > 100) {
        cout << "錯誤: 分數必須在 0-100 之間!" << endl;
        return 1;
    }
    
    cout << "有效分數: " << score << endl;
    
    // 成績等級判斷
    if (score >= 90) cout << "等級: A" << endl;
    else if (score >= 80) cout << "等級: B" << endl;
    else if (score >= 70) cout << "等級: C" << endl;
    else if (score >= 60) cout << "等級: D" << endl;
    else cout << "等級: F" << endl;
    
    return 0;
}
```

### 範例 6: 字串處理
```cpp
// string_processing.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;
    
    cout << "請輸入姓氏: ";
    cin >> firstName;
    
    cout << "請輸入名字: ";
    cin >> lastName;
    
    string fullName = firstName + " " + lastName;
    cout << "全名: " << fullName << endl;
    cout << "姓名長度: " << fullName.length() << " 個字元" << endl;
    
    return 0;
}
```

---

## 實用範例

### 範例 7: 計算機程式
```cpp
// calculator.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    
    cout << "=== 簡易計算機 ===" << endl;
    cout << "請輸入第一個數字: ";
    cin >> num1;
    
    cout << "請輸入運算符號 (+, -, *, /): ";
    cin >> operation;
    
    cout << "請輸入第二個數字: ";
    cin >> num2;
    
    cout << fixed << setprecision(2);
    
    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "錯誤: 除數不能為零!" << endl;
            }
            break;
        default:
            cout << "錯誤: 無效的運算符號!" << endl;
    }
    
    return 0;
}
```

### 範例 8: 成績統計系統
```cpp
// grade_system.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int chinese, english, math;
    int total;
    double average;
    
    cout << "=== 成績統計系統 ===" << endl;
    cout << "請輸入國文分數: ";
    cin >> chinese;
    
    cout << "請輸入英文分數: ";
    cin >> english;
    
    cout << "請輸入數學分數: ";
    cin >> math;
    
    total = chinese + english + math;
    average = total / 3.0;
    
    cout << "\n=== 成績報告 ===" << endl;
    cout << "國文: " << chinese << " 分" << endl;
    cout << "英文: " << english << " 分" << endl;
    cout << "數學: " << math << " 分" << endl;
    cout << "總分: " << total << " 分" << endl;
    cout << fixed << setprecision(1);
    cout << "平均: " << average << " 分" << endl;
    
    // 成績等級
    if (average >= 90) cout << "等級: 優等" << endl;
    else if (average >= 80) cout << "等級: 甲等" << endl;
    else if (average >= 70) cout << "等級: 乙等" << endl;
    else if (average >= 60) cout << "等級: 丙等" << endl;
    else cout << "等級: 丁等" << endl;
    
    return 0;
}
```

---

## C 語言輸入輸出 (相容性)

### printf() 函數

#### 基本語法
```c
printf("字串\n");
```

#### 範例
```c
// print1.c
#include <stdio.h>

int main(void) {
    printf("Hello World!\n");  // \n 表示換行
    return 0;
}
```

### C 語言輸出控制符號

| 字串格式化 | 說明 | 範例 |
|:---------|:----|:----|
| %d | 按十進制整數實際長度輸出 | `printf("%d", 42);` |
| %ld | 輸出長整數 | `printf("%ld", 123456789L);` |
| %u | 輸出無符號整數 | `printf("%u", 42);` |
| %hhu | unsigned char | `printf("%hhu", 255);` |
| %c | 輸出字元 | `printf("%c", 'A');` |
| %f | 輸出實數(浮點數) | `printf("%f", 3.14);` |
| %lf | double | `printf("%lf", 3.14159);` |
| %o | 輸出八進位 | `printf("%o", 42);` |
| %s | 輸出字串 | `printf("%s", "Hello");` |
| %x | 輸出十六進位 | `printf("%x", 42);` |

### 格式化輸出範例
```c
// print2.c
#include <stdio.h>

int main(void) {
    int i = 10;
    printf("%d\n", i);  // %d 是字串格式符號，d 表示十進位，後面的 i 是輸出參數
    return 0;
}
```

### 進階格式化範例
```c
// advanced_formatting.c
#include <stdio.h>

int main(void) {
    char myChar = 100;
    printf("myChar: %d\n", myChar); 
    
    unsigned short myShort = 60000;
    printf("myShort: %d\n", myShort);
    
    int myInt = 210000000;
    printf("myInt: %d\n", myInt);
    
    long long myLong = 2100000000000000000LL;
    printf("myLong: %lld\n", myLong);
    
    float myFloat = 3.145;
    printf("myFloat: %.2f\n", myFloat);
    
    double myDouble = 35689.34567;
    printf("myDouble: %.4f\n", myDouble);
    
    return 0;
}
```

### 多變數輸出
```c
// print3.c
#include <stdio.h>

int main(void) {
    int i = 10;
    int j = 3;
    printf("%d %d\n", i, j);
    return 0;
}
```

### 格式化字串輸出
```c
// print4.c
#include <stdio.h>

int main(void) {
    int i = 10;
    int j = 3;
    printf("i = %d, j = %d\n", i, j);
    return 0;
}
```

### 進位制輸出
```c
// print5.c
#include <stdio.h>

int main(void) {
    int i = 47;
    printf("十進位: %d\n", i);   
    printf("十六進位 (小寫): %x\n", i);   
    printf("十六進位 (大寫): %X\n", i);   
    printf("十六進位 (帶前綴): %#x\n", i);   
    printf("八進位: %o\n", i);   
    return 0;
}
```

### 特殊字元輸出
```c
// special_chars.c
#include <stdio.h>

int main(void) {
    printf("%%d\n");    // 輸出 %d
    printf("\\\n");     // 輸出反斜線
    printf("\"\"\n");   // 輸出雙引號
    return 0;
}
```

### scanf() 函數

#### 基本語法
```c
scanf("格式字串", &變數);
```

#### 範例
```c
// scanf1.c
#include <stdio.h>

int main(void) {
    int a = 0, b = 0, c = 0, d = 0;
    
    scanf("%d", &a);  // 輸入整數並將值給變數 a
    scanf("%d", &b);  // 輸入整數並將值給變數 b
    printf("a + b = %d\n", a + b);  // 計算 a + b 並將值輸出
    
    scanf("%d %d", &c, &d);  // 輸入 2 個整數值中間用空格，並將值依序給變數 c 和 d
    printf("c * d = %d\n", c * d);  // 計算 c 和 d 相乘並輸出
    
    return 0;
}
```

#### 多種資料型別輸入
```c
// scanf2.c
#include <stdio.h>

int main(void) {
    char letter;
    int age;
    char url[30];
    float price;
    
    printf("請輸入字元: ");
    scanf("%c", &letter);
    
    printf("請輸入年齡: ");
    scanf("%d", &age);
    
    printf("請輸入字串: ");
    scanf("%s", url);
    
    printf("請輸入價格: ");
    scanf("%f", &price);
    
    printf("這是字元: %c\n", letter);
    printf("這是整數: %d\n", age);
    printf("這是字串: %s\n", url);
    printf("這是浮點數: %.2f\n", price);
    
    return 0;
}
```

---

## 實用練習題

### 練習題 1: 民國年份轉換
**題目**: 輸入出生「民國年份」後，求取對應「西元年份」及「現在年齡」。

**公式**:
- 西元年份 = 民國年份 + 1911
- 年齡 = 現在年份 - 西元年份

**顯示範例**:
```
出生民國年份: 69
對應西元年份: 1980，今年 39 歲
```

**解答**:
```c
// age.c
#include <stdio.h>

int main(void) {
    int year = 0;
    int currentYear = 2024;  // 更新為當前年份
    
    printf("出生民國年份: ");
    scanf("%d", &year);
    
    int westernYear = 1911 + year;
    int age = currentYear - westernYear;
    
    printf("對應西元年份: %d，今年 %d 歲\n", westernYear, age);
    
    return 0;
}
```

### 練習題 2: 學測成績計算
**題目**: 同步登錄「國文、英文、數學」學測成績，進行三科「總分、平均」計算報告。

**顯示範例**:
```
科目: 國文, 英文, 數學
請輸入: 92 85 73

--- 計算學測分數 ----
三科總分: 250
三科平均: 83.3
```

**解答**:
```c
// sumAve.c
#include <stdio.h>

int main(void) {
    int chinese, english, math;
    int sum = 0;
    float average = 0;
    
    printf("科目: 國文, 英文, 數學\n");
    printf("請輸入: ");
    scanf("%d %d %d", &chinese, &english, &math);
    
    sum = chinese + english + math;
    average = sum / 3.0;
    
    printf("\n--- 計算學測分數 ----\n");
    printf("三科總分: %d\n", sum);
    printf("三科平均: %.1f\n", average);
    
    return 0;
}
```

---

## 注意事項與最佳實踐

### 1. 輸入驗證
- 始終檢查輸入的有效性
- 使用 `cin.fail()` 檢查輸入錯誤
- 適當處理字串輸入的緩衝區問題

### 2. 格式化輸出
- 使用適當的精度控制
- 考慮欄位寬度對齊
- 選擇合適的進位制表示

### 3. 效能考量
- 避免不必要的格式化操作
- 合理使用 `endl` 和 `\n`
- 考慮使用 `printf` 進行複雜格式化

### 4. 可讀性
- 使用有意義的變數名稱
- 添加適當的註解
- 保持一致的程式碼風格

---

## 參考資源
- [C++ Standard Library Reference](https://en.cppreference.com/w/)
- [C Data Types](https://en.wikipedia.org/wiki/C_data_types)
- [C++ I/O Streams](https://en.cppreference.com/w/cpp/io)

