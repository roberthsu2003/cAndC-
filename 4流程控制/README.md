# 流程控制 (Control Flow)

## 目錄
1. [流程控制的基本概念](#流程控制的基本概念)
2. [條件判斷](#條件判斷)
   - [if 語句](#if-語句)
   - [if-else 語句](#if-else-語句)
   - [if-else if-else 語句](#if-else-if-else-語句)
   - [巢狀 if 語句](#巢狀-if-語句)
3. [switch-case 語句](#switch-case-語句)
4. [三元運算子](#三元運算子)
5. [邏輯運算子](#邏輯運算子)
6. [實用範例](#實用範例)
7. [練習題](#練習題)

## 流程控制的基本概念

流程控制是程式設計中非常重要的概念，它決定了程式執行的順序和方向。透過條件判斷，我們可以讓程式根據不同的情況執行不同的程式碼。

### 流程控制的分類
1. **條件判斷**：根據條件決定執行哪一段程式碼
   - `if` 語句
   - `if-else` 語句
   - `switch-case` 語句
2. **迴圈控制**：重複執行特定的程式碼區塊
   - `for` 迴圈
   - `while` 迴圈
   - `do-while` 迴圈

---

## 條件判斷

### if 語句

#### 基本語法
```cpp
if (條件式) {
    // 條件成立時執行的程式碼
}
```

#### 範例：成績加分系統
```cpp
#include <iostream>
using namespace std;

int main() {
    int score;
    bool hasBonus;
    
    cout << "請輸入學生的分數: ";
    cin >> score;
    cout << "學生符合加分條件嗎? (1=是, 0=否): ";
    cin >> hasBonus;
    
    if (hasBonus) {
        score = score * 1.05;  // 加5%
        if (score > 300) {
            score = 300;  // 最高分限制
        }
    }
    
    cout << "學生最終分數是: " << score << endl;
    return 0;
}
```

### if-else 語句

#### 基本語法
```cpp
if (條件式) {
    // 條件成立時執行的程式碼
} else {
    // 條件不成立時執行的程式碼
}
```

#### 範例 1：奇偶數判斷
```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "請輸入一個數字: ";
    cin >> number;
    
    if (number % 2 == 0) {
        cout << number << " 是偶數" << endl;
    } else {
        cout << number << " 是奇數" << endl;
    }
    
    return 0;
}
```

#### 範例 2：密碼驗證
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    string correctPassword = "1234";
    
    cout << "請輸入密碼: ";
    cin >> password;
    
    if (password == correctPassword) {
        cout << "密碼正確！歡迎光臨！" << endl;
    } else {
        cout << "密碼錯誤！請重新輸入！" << endl;
    }
    
    return 0;
}
```

#### 範例 3：成績及格判斷
```cpp
#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "請輸入成績: ";
    cin >> score;
    
    if (score >= 60) {
        cout << "及格！" << endl;
    } else {
        cout << "不及格！" << endl;
    }
    
    return 0;
}
```

### if-else if-else 語句

#### 基本語法
```cpp
if (條件式1) {
    // 條件1成立時執行的程式碼
} else if (條件式2) {
    // 條件2成立時執行的程式碼
} else if (條件式3) {
    // 條件3成立時執行的程式碼
} else {
    // 所有條件都不成立時執行的程式碼
}
```

#### 範例 1：成績等級判斷
```cpp
#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "請輸入成績 (0-100): ";
    cin >> score;
    
    if (score >= 90) {
        cout << "優等" << endl;
    } else if (score >= 80) {
        cout << "甲等" << endl;
    } else if (score >= 70) {
        cout << "乙等" << endl;
    } else if (score >= 60) {
        cout << "丙等" << endl;
    } else {
        cout << "丁等" << endl;
    }
    
    return 0;
}
```

#### 範例 2：購物折扣計算
```cpp
#include <iostream>
using namespace std;

int main() {
    int purchaseAmount;
    int finalAmount;
    
    cout << "請輸入購買金額: ";
    cin >> purchaseAmount;
    
    if (purchaseAmount >= 100000) {
        finalAmount = purchaseAmount * 0.8;  // 8折
    } else if (purchaseAmount >= 50000) {
        finalAmount = purchaseAmount * 0.85; // 85折
    } else if (purchaseAmount >= 30000) {
        finalAmount = purchaseAmount * 0.9;  // 9折
    } else if (purchaseAmount >= 10000) {
        finalAmount = purchaseAmount * 0.95; // 95折
    } else {
        finalAmount = purchaseAmount;        // 無折扣
    }
    
    cout << "實付金額是: " << finalAmount << " 元" << endl;
    return 0;
}
```

#### 範例 3：員工職務分配
```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    
    cout << "請輸入您的年齡: ";
    cin >> age;
    
    if (age >= 22 && age <= 30) {
        cout << "您的職務是: 外勤業務員" << endl;
    } else if (age >= 31 && age <= 45) {
        cout << "您的職務是: 內勤文書" << endl;
    } else if (age >= 46 && age <= 55) {
        cout << "您的職務是: 倉庫管理員" << endl;
    } else if (age >= 56) {
        cout << "強迫退休" << endl;
    } else {
        cout << "年齡不符合工作條件" << endl;
    }
    
    return 0;
}
```

### 巢狀 if 語句

巢狀 if 語句是指在 if 語句內部再包含其他的 if 語句。

#### 範例 1：獎金計算（巢狀方式）
```cpp
#include <iostream>
using namespace std;

int main() {
    int chinese, math;
    int bonus = 0;
    
    cout << "請輸入國文成績和數學成績 (國文,數學): ";
    cin >> chinese >> math;
    
    if (chinese == 100) {
        if (math == 100) {
            bonus = 1000;  // 國文100且數學100
        } else {
            bonus = 500;   // 只有國文100
        }
    } else {
        if (math == 100) {
            bonus = 500;   // 只有數學100
        } else {
            bonus = 0;     // 都沒有100
        }
    }
    
    cout << "獎金是: " << bonus << " 元" << endl;
    return 0;
}
```

#### 範例 2：正負數與奇偶數判斷
```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "請輸入數字: ";
    cin >> number;
    
    if (number < 0) {
        if (number % 2 == 0) {
            cout << "您輸入的 " << number << " 是負偶數" << endl;
        } else {
            cout << "您輸入的 " << number << " 是負奇數" << endl;
        }
    } else {
        if (number % 2 == 0) {
            cout << "您輸入的 " << number << " 是正偶數" << endl;
        } else {
            cout << "您輸入的 " << number << " 是正奇數" << endl;
        }
    }
    
    return 0;
}
```

---

## switch-case 語句

switch-case 語句適用於多個固定值的比較，比 if-else if 更簡潔。

#### 基本語法
```cpp
switch (表示式) {
    case 值1:
        程式區塊1;
        break;
    case 值2:
        程式區塊2;
        break;
    case 值3:
        程式區塊3;
        break;
    default:
        預設程式區塊;
        break;
}
```

#### 範例 1：簡單計算機
```cpp
#include <iostream>
using namespace std;

int main() {
    char operator_;
    int num1 = 20, num2 = 4;
    
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "請輸入要執行的運算 (+ - * /): ";
    cin >> operator_;
    
    switch (operator_) {
        case '+':
            cout << "num1 + num2 = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "num1 - num2 = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "num1 * num2 = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "num1 / num2 = " << num1 / num2 << endl;
            } else {
                cout << "除數不能為零！" << endl;
            }
            break;
        default:
            cout << "無法執行運算！" << endl;
            break;
    }
    
    return 0;
}
```

#### 範例 2：季節判斷
```cpp
#include <iostream>
using namespace std;

int main() {
    int season;
    
    cout << "請輸入現在是第幾季 (1-4): ";
    cin >> season;
    
    switch (season) {
        case 1:
            cout << "現在是春天！" << endl;
            break;
        case 2:
            cout << "現在是夏天！" << endl;
            break;
        case 3:
            cout << "現在是秋天！" << endl;
            break;
        case 4:
            cout << "現在是冬天！" << endl;
            break;
        default:
            cout << "無效的季節代碼！" << endl;
            break;
    }
    
    return 0;
}
```

#### 範例 3：問候語翻譯
```cpp
#include <iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "=== 問候語翻譯 ===" << endl;
    cout << "1. 您好嗎？" << endl;
    cout << "2. 晚安" << endl;
    cout << "3. 早安" << endl;
    cout << "請選擇中文的選項 (1-3): ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "英文是: How are you?" << endl;
            break;
        case 2:
            cout << "英文是: Good evening" << endl;
            break;
        case 3:
            cout << "英文是: Good morning" << endl;
            break;
        default:
            cout << "無效的選項！" << endl;
            break;
    }
    
    return 0;
}
```

---

## 三元運算子

三元運算子是一種簡化的條件判斷語法。

#### 基本語法
```cpp
條件式 ? 值1 : 值2
```

#### 範例：奇偶數判斷
```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "請輸入任意整數: ";
    cin >> number;
    
    string result = (number % 2 == 0) ? "偶數" : "奇數";
    cout << "您這個數是: " << result << endl;
    
    return 0;
}
```

---

## 邏輯運算子

邏輯運算子用於組合多個條件。

### 邏輯運算子一覽
- `&&`：邏輯與（AND）
- `||`：邏輯或（OR）
- `!`：邏輯非（NOT）

#### 範例 1：獎金計算（邏輯運算子方式）
```cpp
#include <iostream>
using namespace std;

int main() {
    int chinese, math;
    int bonus = 0;
    
    cout << "請輸入國文成績和數學成績 (國文,數學): ";
    cin >> chinese >> math;
    
    if (chinese == 100 && math == 100) {
        bonus = 1000;  // 國文100且數學100
    } else if (chinese == 100 || math == 100) {
        bonus = 500;   // 國文100或數學100
    } else {
        bonus = 0;     // 都沒有100
    }
    
    cout << "獎金是: " << bonus << " 元" << endl;
    return 0;
}
```

#### 範例 2：閏年判斷
```cpp
#include <iostream>
using namespace std;

int main() {
    int year;
    
    cout << "請輸入年份: ";
    cin >> year;
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " 是閏年" << endl;
    } else {
        cout << year << " 不是閏年" << endl;
    }
    
    return 0;
}
```

#### 範例 3：三個數的最小值
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "請輸入三個數字: ";
    cin >> a >> b >> c;
    
    if (a < b && a < c) {
        cout << "最小值是: " << a << endl;
    } else if (b < a && b < c) {
        cout << "最小值是: " << b << endl;
    } else {
        cout << "最小值是: " << c << endl;
    }
    
    return 0;
}
```

---

## 實用範例

### 範例 1：三角形類型判斷
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double side1, side2, hypotenuse;
    
    cout << "請輸入第一邊的邊長: ";
    cin >> side1;
    cout << "請輸入第二邊的邊長: ";
    cin >> side2;
    cout << "請輸入斜邊的邊長: ";
    cin >> hypotenuse;
    
    // 檢查是否為三角形
    if (side1 + side2 <= hypotenuse) {
        cout << "此三邊無法構成三角形" << endl;
        return 0;
    }
    
    // 計算兩邊平方和與斜邊平方
    double sumOfSquares = pow(side1, 2) + pow(side2, 2);
    double hypotenuseSquare = pow(hypotenuse, 2);
    
    if (abs(sumOfSquares - hypotenuseSquare) < 0.001) {
        cout << "此三角形為直角三角形" << endl;
    } else if (sumOfSquares > hypotenuseSquare) {
        cout << "此三角形為銳角三角形" << endl;
    } else {
        cout << "此三角形為鈍角三角形" << endl;
    }
    
    return 0;
}
```

### 範例 2：綜合所得稅計算
```cpp
#include <iostream>
using namespace std;

