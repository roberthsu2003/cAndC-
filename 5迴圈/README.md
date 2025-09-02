# 迴圈 (Loops)

## 目錄
1. [迴圈的基本概念](#迴圈的基本概念)
2. [for 迴圈](#for-迴圈)
3. [while 迴圈](#while-迴圈)
4. [do-while 迴圈](#do-while-迴圈)
5. [巢狀迴圈](#巢狀迴圈)
6. [迴圈控制語句](#迴圈控制語句)
7. [實用範例](#實用範例)

## 迴圈的基本概念

迴圈是一種重複執行特定程式碼區塊的結構，當我們需要重複執行相同的操作時，使用迴圈可以讓程式更簡潔、更有效率。

### 迴圈的三大要素
1. **初始條件**：設定迴圈的起始值
2. **終止條件**：決定迴圈何時停止
3. **更新條件**：改變迴圈變數的值

---

## for 迴圈

### 語法結構
```c
for (初始條件; 終止條件; 更新條件) {
    // 要重複執行的程式碼
}
```

### 基本範例

#### 範例 1：簡單的計數迴圈
**目的：學習 for 迴圈的基本結構，從 1 數到 5**
```c
#include <stdio.h>

int main() {
    printf("開始計數：\n");
    
    for (int i = 1; i <= 5; i++) {
        printf("這是第 %d 次迴圈\n", i);
    }
    
    printf("計數結束！\n");
    return 0;
}
```

**執行結果：**
```
開始計數：
這是第 1 次迴圈
這是第 2 次迴圈
這是第 3 次迴圈
這是第 4 次迴圈
這是第 5 次迴圈
計數結束！
```

#### 範例 2：計算 1 到 10 的總和
**目的：學習在迴圈中累加數值，理解迴圈變數的運用**
```c
#include <stdio.h>

int main() {
    int sum = 0;
    
    for (int i = 1; i <= 10; i++) {
        sum += i;
        printf("加入 %d，目前總和為: %d\n", i, sum);
    }
    
    printf("1 到 10 的總和為: %d\n", sum);
    return 0;
}
```

#### 範例 3：不同的遞增方式
**目的：學習迴圈變數可以有不同的遞增方式，計算偶數總和**
```c
#include <stdio.h>

int main() {
    int sum = 0;
    
    printf("計算 2 到 10 的偶數總和：\n");
    for (int i = 2; i <= 10; i += 2) {
        sum += i;
        printf("偶數 %d 加入，總和為: %d\n", i, sum);
    }
    
    printf("偶數總和為: %d\n", sum);
    return 0;
}
```

#### 範例 4：結合使用者輸入
**目的：學習在迴圈中處理使用者輸入，計算一週支出**
```c
#include <stdio.h>

int main() {
    int sum = 0;
    int expense;
    
    printf("請輸入一週七天的支出：\n");
    for (int day = 1; day <= 7; day++) {
        printf("請輸入第 %d 天的支出: ", day);
        scanf("%d", &expense);
        sum += expense;
    }
    
    printf("本週的總支出為: %d 元\n", sum);
    printf("平均每日支出為: %d 元\n", sum / 7);
    return 0;
}
```

---

## while 迴圈

### 語法結構
```c
while (條件判斷) {
    // 要重複執行的程式碼
    // 記得要改變條件，避免無限迴圈
}
```

### 重要提醒
⚠️ **注意**：while 迴圈必須在迴圈內部改變條件變數，否則會造成無限迴圈！

### 基本範例

#### 範例 1：基本計數迴圈
**目的：學習 while 迴圈的基本結構，理解條件判斷的重要性**
```c
#include <stdio.h>

int main() {
    int i = 1;
    
    printf("使用 while 迴圈計數：\n");
    while (i <= 5) {
        printf("這是第 %d 次迴圈\n", i);
        i++;  // 重要：改變條件變數
    }
    
    printf("迴圈結束！\n");
    return 0;
}
```

#### 範例 2：for 迴圈與 while 迴圈的比較
**目的：理解兩種迴圈的差異和轉換方式**
```c
#include <stdio.h>

int main() {
    printf("=== 使用 for 迴圈 ===\n");
    for (int i = 1; i <= 3; i++) {
        printf("for 迴圈第 %d 次\n", i);
    }
    
    printf("\n=== 使用 while 迴圈達到相同效果 ===\n");
    int j = 1;
    while (j <= 3) {
        printf("while 迴圈第 %d 次\n", j);
        j++;  // 重要：改變條件變數
    }
    
    return 0;
}
```

#### 範例 3：存錢達成目標
**目的：學習使用 while 迴圈處理未知次數的重複操作**
```c
#include <stdio.h>

int main() {
    int target = 10000;  // 目標金額
    int total = 0;       // 總存款
    int month = 0;       // 月份計數
    int deposit;         // 每月存款
    
    printf("目標：存到 %d 元買新手機！\n", target);
    
    while (total < target) {
        month++;
        printf("請輸入第 %d 個月的存款: ", month);
        scanf("%d", &deposit);
        total += deposit;
        printf("目前總存款: %d 元\n", total);
        
        if (total < target) {
            printf("還差 %d 元達成目標！\n", target - total);
        }
    }
    
    printf("恭喜！已經存夠了！\n");
    printf("總共存了 %d 個月，總存款為: %d 元\n", month, total);
    return 0;
}
```

#### 範例 4：輸入驗證
**目的：學習使用 while 迴圈進行輸入驗證，確保資料正確性**
```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int score;
    
    printf("請輸入一個 0-100 之間的成績：\n");
    
    while (true) {
        printf("請輸入成績: ");
        scanf("%d", &score);
        
        if (score >= 0 && score <= 100) {
            break;  // 輸入正確，跳出迴圈
        } else {
            printf("輸入錯誤！成績必須在 0-100 之間，請重新輸入。\n");
        }
    }
    
    printf("您輸入的成績是: %d 分\n", score);
    
    if (score >= 60) {
        printf("恭喜及格！\n");
    } else {
        printf("需要加油喔！\n");
    }
    
    return 0;
}
```

---

## do-while 迴圈

### 語法結構
```c
do {
    // 要重複執行的程式碼
} while (條件判斷);
```

### 特點
- **先執行，再判斷**：程式碼至少會執行一次
- 適用於需要先執行再判斷條件的場合
- 常用於選單系統、輸入驗證等場景

### 基本範例

#### 範例 1：基本概念示範
**目的：理解 do-while 與 while 的差異，程式碼至少執行一次**
```c
#include <stdio.h>

int main() {
    int count = 0;
    
    printf("=== do-while 迴圈示範 ===\n");
    do {
        count++;
        printf("執行第 %d 次\n", count);
    } while (count < 3);
    
    printf("迴圈結束，總共執行了 %d 次\n", count);
    
    // 比較：即使條件一開始就不成立，do-while 也會執行一次
    printf("\n=== 條件一開始就不成立的情況 ===\n");
    int x = 10;
    do {
        printf("即使 x = %d > 5，這行還是會執行一次\n", x);
    } while (x < 5);
    
    return 0;
}
```

#### 範例 2：密碼驗證系統
**目的：學習使用 do-while 進行重複驗證，直到輸入正確**
```c
#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    char correctPassword[] = "abc123";
    int attempts = 0;
    
    printf("=== 密碼驗證系統 ===\n");
    
    do {
        attempts++;
        printf("請輸入密碼 (第 %d 次嘗試): ", attempts);
        scanf("%s", password);
        
        if (strcmp(password, correctPassword) != 0) {
            printf("密碼錯誤！請重新輸入。\n");
        }
        
    } while (strcmp(password, correctPassword) != 0);
    
    printf("恭喜！密碼正確，歡迎進入系統！\n");
    printf("您總共嘗試了 %d 次\n", attempts);
    return 0;
}
```

#### 範例 3：簡單計算機
**目的：學習使用 do-while 建立重複執行的程式選單**
```c
#include <stdio.h>

int main() {
    char choice;
    double num1, num2, result;
    
    printf("=== 簡單計算機 ===\n");
    
    do {
        printf("\n請輸入第一個數字: ");
        scanf("%lf", &num1);
        printf("請輸入第二個數字: ");
        scanf("%lf", &num2);
        
        printf("\n選擇運算：\n");
        printf("+ (加法)\n");
        printf("- (減法)\n");
        printf("* (乘法)\n");
        printf("/ (除法)\n");
        printf("請選擇運算符號: ");
        scanf(" %c", &choice);
        
        switch (choice) {
            case '+':
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("錯誤：除數不能為零！\n");
                }
                break;
            default:
                printf("無效的運算符號！\n");
        }
        
        printf("\n是否繼續計算？(y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');
    
    printf("感謝使用計算機，再見！\n");
    return 0;
}
```

#### 範例 4：選單系統
**目的：學習建立完整的選單驅動程式**
```c
#include <stdio.h>

int main() {
    int choice;
    int balance = 1000;  // 帳戶餘額
    int amount;
    
    printf("=== ATM 系統 ===\n");
    printf("歡迎使用！您的初始餘額為: %d 元\n", balance);
    
    do {
        printf("\n=== 主選單 ===\n");
        printf("1. 查詢餘額\n");
        printf("2. 存款\n");
        printf("3. 提款\n");
        printf("0. 離開系統\n");
        printf("請選擇功能 (0-3): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("您的帳戶餘額為: %d 元\n", balance);
                break;
            case 2:
                printf("請輸入存款金額: ");
                scanf("%d", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("存款成功！目前餘額: %d 元\n", balance);
                } else {
                    printf("存款金額必須大於 0！\n");
                }
                break;
            case 3:
                printf("請輸入提款金額: ");
                scanf("%d", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("提款成功！目前餘額: %d 元\n", balance);
                } else if (amount > balance) {
                    printf("餘額不足！目前餘額: %d 元\n", balance);
                } else {
                    printf("提款金額必須大於 0！\n");
                }
                break;
            case 0:
                printf("感謝使用 ATM 系統，再見！\n");
                break;
            default:
                printf("無效選擇，請重新輸入！\n");
        }
    } while (choice != 0);
    
    return 0;
}
```

---

## 巢狀迴圈

巢狀迴圈是指在迴圈內部再包含另一個迴圈，常用於處理二維資料或圖案繪製。

### 基本概念
- 外層迴圈控制行數
- 內層迴圈控制每行的內容
- 執行順序：外層迴圈執行一次，內層迴圈完整執行一輪

### 基本範例

#### 範例 1：理解巢狀迴圈的執行順序
**目的：清楚了解巢狀迴圈的執行流程**
```c
#include <stdio.h>

int main() {
    printf("=== 巢狀迴圈執行順序示範 ===\n");
    
    for (int i = 1; i <= 3; i++) {
        printf("外層迴圈第 %d 次執行\n", i);
        
        for (int j = 1; j <= 2; j++) {
            printf("  內層迴圈第 %d 次執行\n", j);
        }
        
        printf("外層迴圈第 %d 次結束\n", i);
        printf("---\n");
    }
    
    return 0;
}
```

**執行結果：**
```
=== 巢狀迴圈執行順序示範 ===
外層迴圈第 1 次執行
  內層迴圈第 1 次執行
  內層迴圈第 2 次執行
外層迴圈第 1 次結束
---
外層迴圈第 2 次執行
  內層迴圈第 1 次執行
  內層迴圈第 2 次執行
外層迴圈第 2 次結束
---
外層迴圈第 3 次執行
  內層迴圈第 1 次執行
  內層迴圈第 2 次執行
外層迴圈第 3 次結束
---
```

#### 範例 2：印出矩形圖案
**目的：學習使用巢狀迴圈繪製簡單的矩形圖案**
```c
#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("請輸入矩形的行數: ");
    scanf("%d", &rows);
    printf("請輸入矩形的列數: ");
    scanf("%d", &cols);
    
    printf("\n繪製 %d×%d 的矩形：\n", rows, cols);
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
```

#### 範例 3：印出直角三角形
**目的：學習使用巢狀迴圈繪製三角形圖案**
```c
#include <stdio.h>

int main() {
    int height;
    
    printf("請輸入三角形的高度: ");
    scanf("%d", &height);
    
    printf("\n直角三角形：\n");
    for (int i = 1; i <= height; i++) {
        printf("第 %d 行: ", i);
        for (int j = 1; j <= i; j++) {
            printf("# ");
        }
        printf("\n");
    }
    
    return 0;
}
```

**執行結果（輸入 5）：**
```
直角三角形：
第 1 行: # 
第 2 行: # # 
第 3 行: # # # 
第 4 行: # # # # 
第 5 行: # # # # # 
```

#### 範例 4：九九乘法表
**目的：學習使用巢狀迴圈處理數學運算表格**
```c
#include <stdio.h>

int main() {
    printf("=== 九九乘法表 ===\n");
    
    // 印出表頭
    printf("   ");
    for (int j = 1; j <= 9; j++) {
        printf("%4d", j);
    }
    printf("\n");
    printf("   ");
    for (int j = 1; j <= 9; j++) {
        printf("----");
    }
    printf("\n");
    
    // 印出乘法表內容
    for (int i = 1; i <= 9; i++) {
        printf("%d |", i);
        for (int j = 1; j <= 9; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    
    return 0;
}
```

#### 範例 5：等腰三角形
**目的：學習更複雜的圖案繪製，結合空格和符號**
```c
#include <stdio.h>

int main() {
    int height;
    
    printf("請輸入等腰三角形的高度: ");
    scanf("%d", &height);
    
    printf("\n等腰三角形：\n");
    for (int i = 1; i <= height; i++) {
        // 印出空格
        for (int space = 1; space <= height - i; space++) {
            printf(" ");
        }
        
        // 印出星號
        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
```

**執行結果（輸入 5）：**
```
等腰三角形：
    *
   ***
  *****
 *******
*********
```

#### 範例 6：數字金字塔
**目的：學習在圖案中加入數字變化**
```c
#include <stdio.h>

int main() {
    int height;
    
    printf("請輸入數字金字塔的高度: ");
    scanf("%d", &height);
    
    printf("\n數字金字塔：\n");
    for (int i = 1; i <= height; i++) {
        // 印出空格
        for (int space = 1; space <= height - i; space++) {
            printf(" ");
        }
        
        // 印出遞增數字
        for (int num = 1; num <= i; num++) {
            printf("%d", num);
        }
        
        // 印出遞減數字
        for (int num = i - 1; num >= 1; num--) {
            printf("%d", num);
        }
        
        printf("\n");
    }
    
    return 0;
}
```

**執行結果（輸入 5）：**
```
數字金字塔：
    1
   121
  12321
 1234321
123454321
```

---

## 迴圈控制語句

### break 語句
- **功能**：立即跳出迴圈
- **用途**：當滿足特定條件時，提前結束迴圈
- **適用**：for、while、do-while 迴圈

### continue 語句
- **功能**：跳過本次迴圈，繼續下一次迴圈
- **用途**：當滿足特定條件時，跳過當前迭代
- **適用**：for、while、do-while 迴圈

### 基本範例

#### 範例 1：break 語句基本用法
**目的：學習使用 break 提前結束迴圈**
```c
#include <stdio.h>

int main() {
    printf("=== break 語句示範 ===\n");
    printf("尋找第一個大於 50 的數字：\n");
    
    for (int i = 1; i <= 100; i++) {
        printf("檢查數字: %d\n", i);
        
        if (i > 50) {
            printf("找到了！數字 %d 大於 50\n", i);
            break;  // 找到後立即跳出迴圈
        }
    }
    
    printf("迴圈結束\n");
    return 0;
}
```

#### 範例 2：continue 語句基本用法
**目的：學習使用 continue 跳過特定條件**
```c
#include <stdio.h>

int main() {
    printf("=== continue 語句示範 ===\n");
    printf("印出 1 到 10 中的偶數：\n");
    
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 1) {
            printf("%d 是奇數，跳過\n", i);
            continue;  // 跳過奇數，繼續下一次迴圈
        }
        
        printf("%d 是偶數\n", i);
    }
    
    printf("迴圈結束\n");
    return 0;
}
```

#### 範例 3：成績輸入系統（break 應用）
**目的：學習使用 break 建立靈活的輸入系統**
```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int score;
    int sum = 0;
    int count = 0;
    int highestScore = 0;
    int lowestScore = 100;
    
    printf("=== 學生成績統計系統 ===\n");
    printf("請輸入學生成績，輸入負數結束輸入\n");
    
    while (true) {
        printf("請輸入第 %d 位學生的成績: ", count + 1);
        scanf("%d", &score);
        
        if (score < 0) {
            printf("輸入結束！\n");
            break;  // 輸入負數時跳出迴圈
        }
        
        if (score > 100) {
            printf("成績不能超過 100 分，請重新輸入\n");
            continue;  // 跳過無效輸入
        }
        
        sum += score;
        count++;
        
        if (score > highestScore) {
            highestScore = score;
        }
        if (score < lowestScore) {
            lowestScore = score;
        }
        
        printf("已輸入 %d 位學生的成績\n", count);
    }
    
    if (count > 0) {
        printf("\n=== 統計結果 ===\n");
        printf("學生人數: %d 人\n", count);
        printf("總成績: %d 分\n", sum);
        printf("平均成績: %.2f 分\n", (double)sum / count);
        printf("最高成績: %d 分\n", highestScore);
        printf("最低成績: %d 分\n", lowestScore);
    } else {
        printf("沒有輸入任何有效成績\n");
    }
    
    return 0;
}
```

#### 範例 4：數字篩選器（continue 應用）
**目的：學習使用 continue 進行條件篩選**
```c
#include <stdio.h>

int main() {
    int num;
    int evenSum = 0;
    int oddSum = 0;
    int evenCount = 0;
    int oddCount = 0;
    
    printf("=== 數字分類統計系統 ===\n");
    printf("請輸入 10 個整數：\n");
    
    for (int i = 1; i <= 10; i++) {
        printf("請輸入第 %d 個數字: ", i);
        scanf("%d", &num);
        
        if (num == 0) {
            printf("跳過數字 0\n");
            continue;  // 跳過 0
        }
        
        if (num % 2 == 0) {
            evenSum += num;
            evenCount++;
            printf("%d 是偶數，加入偶數統計\n", num);
        } else {
            oddSum += num;
            oddCount++;
            printf("%d 是奇數，加入奇數統計\n", num);
        }
    }
    
    printf("\n=== 統計結果 ===\n");
    printf("偶數個數: %d，總和: %d\n", evenCount, evenSum);
    printf("奇數個數: %d，總和: %d\n", oddCount, oddSum);
    
    return 0;
}
```

#### 範例 5：巢狀迴圈中的 break 和 continue
**目的：理解 break 和 continue 在巢狀迴圈中的作用範圍**
```c
#include <stdio.h>

int main() {
    printf("=== 巢狀迴圈中的控制語句 ===\n");
    
    for (int i = 1; i <= 3; i++) {
        printf("\n外層迴圈第 %d 次：\n", i);
        
        for (int j = 1; j <= 5; j++) {
            if (j == 3) {
                printf("  內層迴圈遇到 j=3，跳過\n");
                continue;  // 只影響內層迴圈
            }
            
            if (j == 5 && i == 2) {
                printf("  內層迴圈在 i=2, j=5 時提前結束\n");
                break;  // 只跳出內層迴圈
            }
            
            printf("  內層迴圈 j=%d\n", j);
        }
        
        printf("外層迴圈第 %d 次結束\n", i);
    }
    
    return 0;
}
```

### 重要提醒
⚠️ **注意事項**：
1. `break` 只會跳出最內層的迴圈
2. `continue` 只會跳過最內層迴圈的當前迭代
3. 在巢狀迴圈中，如果要跳出外層迴圈，需要使用標籤或其他方法
4. 過度使用 `break` 和 `continue` 可能會讓程式邏輯變得複雜

---

## 實用範例

### 範例 1：猜數字遊戲
**目的：綜合運用 while 迴圈、條件判斷和 break 語句，建立互動式遊戲**
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    printf("===== 猜數字遊戲 =====\n");
    
    // 設定隨機數種子
    srand(time(NULL));
    
    int min = 1;
    int max = 100;
    int guess;
    int attempts = 0;
    int target = rand() % (max - min + 1) + min;
    
    printf("我已經想好一個 %d 到 %d 之間的數字\n", min, max);
    printf("請開始猜測！\n");
    
    while (true) {
        printf("\n請輸入 %d 到 %d 之間的數字: ", min, max);
        scanf("%d", &guess);
        attempts++;
        
        if (guess < min || guess > max) {
            printf("超出範圍！請輸入 %d 到 %d 之間的數字\n", min, max);
            attempts--;  // 無效輸入不計入次數
            continue;
        }
        
        if (guess == target) {
            printf("🎉 恭喜！猜對了！答案就是 %d\n", target);
            printf("您總共猜了 %d 次\n", attempts);
            
            if (attempts <= 3) {
                printf("太厲害了！您是猜數字高手！\n");
            } else if (attempts <= 7) {
                printf("不錯的表現！\n");
            } else {
                printf("多練習就會進步的！\n");
            }
            break;
        } else if (guess > target) {
            printf("太大了！再小一點\n");
            max = guess - 1;
        } else {
            printf("太小了！再大一點\n");
            min = guess + 1;
        }
        
        printf("您已經猜了 %d 次\n", attempts);
        printf("提示：答案在 %d 到 %d 之間\n", min, max);
    }
    
    printf("遊戲結束，感謝遊玩！\n");
    return 0;
}
```

### 範例 2：計算最大公因數和最小公倍數
**目的：學習使用 while 迴圈實現歐幾里得演算法**
```c
#include <stdio.h>

int main() {
    int num1, num2;
    int originalNum1, originalNum2;
    int gcd, lcm;
    
    printf("=== 最大公因數與最小公倍數計算器 ===\n");
    
    printf("請輸入第一個正整數: ");
    scanf("%d", &num1);
    printf("請輸入第二個正整數: ");
    scanf("%d", &num2);
    
    // 保存原始數值
    originalNum1 = num1;
    originalNum2 = num2;
    
    // 使用歐幾里得演算法計算最大公因數
    printf("\n計算過程：\n");
    while (num2 != 0) {
        printf("%d ÷ %d = %d 餘 %d\n", num1, num2, num1/num2, num1%num2);
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    
    gcd = num1;
    
    // 計算最小公倍數
    lcm = (originalNum1 * originalNum2) / gcd;
    
    printf("\n=== 計算結果 ===\n");
    printf("%d 和 %d 的最大公因數是: %d\n", originalNum1, originalNum2, gcd);
    printf("%d 和 %d 的最小公倍數是: %d\n", originalNum1, originalNum2, lcm);
    
    return 0;
}
```

### 範例 3：質數判斷與質數列表
**目的：學習使用 for 迴圈進行數學運算和優化演算法**
```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int choice;
    
    printf("=== 質數工具程式 ===\n");
    printf("1. 判斷單一數字是否為質數\n");
    printf("2. 列出範圍內的所有質數\n");
    printf("請選擇功能 (1 或 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        int n;
        bool isPrime = true;
        
        printf("請輸入一個正整數: ");
        scanf("%d", &n);
        
        if (n <= 1) {
            isPrime = false;
        } else if (n == 2) {
            isPrime = true;
        } else if (n % 2 == 0) {
            isPrime = false;
        } else {
            printf("檢查過程：\n");
            for (int i = 3; i * i <= n; i += 2) {
                printf("檢查 %d 是否能被 %d 整除...", n, i);
                if (n % i == 0) {
                    printf(" 是！\n");
                    isPrime = false;
                    break;
                } else {
                    printf(" 否\n");
                }
            }
        }
        
        if (isPrime) {
            printf("%d 是質數！\n", n);
        } else {
            printf("%d 不是質數\n", n);
        }
        
    } else if (choice == 2) {
        int start, end;
        int count = 0;
        
        printf("請輸入起始數字: ");
        scanf("%d", &start);
        printf("請輸入結束數字: ");
        scanf("%d", &end);
        
        printf("%d 到 %d 之間的質數有：\n", start, end);
        
        for (int num = start; num <= end; num++) {
            if (num <= 1) continue;
            
            bool isPrime = true;
            if (num == 2) {
                isPrime = true;
            } else if (num % 2 == 0) {
                isPrime = false;
            } else {
                for (int i = 3; i * i <= num; i += 2) {
                    if (num % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            
            if (isPrime) {
                printf("%d ", num);
                count++;
                if (count % 10 == 0) printf("\n");  // 每 10 個換行
            }
        }
        
        printf("\n總共找到 %d 個質數\n", count);
    }
    
    return 0;
}
```

### 範例 4：圖案繪製工具
**目的：學習使用巢狀迴圈創造各種圖案**
```c
#include <stdio.h>

int main() {
    int choice, size;
    
    printf("=== 圖案繪製工具 ===\n");
    printf("1. 數字三角形\n");
    printf("2. 空心正方形\n");
    printf("3. 菱形圖案\n");
    printf("4. 階梯圖案\n");
    printf("請選擇要繪製的圖案 (1-4): ");
    scanf("%d", &choice);
    
    printf("請輸入圖案大小: ");
    scanf("%d", &size);
    
    switch (choice) {
        case 1: {
            printf("\n數字三角形：\n");
            for (int i = 1; i <= size; i++) {
                // 印出空格
                for (int j = 1; j <= size - i; j++) {
                    printf(" ");
                }
                // 印出數字
                for (int k = 1; k <= i; k++) {
                    printf("%d", i);
                }
                printf("\n");
            }
            break;
        }
        
        case 2: {
            printf("\n空心正方形：\n");
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (i == 1 || i == size || j == 1 || j == size) {
                        printf("* ");
                    } else {
                        printf("  ");
                    }
                }
                printf("\n");
            }
            break;
        }
        
        case 3: {
            printf("\n菱形圖案：\n");
            // 上半部
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size - i; j++) {
                    printf(" ");
                }
                for (int k = 1; k <= 2 * i - 1; k++) {
                    printf("*");
                }
                printf("\n");
            }
            // 下半部
            for (int i = size - 1; i >= 1; i--) {
                for (int j = 1; j <= size - i; j++) {
                    printf(" ");
                }
                for (int k = 1; k <= 2 * i - 1; k++) {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }
        
        case 4: {
            printf("\n階梯圖案：\n");
            for (int i = 1; i <= size; i++) {
                // 印出空格
                for (int j = 1; j < i; j++) {
                    printf("  ");
                }
                // 印出階梯
                for (int k = 1; k <= size - i + 1; k++) {
                    printf("# ");
                }
                printf("\n");
            }
            break;
        }
        
        default:
            printf("無效的選擇！\n");
    }
    
    return 0;
}
```

---

## 練習題

### 練習 1：計算階乘
**題目描述**：設計一個程式，計算使用者輸入數字的階乘。
**要求**：
- 使用 for 迴圈計算階乘
- 處理 0! = 1 的特殊情況
- 顯示計算過程

**範例輸出**：
```
請輸入一個非負整數: 5
5! = 5 × 4 × 3 × 2 × 1 = 120
```

### 練習 2：費波那契數列
**題目描述**：設計一個程式，印出前 n 個費波那契數。
**要求**：
- 使用迴圈計算費波那契數列
- 每行顯示一個數字及其位置
- 處理 n ≤ 0 的情況

**範例輸出**：
```
請輸入要顯示的費波那契數列個數: 8
第 1 個費波那契數: 0
第 2 個費波那契數: 1
第 3 個費波那契數: 1
第 4 個費波那契數: 2
第 5 個費波那契數: 3
第 6 個費波那契數: 5
第 7 個費波那契數: 8
第 8 個費波那契數: 13
```

### 練習 3：數字金字塔
**題目描述**：設計一個程式，印出如下圖案：
```
    1
   121
  12321
 1234321
123454321
```
**要求**：
- 使用巢狀迴圈
- 可以讓使用者輸入金字塔的高度
- 正確處理空格和數字的排列

### 練習 4：成績統計系統
**題目描述**：設計一個成績統計程式。
**要求**：
- 使用迴圈輸入多個學生的成績
- 計算平均分、最高分、最低分
- 統計及格人數（≥60分）
- 輸入負數時結束輸入

**範例輸出**：
```
=== 成績統計系統 ===
請輸入學生成績，輸入負數結束
學生 1 成績: 85
學生 2 成績: 92
學生 3 成績: 78
學生 4 成績: 56
學生 5 成績: -1

=== 統計結果 ===
學生人數: 4 人
平均成績: 77.75 分
最高成績: 92 分
最低成績: 56 分
及格人數: 3 人
及格率: 75%
```

### 練習 5：簡單計算機
**題目描述**：設計一個可以重複進行運算的計算機程式。
**要求**：
- 使用 do-while 迴圈建立選單
- 支援加減乘除四種運算
- 處理除零錯誤
- 可以選擇繼續或退出

**範例輸出**：
```
=== 簡單計算機 ===
請輸入第一個數字: 10
請輸入第二個數字: 3
請選擇運算 (+, -, *, /): /
結果: 10 / 3 = 3.33333

是否繼續計算？(y/n): y
```

### 練習 6：完美數尋找器
**題目描述**：找出指定範圍內的所有完美數（一個數等於其所有真因數的和）。
**要求**：
- 使用巢狀迴圈找出因數
- 顯示每個完美數的因數分解
- 統計找到的完美數個數

**提示**：6 是第一個完美數，因為 6 = 1 + 2 + 3

### 練習 7：數字猜測遊戲進階版
**題目描述**：改進基本的猜數字遊戲。
**要求**：
- 可以選擇難度（範圍大小）
- 限制猜測次數
- 記錄最佳成績
- 可以重複遊玩

### 練習 8：圖案選擇器
**題目描述**：建立一個可以繪製多種圖案的程式。
**要求**：
- 提供至少 5 種不同圖案選擇
- 可以自訂圖案大小
- 使用選單系統
- 可以重複選擇不同圖案

**建議圖案**：
- 實心三角形
- 空心三角形
- 實心菱形
- 空心菱形
- 數字階梯

---

## 總結

1. **for 迴圈**：適用於已知執行次數的情況
2. **while 迴圈**：適用於未知執行次數，但知道終止條件的情況
3. **do-while 迴圈**：適用於至少需要執行一次的情況
4. **巢狀迴圈**：用於處理二維或多維的問題
5. **break**：提前結束迴圈
6. **continue**：跳過當前迭代

選擇適當的迴圈類型可以讓程式更清晰、更有效率！
