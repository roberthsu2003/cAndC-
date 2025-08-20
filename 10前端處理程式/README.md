# 前端處理程式 (Preprocessor)

## 目錄
- [概述](#概述)
- [列舉 (Enumeration)](#列舉-enumeration)
  - [基本列舉語法](#基本列舉語法)
  - [使用 typedef 簡化](#使用-typedef-簡化)
  - [指定列舉值](#指定列舉值)
  - [列舉實用範例](#列舉實用範例)
- [巨集定義 (#define)](#巨集定義-define)
  - [常數巨集](#常數巨集)
  - [函數型巨集](#函數型巨集)
  - [巨集使用注意事項](#巨集使用注意事項)
- [條件編譯](#條件編譯)
  - [#ifdef / #ifndef](#ifdef--ifndef)
  - [#undef](#undef)
  - [跨平台編譯範例](#跨平台編譯範例)
- [型別定義 (typedef)](#型別定義-typedef)
- [實用範例](#實用範例)
- [最佳實踐](#最佳實踐)

---

## 概述

前端處理程式 (Preprocessor) 是在編譯之前執行的程式，主要功能包括：
- 巨集展開 (#define)
- 檔案包含 (#include)
- 條件編譯 (#ifdef, #ifndef, #if)
- 型別定義 (typedef)
- 列舉定義 (enum)

---

## 列舉 (Enumeration)

列舉是一種複合型別，用於宣告僅有少數值的型別，如星期、月份、狀態等。

### 基本列舉語法

```c
// 基本方向列舉
enum direction {
    North,    // 預設值 0
    South,    // 預設值 1
    East,     // 預設值 2
    West      // 預設值 3
};

int main(void) {
    enum direction dest = East;
    printf("方向值: %d\n", dest);  // 輸出: 2
    return 0;
}
```

### 使用 typedef 簡化

```c
// 使用 typedef 簡化型別名稱
typedef enum direction Direction;

enum direction {
    North,
    South,
    East,
    West
};

int main(void) {
    Direction dest = East;
    printf("選擇的方向: %d\n", dest);
    return 0;
}
```

### 指定列舉值

```c
// 自訂列舉值
enum DAY {
    saturday,       // 0
    sunday = 0,     // 明確指定為 0
    monday,         // 1
    tuesday,        // 2
    wednesday,      // 3
    thursday,       // 4
    friday          // 5
};

int main(void) {
    enum DAY today = wednesday;
    printf("今天是第 %d 天\n", today);  // 輸出: 3
    return 0;
}
```

### 列舉實用範例

```c
// 學生成績等級
#include <stdio.h>

typedef enum {
    FAIL = 0,     // 不及格
    PASS = 60,    // 及格
    GOOD = 70,    // 良好
    EXCELLENT = 90 // 優秀
} Grade;

typedef enum {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Weekday;

int main() {
    Grade studentGrade = GOOD;
    Weekday today = FRIDAY;
    
    printf("學生成績等級: %d\n", studentGrade);
    printf("今天是星期: %d\n", today);
    
    // 使用列舉進行條件判斷
    if (studentGrade >= PASS) {
        printf("學生及格了！\n");
    }
    
    return 0;
}
```

---

## 巨集定義 (#define)

### 常數巨集

```c++
// 基本常數定義
#include <iostream>
using namespace std;

#define PI 3.14159
#define RATE 32.78
#define MAX_SIZE 100

int main() {
    double radius = 5.0;
    double area = PI * radius * radius;
    cout << "圓面積: " << area << endl;
    
    double us, nt;
    cout << "請輸入您有多少美金: ";
    cin >> us;
    nt = us * RATE;
    cout << "您有 " << nt << " 台幣" << endl;
    
    return 0;
}
```

### 函數型巨集

```c++
#include <iostream>
using namespace std;

// 函數型巨集 - 注意括號的重要性
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) <= (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
    int s, result;
    cout << "請輸入數字: ";
    cin >> s;
    
    result = SQUARE(s);
    cout << s << " 的平方為: " << result << endl;
    
    result = SQUARE(s + 1);
    cout << s + 1 << " 的平方為: " << result << endl;
    
    // 測試其他巨集
    int a = 10, b = 20;
    cout << "MAX(" << a << ", " << b << ") = " << MAX(a, b) << endl;
    cout << "MIN(" << a << ", " << b << ") = " << MIN(a, b) << endl;
    cout << "ABS(-15) = " << ABS(-15) << endl;
    
    return 0;
}
```

### 巨集使用注意事項

```c++
// 錯誤的巨集定義
#define WRONG_SQUARE(x) x * x

// 正確的巨集定義
#define CORRECT_SQUARE(x) ((x) * (x))

int main() {
    int result1 = WRONG_SQUARE(3 + 2);    // 展開為: 3 + 2 * 3 + 2 = 11
    int result2 = CORRECT_SQUARE(3 + 2);  // 展開為: ((3 + 2) * (3 + 2)) = 25
    
    cout << "錯誤結果: " << result1 << endl;  // 11
    cout << "正確結果: " << result2 << endl;  // 25
    
    return 0;
}
```

---

## 條件編譯

### #ifdef / #ifndef

```c++
#include <iostream>
using namespace std;

// 定義編譯條件
#define DEBUG_MODE
#define WINDOWS_OS

#ifdef DEBUG_MODE
    #define LOG(msg) cout << "[DEBUG] " << msg << endl
#else
    #define LOG(msg) // 空巨集，不輸出
#endif

#ifdef WINDOWS_OS
    #define OS_NAME "Windows 10"
#elif defined(MAC_OS)
    #define OS_NAME "macOS"
#else
    #define OS_NAME "Linux"
#endif

int main() {
    LOG("程式開始執行");
    cout << "作業系統: " << OS_NAME << endl;
    LOG("程式執行完畢");
    return 0;
}
```

### #undef

```c++
#include <iostream>
using namespace std;

#define TEMP_VALUE 100
cout << "定義後: " << TEMP_VALUE << endl;

#undef TEMP_VALUE  // 取消定義

// #define TEMP_VALUE 200  // 重新定義
// cout << "重新定義後: " << TEMP_VALUE << endl;

int main() {
    #ifdef TEMP_VALUE
        cout << "TEMP_VALUE 已定義" << endl;
    #else
        cout << "TEMP_VALUE 未定義" << endl;
    #endif
    
    return 0;
}
```

### 跨平台編譯範例

```c++
#include <iostream>
using namespace std;

// 根據編譯器自動偵測平台
#ifdef _WIN32
    #define PLATFORM "Windows"
    #define CLEAR_SCREEN "cls"
#elif defined(__APPLE__)
    #define PLATFORM "macOS"
    #define CLEAR_SCREEN "clear"
#elif defined(__linux__)
    #define PLATFORM "Linux"
    #define CLEAR_SCREEN "clear"
#else
    #define PLATFORM "Unknown"
    #define CLEAR_SCREEN "echo"
#endif

int main() {
    cout << "目前平台: " << PLATFORM << endl;
    cout << "清除螢幕指令: " << CLEAR_SCREEN << endl;
    
    // 使用系統指令清除螢幕
    system(CLEAR_SCREEN);
    
    return 0;
}
```

---

## 型別定義 (typedef)

```c++
#include <iostream>
using namespace std;

// 基本型別重新命名
typedef int INTEGER;
typedef float REAL;
typedef char* STRING;
typedef int* POINTER;

// 複雜型別定義
typedef struct {
    int x, y;
} Point;

typedef struct {
    string name;
    int age;
    float height;
} Person;

int main() {
    // 使用重新定義的型別
    INTEGER x = 100, y = 200;
    REAL pi = 3.14159f;
    POINTER ptr = &x;
    
    cout << x << " + " << y << " = " << x + y << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "PI = " << pi << endl;
    
    // 使用結構型別
    Point p1 = {10, 20};
    Person person = {"張三", 25, 175.5f};
    
    cout << "點座標: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "姓名: " << person.name << ", 年齡: " << person.age << endl;
    
    return 0;
}
```

---

## 實用範例

### 範例1: 數學運算巨集庫

```c++
#include <iostream>
using namespace std;

// 數學運算巨集
#define PI 3.14159265359
#define E 2.71828182846

#define CIRCLE_AREA(r) (PI * (r) * (r))
#define CIRCLE_CIRCUMFERENCE(r) (2 * PI * (r))
#define RECTANGLE_AREA(w, h) ((w) * (h))
#define TRIANGLE_AREA(b, h) (0.5 * (b) * (h))
#define CELSIUS_TO_FAHRENHEIT(c) (((c) * 9.0 / 5.0) + 32)
#define FAHRENHEIT_TO_CELSIUS(f) (((f) - 32) * 5.0 / 9.0)

int main() {
    double radius = 5.0;
    double width = 10.0, height = 8.0;
    double celsius = 25.0;
    
    cout << "半徑 " << radius << " 的圓:" << endl;
    cout << "  面積: " << CIRCLE_AREA(radius) << endl;
    cout << "  周長: " << CIRCLE_CIRCUMFERENCE(radius) << endl;
    
    cout << "\n矩形 " << width << "x" << height << ":" << endl;
    cout << "  面積: " << RECTANGLE_AREA(width, height) << endl;
    
    cout << "\n溫度轉換:" << endl;
    cout << celsius << "°C = " << CELSIUS_TO_FAHRENHEIT(celsius) << "°F" << endl;
    
    return 0;
}
```

### 範例2: 除錯系統

```c++
#include <iostream>
#include <string>
using namespace std;

// 除錯模式控制
#define DEBUG_LEVEL 2

#if DEBUG_LEVEL >= 1
    #define DEBUG_INFO(msg) cout << "[INFO] " << msg << endl
#else
    #define DEBUG_INFO(msg)
#endif

#if DEBUG_LEVEL >= 2
    #define DEBUG_WARNING(msg) cout << "[WARNING] " << msg << endl
#else
    #define DEBUG_WARNING(msg)
#endif

#if DEBUG_LEVEL >= 3
    #define DEBUG_ERROR(msg) cout << "[ERROR] " << msg << endl
#else
    #define DEBUG_ERROR(msg)
#endif

// 函數執行追蹤
#define FUNCTION_ENTER(func) DEBUG_INFO("進入函數: " #func)
#define FUNCTION_EXIT(func) DEBUG_INFO("離開函數: " #func)

void processData(int data) {
    FUNCTION_ENTER(processData);
    
    if (data < 0) {
        DEBUG_WARNING("資料值為負數: " + to_string(data));
    }
    
    if (data > 100) {
        DEBUG_ERROR("資料值超出範圍: " + to_string(data));
        FUNCTION_EXIT(processData);
        return;
    }
    
    DEBUG_INFO("處理資料: " + to_string(data));
    
    FUNCTION_EXIT(processData);
}

int main() {
    DEBUG_INFO("程式開始執行");
    
    processData(50);
    processData(-10);
    processData(150);
    
    DEBUG_INFO("程式執行完畢");
    return 0;
}
```

---

## 最佳實踐

### 1. 巨集命名規範
- 使用全大寫字母
- 用底線分隔單字
- 避免與標準函式庫衝突

### 2. 括號使用
- 巨集參數和整個表達式都要加括號
- 避免運算子優先順序問題

### 3. 條件編譯
- 用於跨平台相容性
- 除錯模式控制
- 功能開關

### 4. typedef 使用
- 簡化複雜型別名稱
- 提高程式碼可讀性
- 便於型別維護

### 5. 注意事項
- 巨集不進行型別檢查
- 可能造成程式碼膨脹
- 除錯時較難追蹤
- 適度使用，不要濫用