int main() {
    int income;
    double taxRate;
    int progressiveDeduction;
    
    cout << "請輸入綜合所得淨額: ";
    cin >> income;
    
    if (income <= 540000) {
        taxRate = 0.05;
        progressiveDeduction = 0;
    } else if (income <= 1200000) {
        taxRate = 0.10;
        progressiveDeduction = 36400;
    } else if (income <= 2420000) {
        taxRate = 0.20;
        progressiveDeduction = 130000;
    } else if (income <= 4530000) {
        taxRate = 0.30;
        progressiveDeduction = 365000;
    } else {
        taxRate = 0.40;
        progressiveDeduction = 805000;
    }
    
    int taxAmount = income * taxRate;
    int finalTax = taxAmount - progressiveDeduction;
    
    cout << "綜合所得淨額: " << income << " 元" << endl;
    cout << "稅率: " << (taxRate * 100) << "%" << endl;
    cout << "--------------------" << endl;
    cout << "稅金: " << taxAmount << " 元" << endl;
    cout << "累進差額: " << progressiveDeduction << " 元" << endl;
    cout << "--------------------" << endl;
    cout << "今年應納稅額: " << finalTax << " 元" << endl;
    
    return 0;
}
```

### 範例 3：停車費計算
```cpp
#include <iostream>
using namespace std;

