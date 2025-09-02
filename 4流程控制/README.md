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
```c
if (條件式) {
    // 條件成立時執行的程式碼
}
```

#### 範例：成績加分系統
```c
#include <stdio.h>

int main() {
    int score;
    int hasBonus;
    
    printf("請輸入學生的分數: ");
    scanf("%d", &score);
    printf("學生符合加分條件嗎? (1=是, 0=否): ");
    scanf("%d", &hasBonus);
    
    if (hasBonus) {
        score = score * 1.05;  // 加5%
        if (score > 300) {
            score = 300;  // 最高分限制
        }
    }
    
    printf("學生最終分數是: %d\n", score);
    return 0;
}
```

### if-else 語句

#### 基本語法
```c
if (條件式) {
    // 條件成立時執行的程式碼
} else {
    // 條件不成立時執行的程式碼
}
```

#### 範例 1：奇偶數判斷
```c
#include <stdio.h>

int main() {
    int number;
    
    printf("請輸入一個數字: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
        printf("%d 是偶數\n", number);
    } else {
        printf("%d 是奇數\n", number);
    }
    
    return 0;
}
```

#### 範例 2：密碼驗證
```c
#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    char correctPassword[] = "1234";
    
    printf("請輸入密碼: ");
    scanf("%s", password);
    
    if (strcmp(password, correctPassword) == 0) {
        printf("密碼正確！歡迎光臨！\n");
    } else {
        printf("密碼錯誤！請重新輸入！\n");
    }
    
    return 0;
}
```

#### 範例 3：成績及格判斷
```c
#include <stdio.h>

int main() {
    int score;
    
    printf("請輸入成績: ");
    scanf("%d", &score);
    
    if (score >= 60) {
        printf("及格！\n");
    } else {
        printf("不及格！\n");
    }
    
    return 0;
}
```

### if-else if-else 語句

#### 基本語法
```c
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
```c
#include <stdio.h>

int main() {
    int score;
    
    printf("請輸入成績 (0-100): ");
    scanf("%d", &score);
    
    if (score >= 90) {
        printf("優等\n");
    } else if (score >= 80) {
        printf("甲等\n");
    } else if (score >= 70) {
        printf("乙等\n");
    } else if (score >= 60) {
        printf("丙等\n");
    } else {
        printf("丁等\n");
    }
    
    return 0;
}
```

#### 範例 2：購物折扣計算
```c
#include <stdio.h>

int main() {
    int purchaseAmount;
    int finalAmount;
    
    printf("請輸入購買金額: ");
    scanf("%d", &purchaseAmount);
    
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
    
    printf("實付金額是: %d 元\n", finalAmount);
    return 0;
}
```

#### 範例 3：員工職務分配
```c
#include <stdio.h>

int main() {
    int age;
    
    printf("請輸入您的年齡: ");
    scanf("%d", &age);
    
    if (age >= 22 && age <= 30) {
        printf("您的職務是: 外勤業務員\n");
    } else if (age >= 31 && age <= 45) {
        printf("您的職務是: 內勤文書\n");
    } else if (age >= 46 && age <= 55) {
        printf("您的職務是: 倉庫管理員\n");
    } else if (age >= 56) {
        printf("強迫退休\n");
    } else {
        printf("年齡不符合工作條件\n");
    }
    
    return 0;
}
```

### 巢狀 if 語句

巢狀 if 語句是指在 if 語句內部再包含其他的 if 語句。

#### 範例 1：獎金計算（巢狀方式）
```c
#include <stdio.h>

int main() {
    int chinese, math;
    int bonus = 0;
    
    printf("請輸入國文成績和數學成績 (國文,數學): ");
    scanf("%d,%d", &chinese, &math);
    
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
    
    printf("獎金是: %d 元\n", bonus);
    return 0;
}
```

#### 範例 2：正負數與奇偶數判斷
```c
#include <stdio.h>

int main() {
    int number;
    
    printf("請輸入數字: ");
    scanf("%d", &number);
    
    if (number < 0) {
        if (number % 2 == 0) {
            printf("您輸入的 %d 是負偶數\n", number);
        } else {
            printf("您輸入的 %d 是負奇數\n", number);
        }
    } else {
        if (number % 2 == 0) {
            printf("您輸入的 %d 是正偶數\n", number);
        } else {
            printf("您輸入的 %d 是正奇數\n", number);
        }
    }
    
    return 0;
}
```

---

## switch-case 語句

switch-case 語句適用於多個固定值的比較，比 if-else if 更簡潔。

#### 基本語法
```c
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
```c
#include <stdio.h>

int main() {
    char operator_;
    int num1 = 20, num2 = 4;
    
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("請輸入要執行的運算 (+ - * /): ");
    scanf(" %c", &operator_);
    
    switch (operator_) {
        case '+':
            printf("num1 + num2 = %d\n", num1 + num2);
            break;
        case '-':
            printf("num1 - num2 = %d\n", num1 - num2);
            break;
        case '*':
            printf("num1 * num2 = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("num1 / num2 = %d\n", num1 / num2);
            } else {
                printf("除數不能為零！\n");
            }
            break;
        default:
            printf("無法執行運算！\n");
            break;
    }
    
    return 0;
}
```

#### 範例 2：季節判斷
```c
#include <stdio.h>

int main() {
    int season;
    
    printf("請輸入現在是第幾季 (1-4): ");
    scanf("%d", &season);
    
    switch (season) {
        case 1:
            printf("現在是春天！\n");
            break;
        case 2:
            printf("現在是夏天！\n");
            break;
        case 3:
            printf("現在是秋天！\n");
            break;
        case 4:
            printf("現在是冬天！\n");
            break;
        default:
            printf("無效的季節代碼！\n");
            break;
    }
    
    return 0;
}
```