int main() {
    int inHour, inMin, outHour, outMin;
    
    cout << "請輸入進場時間 (時 分): ";
    cin >> inHour >> inMin;
    cout << "請輸入出場時間 (時 分): ";
    cin >> outHour >> outMin;
    
    // 計算停車總分鐘數
    int totalMinutes = (outHour - inHour) * 60 + (outMin - inMin);
    int halfHourSegments = totalMinutes / 30;
    
    int parkingFee = 0;
    
    if (totalMinutes <= 120) {
        // 2小時內，每半小時30元
        parkingFee = halfHourSegments * 30;
    } else if (totalMinutes <= 240) {
        // 2-4小時，前2小時每半小時30元，之後每半小時40元
        parkingFee = 4 * 30 + (halfHourSegments - 4) * 40;
    } else {
        // 4小時以上，前2小時每半小時30元，2-4小時每半小時40元，之後每半小時60元
        parkingFee = 4 * 30 + 4 * 40 + (halfHourSegments - 8) * 60;
    }
    
    cout << "進場時間: " << inHour << ":" << inMin << endl;
    cout << "出場時間: " << outHour << ":" << outMin << endl;
    cout << "停車總分鐘數: " << totalMinutes << endl;
    cout << "停車費: " << parkingFee << " 元" << endl;
    
    return 0;
}
```

### 範例 4：會員等級與利率計算
```cpp
#include <iostream>
using namespace std;

int main() {
    int deposit;
    
    cout << "請輸入您的存款金額: ";
    cin >> deposit;
    
    int interestRate;
    string memberLevel;
    
    if (deposit >= 1000000) {
        interestRate = 4;
        memberLevel = "A級";
    } else if (deposit >= 500000) {
        interestRate = 2;
        memberLevel = "B級";
    } else {
        interestRate = 2;
        memberLevel = "C級";
    }
    
    cout << "您的利率是: " << interestRate << "%" << endl;
    cout << "會員等級是: " << memberLevel << " 會員" << endl;
    
    return 0;
}
```

---

## 練習題

### 練習 1：BMI 計算器
設計一個程式，計算使用者的 BMI 並判斷體重狀態：
- BMI < 18.5：體重過輕
- 18.5 ≤ BMI < 24：正常體重
- 24 ≤ BMI < 27：體重過重
- BMI ≥ 27：肥胖

### 練習 2：成績轉換器
設計一個程式，將百分制成績轉換為等級：
- 90-100：A
- 80-89：B
- 70-79：C
- 60-69：D
- 0-59：F

### 練習 3：簡單計算機
設計一個程式，可以進行加減乘除四則運算，並處理除零錯誤。

### 練習 4：日期驗證器
設計一個程式，驗證輸入的日期是否有效（考慮閏年）。

---

## 總結

1. **if 語句**：適用於單一條件判斷
2. **if-else 語句**：適用於二選一的情況
3. **if-else if-else 語句**：適用於多選一的情況
4. **switch-case 語句**：適用於固定值的多選一情況
5. **巢狀 if 語句**：適用於複雜的條件組合
6. **邏輯運算子**：用於組合多個條件
7. **三元運算子**：簡化的條件判斷語法