#### 範例 3：問候語翻譯
```c
#include <stdio.h>

int main() {
    int choice;
    
    printf("=== 問候語翻譯 ===\n");
    printf("1. 您好嗎？\n");
    printf("2. 晚安\n");
    printf("3. 早安\n");
    printf("請選擇中文的選項 (1-3): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("英文是: How are you?\n");
            break;
        case 2:
            printf("英文是: Good evening\n");
            break;
        case 3:
            printf("英文是: Good morning\n");
            break;
        default:
            printf("無效的選項！\n");
            break;
    }
    
    return 0;
}
```

---

## 三元運算子

三元運算子是一種簡化的條件判斷語法。

#### 基本語法
```c
條件式 ? 值1 : 值2
```

#### 範例：奇偶數判斷
```c
#include <stdio.h>

int main() {
    int number;
    
    printf("請輸入任意整數: ");
    scanf("%d", &number);
    
    char* result = (number % 2 == 0) ? "偶數" : "奇數";
    printf("您這個數是: %s\n", result);
    
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
```c
#include <stdio.h>

int main() {
    int chinese, math;
    int bonus = 0;
    
    printf("請輸入國文成績和數學成績 (國文,數學): ");
    scanf("%d,%d", &chinese, &math);
    
    if (chinese == 100 && math == 100) {
        bonus = 1000;  // 國文100且數學100
    } else if (chinese == 100 || math == 100) {
        bonus = 500;   // 國文100或數學100
    } else {
        bonus = 0;     // 都沒有100
    }
    
    printf("獎金是: %d 元\n", bonus);
    return 0;
}
```

#### 範例 2：閏年判斷
```c
#include <stdio.h>

int main() {
    int year;
    
    printf("請輸入年份: ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d 是閏年\n", year);
    } else {
        printf("%d 不是閏年\n", year);
    }
    
    return 0;
}
```

#### 範例 3：三個數的最小值
```c
#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("請輸入三個數字: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < b && a < c) {
        printf("最小值是: %d\n", a);
    } else if (b < a && b < c) {
        printf("最小值是: %d\n", b);
    } else {
        printf("最小值是: %d\n", c);
    }
    
    return 0;
}
```

---

## 實用範例

### 範例 1：三角形類型判斷
```c
#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, hypotenuse;
    
    printf("請輸入第一邊的邊長: ");
    scanf("%lf", &side1);
    printf("請輸入第二邊的邊長: ");
    scanf("%lf", &side2);
    printf("請輸入斜邊的邊長: ");
    scanf("%lf", &hypotenuse);
    
    // 檢查是否為三角形
    if (side1 + side2 <= hypotenuse) {
        printf("此三邊無法構成三角形\n");
        return 0;
    }
    
    // 計算兩邊平方和與斜邊平方
    double sumOfSquares = pow(side1, 2) + pow(side2, 2);
    double hypotenuseSquare = pow(hypotenuse, 2);
    
    if (fabs(sumOfSquares - hypotenuseSquare) < 0.001) {
        printf("此三角形為直角三角形\n");
    } else if (sumOfSquares > hypotenuseSquare) {
        printf("此三角形為銳角三角形\n");
    } else {
        printf("此三角形為鈍角三角形\n");
    }
    
    return 0;
}
```

### 範例 2：綜合所得稅計算
```c
#include <stdio.h>

int main() {
    int income;
    double taxRate;
    int progressiveDeduction;
    
    printf("請輸入綜合所得淨額: ");
    scanf("%d", &income);
    
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
    
    printf("綜合所得淨額: %d 元\n", income);
    printf("稅率: %.0f%%\n", taxRate * 100);
    printf("--------------------\n");
    printf("稅金: %d 元\n", taxAmount);
    printf("累進差額: %d 元\n", progressiveDeduction);
    printf("--------------------\n");
    printf("今年應納稅額: %d 元\n", finalTax);
    
    return 0;
}
```

### 範例 3：停車費計算
```c
#include <stdio.h>

int main() {
    int inHour, inMin, outHour, outMin;
    
    printf("請輸入進場時間 (時 分): ");
    scanf("%d %d", &inHour, &inMin);
    printf("請輸入出場時間 (時 分): ");
    scanf("%d %d", &outHour, &outMin);
    
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
    
    printf("進場時間: %d:%d\n", inHour, inMin);
    printf("出場時間: %d:%d\n", outHour, outMin);
    printf("停車總分鐘數: %d\n", totalMinutes);
    printf("停車費: %d 元\n", parkingFee);
    
    return 0;
}
```

### 範例 4：會員等級與利率計算
```c
#include <stdio.h>

int main() {
    int deposit;
    
    printf("請輸入您的存款金額: ");
    scanf("%d", &deposit);
    
    int interestRate;
    char memberLevel[10];
    
    if (deposit >= 1000000) {
        interestRate = 4;
        sprintf(memberLevel, "A級");
    } else if (deposit >= 500000) {
        interestRate = 2;
        sprintf(memberLevel, "B級");
    } else {
        interestRate = 2;
        sprintf(memberLevel, "C級");
    }
    
    printf("您的利率是: %d%%\n", interestRate);
    printf("會員等級是: %s 會員\n", memberLevel);
    
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


