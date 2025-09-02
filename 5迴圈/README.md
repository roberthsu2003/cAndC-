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
```cpp
for (初始條件; 終止條件; 更新條件) {
    // 要重複執行的程式碼
}
```

### 基本範例

#### 範例 1：簡單的計數迴圈
**目的：學習 for 迴圈的基本結構，從 1 數到 5**
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "開始計數：" << endl;
    
    for (int i = 1; i <= 5; i++) {
        cout << "這是第 " << i << " 次迴圈" << endl;
    }
    
    cout << "計數結束！" << endl;
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
```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    
    for (int i = 1; i <= 10; i++) {
        sum += i;
        cout << "加入 " << i << "，目前總和為: " << sum << endl;
    }
    
    cout << "1 到 10 的總和為: " << sum << endl;
    return 0;
}
```

#### 範例 3：不同的遞增方式
**目的：學習迴圈變數可以有不同的遞增方式，計算偶數總和**
```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    
    cout << "計算 2 到 10 的偶數總和：" << endl;
    for (int i = 2; i <= 10; i += 2) {
        sum += i;
        cout << "偶數 " << i << " 加入，總和為: " << sum << endl;
    }
    
    cout << "偶數總和為: " << sum << endl;
    return 0;
}
```

#### 範例 4：結合使用者輸入
**目的：學習在迴圈中處理使用者輸入，計算一週支出**
```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int expense;
    
    cout << "請輸入一週七天的支出：" << endl;
    for (int day = 1; day <= 7; day++) {
        cout << "請輸入第 " << day << " 天的支出: ";
        cin >> expense;
        sum += expense;
    }
    
    cout << "本週的總支出為: " << sum << " 元" << endl;
    cout << "平均每日支出為: " << sum / 7 << " 元" << endl;
    return 0;
}
```

---

## while 迴圈

### 語法結構
```cpp
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
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    
    cout << "使用 while 迴圈計數：" << endl;
    while (i <= 5) {
        cout << "這是第 " << i << " 次迴圈" << endl;
        i++;  // 重要：改變條件變數
    }
    
    cout << "迴圈結束！" << endl;
    return 0;
}
```

#### 範例 2：for 迴圈與 while 迴圈的比較
**目的：理解兩種迴圈的差異和轉換方式**
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "=== 使用 for 迴圈 ===" << endl;
    for (int i = 1; i <= 3; i++) {
        cout << "for 迴圈第 " << i << " 次" << endl;
    }
    
    cout << "\n=== 使用 while 迴圈達到相同效果 ===" << endl;
    int j = 1;
    while (j <= 3) {
        cout << "while 迴圈第 " << j << " 次" << endl;
        j++;  // 重要：改變條件變數
    }
    
    return 0;
}
```

#### 範例 3：存錢達成目標
**目的：學習使用 while 迴圈處理未知次數的重複操作**
```cpp
#include <iostream>
using namespace std;

int main() {
    int target = 10000;  // 目標金額
    int total = 0;       // 總存款
    int month = 0;       // 月份計數
    int deposit;         // 每月存款
    
    cout << "目標：存到 " << target << " 元買新手機！" << endl;
    
    while (total < target) {
        month++;
        cout << "請輸入第 " << month << " 個月的存款: ";
        cin >> deposit;
        total += deposit;
        cout << "目前總存款: " << total << " 元" << endl;
        
        if (total < target) {
            cout << "還差 " << (target - total) << " 元達成目標！" << endl;
        }
    }
    
    cout << "恭喜！已經存夠了！" << endl;
    cout << "總共存了 " << month << " 個月，總存款為: " << total << " 元" << endl;
    return 0;
}
```

#### 範例 4：輸入驗證
**目的：學習使用 while 迴圈進行輸入驗證，確保資料正確性**
```cpp
#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "請輸入一個 0-100 之間的成績：" << endl;
    
    while (true) {
        cout << "請輸入成績: ";
        cin >> score;
        
        if (score >= 0 && score <= 100) {
            break;  // 輸入正確，跳出迴圈
        } else {
            cout << "輸入錯誤！成績必須在 0-100 之間，請重新輸入。" << endl;
        }
    }
    
    cout << "您輸入的成績是: " << score << " 分" << endl;
    
    if (score >= 60) {
        cout << "恭喜及格！" << endl;
    } else {
        cout << "需要加油喔！" << endl;
    }
    
    return 0;
}
```

---

## do-while 迴圈

### 語法結構
```cpp
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
```cpp
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    
    cout << "=== do-while 迴圈示範 ===" << endl;
    do {
        count++;
        cout << "執行第 " << count << " 次" << endl;
    } while (count < 3);
    
    cout << "迴圈結束，總共執行了 " << count << " 次" << endl;
    
    // 比較：即使條件一開始就不成立，do-while 也會執行一次
    cout << "\n=== 條件一開始就不成立的情況 ===" << endl;
    int x = 10;
    do {
        cout << "即使 x = " << x << " > 5，這行還是會執行一次" << endl;
    } while (x < 5);
    
    return 0;
}
```

#### 範例 2：密碼驗證系統
**目的：學習使用 do-while 進行重複驗證，直到輸入正確**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    string correctPassword = "abc123";
    int attempts = 0;
    
    cout << "=== 密碼驗證系統 ===" << endl;
    
    do {
        attempts++;
        cout << "請輸入密碼 (第 " << attempts << " 次嘗試): ";
        cin >> password;
        
        if (password != correctPassword) {
            cout << "密碼錯誤！請重新輸入。" << endl;
        }
        
    } while (password != correctPassword);
    
    cout << "恭喜！密碼正確，歡迎進入系統！" << endl;
    cout << "您總共嘗試了 " << attempts << " 次" << endl;
    return 0;
}
```

#### 範例 3：簡單計算機
**目的：學習使用 do-while 建立重複執行的程式選單**
```cpp
#include <iostream>
using namespace std;

int main() {
    char choice;
    double num1, num2, result;
    
    cout << "=== 簡單計算機 ===" << endl;
    
    do {
        cout << "\n請輸入第一個數字: ";
        cin >> num1;
        cout << "請輸入第二個數字: ";
        cin >> num2;
        
        cout << "\n選擇運算：" << endl;
        cout << "+ (加法)" << endl;
        cout << "- (減法)" << endl;
        cout << "* (乘法)" << endl;
        cout << "/ (除法)" << endl;
        cout << "請選擇運算符號: ";
        cin >> choice;
        
        switch (choice) {
            case '+':
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "錯誤：除數不能為零！" << endl;
                }
                break;
            default:
                cout << "無效的運算符號！" << endl;
        }
        
        cout << "\n是否繼續計算？(y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "感謝使用計算機，再見！" << endl;
    return 0;
}
```

#### 範例 4：選單系統
**目的：學習建立完整的選單驅動程式**
```cpp
#include <iostream>
using namespace std;

int main() {
    int choice;
    int balance = 1000;  // 帳戶餘額
    int amount;
    
    cout << "=== ATM 系統 ===" << endl;
    cout << "歡迎使用！您的初始餘額為: " << balance << " 元" << endl;
    
    do {
        cout << "\n=== 主選單 ===" << endl;
        cout << "1. 查詢餘額" << endl;
        cout << "2. 存款" << endl;
        cout << "3. 提款" << endl;
        cout << "0. 離開系統" << endl;
        cout << "請選擇功能 (0-3): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "您的帳戶餘額為: " << balance << " 元" << endl;
                break;
            case 2:
                cout << "請輸入存款金額: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "存款成功！目前餘額: " << balance << " 元" << endl;
                } else {
                    cout << "存款金額必須大於 0！" << endl;
                }
                break;
            case 3:
                cout << "請輸入提款金額: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "提款成功！目前餘額: " << balance << " 元" << endl;
                } else if (amount > balance) {
                    cout << "餘額不足！目前餘額: " << balance << " 元" << endl;
                } else {
                    cout << "提款金額必須大於 0！" << endl;
                }
                break;
            case 0:
                cout << "感謝使用 ATM 系統，再見！" << endl;
                break;
            default:
                cout << "無效選擇，請重新輸入！" << endl;
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
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "=== 巢狀迴圈執行順序示範 ===" << endl;
    
    for (int i = 1; i <= 3; i++) {
        cout << "外層迴圈第 " << i << " 次執行" << endl;
        
        for (int j = 1; j <= 2; j++) {
            cout << "  內層迴圈第 " << j << " 次執行" << endl;
        }
        
        cout << "外層迴圈第 " << i << " 次結束" << endl;
        cout << "---" << endl;
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
```cpp
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "請輸入矩形的行數: ";
    cin >> rows;
    cout << "請輸入矩形的列數: ";
    cin >> cols;
    
    cout << "\n繪製 " << rows << "×" << cols << " 的矩形：" << endl;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
```

#### 範例 3：印出直角三角形
**目的：學習使用巢狀迴圈繪製三角形圖案**
```cpp
#include <iostream>
using namespace std;

int main() {
    int height;
    
    cout << "請輸入三角形的高度: ";
    cin >> height;
    
    cout << "\n直角三角形：" << endl;
    for (int i = 1; i <= height; i++) {
        cout << "第 " << i << " 行: ";
        for (int j = 1; j <= i; j++) {
            cout << "# ";
        }
        cout << endl;
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
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "=== 九九乘法表 ===" << endl;
    
    // 印出表頭
    cout << "   ";
    for (int j = 1; j <= 9; j++) {
        cout << setw(4) << j;
    }
    cout << endl;
    cout << "   ";
    for (int j = 1; j <= 9; j++) {
        cout << "----";
    }
    cout << endl;
    
    // 印出乘法表內容
    for (int i = 1; i <= 9; i++) {
        cout << i << " |";
        for (int j = 1; j <= 9; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }
    
    return 0;
}
```

#### 範例 5：等腰三角形
**目的：學習更複雜的圖案繪製，結合空格和符號**
```cpp
#include <iostream>
using namespace std;

int main() {
    int height;
    
    cout << "請輸入等腰三角形的高度: ";
    cin >> height;
    
    cout << "\n等腰三角形：" << endl;
    for (int i = 1; i <= height; i++) {
        // 印出空格
        for (int space = 1; space <= height - i; space++) {
            cout << " ";
        }
        
        // 印出星號
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }
        
        cout << endl;
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
```cpp
#include <iostream>
using namespace std;

int main() {
    int height;
    
    cout << "請輸入數字金字塔的高度: ";
    cin >> height;
    
    cout << "\n數字金字塔：" << endl;
    for (int i = 1; i <= height; i++) {
        // 印出空格
        for (int space = 1; space <= height - i; space++) {
            cout << " ";
        }
        
        // 印出遞增數字
        for (int num = 1; num <= i; num++) {
            cout << num;
        }
        
        // 印出遞減數字
        for (int num = i - 1; num >= 1; num--) {
            cout << num;
        }
        
        cout << endl;
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
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "=== break 語句示範 ===" << endl;
    cout << "尋找第一個大於 50 的數字：" << endl;
    
    for (int i = 1; i <= 100; i++) {
        cout << "檢查數字: " << i << endl;
        
        if (i > 50) {
            cout << "找到了！數字 " << i << " 大於 50" << endl;
            break;  // 找到後立即跳出迴圈
        }
    }
    
    cout << "迴圈結束" << endl;
    return 0;
}
```

#### 範例 2：continue 語句基本用法
**目的：學習使用 continue 跳過特定條件**
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "=== continue 語句示範 ===" << endl;
    cout << "印出 1 到 10 中的偶數：" << endl;
    
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 1) {
            cout << i << " 是奇數，跳過" << endl;
            continue;  // 跳過奇數，繼續下一次迴圈
        }
        
        cout << i << " 是偶數" << endl;
    }
    
    cout << "迴圈結束" << endl;
    return 0;
}
```

#### 範例 3：成績輸入系統（break 應用）
**目的：學習使用 break 建立靈活的輸入系統**
```cpp
#include <iostream>
using namespace std;

int main() {
    int score;
    int sum = 0;
    int count = 0;
    int highestScore = 0;
    int lowestScore = 100;
    
    cout << "=== 學生成績統計系統 ===" << endl;
    cout << "請輸入學生成績，輸入負數結束輸入" << endl;
    
    while (true) {
        cout << "請輸入第 " << (count + 1) << " 位學生的成績: ";
        cin >> score;
        
        if (score < 0) {
            cout << "輸入結束！" << endl;
            break;  // 輸入負數時跳出迴圈
        }
        
        if (score > 100) {
            cout << "成績不能超過 100 分，請重新輸入" << endl;
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
        
        cout << "已輸入 " << count << " 位學生的成績" << endl;
    }
    
    if (count > 0) {
        cout << "\n=== 統計結果 ===" << endl;
        cout << "學生人數: " << count << " 人" << endl;
        cout << "總成績: " << sum << " 分" << endl;
        cout << "平均成績: " << (double)sum / count << " 分" << endl;
        cout << "最高成績: " << highestScore << " 分" << endl;
        cout << "最低成績: " << lowestScore << " 分" << endl;
    } else {
        cout << "沒有輸入任何有效成績" << endl;
    }
    
    return 0;
}
```

#### 範例 4：數字篩選器（continue 應用）
**目的：學習使用 continue 進行條件篩選**
```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    int evenSum = 0;
    int oddSum = 0;
    int evenCount = 0;
    int oddCount = 0;
    
    cout << "=== 數字分類統計系統 ===" << endl;
    cout << "請輸入 10 個整數：" << endl;
    
    for (int i = 1; i <= 10; i++) {
        cout << "請輸入第 " << i << " 個數字: ";
        cin >> num;
        
        if (num == 0) {
            cout << "跳過數字 0" << endl;
            continue;  // 跳過 0
        }
        
        if (num % 2 == 0) {
            evenSum += num;
            evenCount++;
            cout << num << " 是偶數，加入偶數統計" << endl;
        } else {
            oddSum += num;
            oddCount++;
            cout << num << " 是奇數，加入奇數統計" << endl;
        }
    }
    
    cout << "\n=== 統計結果 ===" << endl;
    cout << "偶數個數: " << evenCount << "，總和: " << evenSum << endl;
    cout << "奇數個數: " << oddCount << "，總和: " << oddSum << endl;
    
    return 0;
}
```

#### 範例 5：巢狀迴圈中的 break 和 continue
**目的：理解 break 和 continue 在巢狀迴圈中的作用範圍**
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "=== 巢狀迴圈中的控制語句 ===" << endl;
    
    for (int i = 1; i <= 3; i++) {
        cout << "\n外層迴圈第 " << i << " 次：" << endl;
        
        for (int j = 1; j <= 5; j++) {
            if (j == 3) {
                cout << "  內層迴圈遇到 j=3，跳過" << endl;
                continue;  // 只影響內層迴圈
            }
            
            if (j == 5 && i == 2) {
                cout << "  內層迴圈在 i=2, j=5 時提前結束" << endl;
                break;  // 只跳出內層迴圈
            }
            
            cout << "  內層迴圈 j=" << j << endl;
        }
        
        cout << "外層迴圈第 " << i << " 次結束" << endl;
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
```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "===== 猜數字遊戲 =====" << endl;
    
    // 設定隨機數種子
    srand(time(nullptr));
    
    int min = 1;
    int max = 100;
    int guess;
    int attempts = 0;
    int target = rand() % (max - min + 1) + min;
    
    cout << "我已經想好一個 " << min << " 到 " << max << " 之間的數字" << endl;
    cout << "請開始猜測！" << endl;
    
    while (true) {
        cout << "\n請輸入 " << min << " 到 " << max << " 之間的數字: ";
        cin >> guess;
        attempts++;
        
        if (guess < min || guess > max) {
            cout << "超出範圍！請輸入 " << min << " 到 " << max << " 之間的數字" << endl;
            attempts--;  // 無效輸入不計入次數
            continue;
        }
        
        if (guess == target) {
            cout << "🎉 恭喜！猜對了！答案就是 " << target << endl;
            cout << "您總共猜了 " << attempts << " 次" << endl;
            
            if (attempts <= 3) {
                cout << "太厲害了！您是猜數字高手！" << endl;
            } else if (attempts <= 7) {
                cout << "不錯的表現！" << endl;
            } else {
                cout << "多練習就會進步的！" << endl;
            }
            break;
        } else if (guess > target) {
            cout << "太大了！再小一點" << endl;
            max = guess - 1;
        } else {
            cout << "太小了！再大一點" << endl;
            min = guess + 1;
        }
        
        cout << "您已經猜了 " << attempts << " 次" << endl;
        cout << "提示：答案在 " << min << " 到 " << max << " 之間" << endl;
    }
    
    cout << "遊戲結束，感謝遊玩！" << endl;
    return 0;
}
```

### 範例 2：計算最大公因數和最小公倍數
**目的：學習使用 while 迴圈實現歐幾里得演算法**
```cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int originalNum1, originalNum2;
    int gcd, lcm;
    
    cout << "=== 最大公因數與最小公倍數計算器 ===" << endl;
    
    cout << "請輸入第一個正整數: ";
    cin >> num1;
    cout << "請輸入第二個正整數: ";
    cin >> num2;
    
    // 保存原始數值
    originalNum1 = num1;
    originalNum2 = num2;
    
    // 使用歐幾里得演算法計算最大公因數
    cout << "\n計算過程：" << endl;
    while (num2 != 0) {
        cout << num1 << " ÷ " << num2 << " = " << num1/num2 << " 餘 " << num1%num2 << endl;
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    
    gcd = num1;
    
    // 計算最小公倍數
    lcm = (originalNum1 * originalNum2) / gcd;
    
    cout << "\n=== 計算結果 ===" << endl;
    cout << originalNum1 << " 和 " << originalNum2 << " 的最大公因數是: " << gcd << endl;
    cout << originalNum1 << " 和 " << originalNum2 << " 的最小公倍數是: " << lcm << endl;
    
    return 0;
}
```

### 範例 3：質數判斷與質數列表
**目的：學習使用 for 迴圈進行數學運算和優化演算法**
```cpp
#include <iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "=== 質數工具程式 ===" << endl;
    cout << "1. 判斷單一數字是否為質數" << endl;
    cout << "2. 列出範圍內的所有質數" << endl;
    cout << "請選擇功能 (1 或 2): ";
    cin >> choice;
    
    if (choice == 1) {
        int n;
        bool isPrime = true;
        
        cout << "請輸入一個正整數: ";
        cin >> n;
        
        if (n <= 1) {
            isPrime = false;
        } else if (n == 2) {
            isPrime = true;
        } else if (n % 2 == 0) {
            isPrime = false;
        } else {
            cout << "檢查過程：" << endl;
            for (int i = 3; i * i <= n; i += 2) {
                cout << "檢查 " << n << " 是否能被 " << i << " 整除...";
                if (n % i == 0) {
                    cout << " 是！" << endl;
                    isPrime = false;
                    break;
                } else {
                    cout << " 否" << endl;
                }
            }
        }
        
        if (isPrime) {
            cout << n << " 是質數！" << endl;
        } else {
            cout << n << " 不是質數" << endl;
        }
        
    } else if (choice == 2) {
        int start, end;
        int count = 0;
        
        cout << "請輸入起始數字: ";
        cin >> start;
        cout << "請輸入結束數字: ";
        cin >> end;
        
        cout << start << " 到 " << end << " 之間的質數有：" << endl;
        
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
                cout << num << " ";
                count++;
                if (count % 10 == 0) cout << endl;  // 每 10 個換行
            }
        }
        
        cout << "\n總共找到 " << count << " 個質數" << endl;
    }
    
    return 0;
}
```

### 範例 4：圖案繪製工具
**目的：學習使用巢狀迴圈創造各種圖案**
```cpp
#include <iostream>
using namespace std;

int main() {
    int choice, size;
    
    cout << "=== 圖案繪製工具 ===" << endl;
    cout << "1. 數字三角形" << endl;
    cout << "2. 空心正方形" << endl;
    cout << "3. 菱形圖案" << endl;
    cout << "4. 階梯圖案" << endl;
    cout << "請選擇要繪製的圖案 (1-4): ";
    cin >> choice;
    
    cout << "請輸入圖案大小: ";
    cin >> size;
    
    switch (choice) {
        case 1: {
            cout << "\n數字三角形：" << endl;
            for (int i = 1; i <= size; i++) {
                // 印出空格
                for (int j = 1; j <= size - i; j++) {
                    cout << " ";
                }
                // 印出數字
                for (int k = 1; k <= i; k++) {
                    cout << i;
                }
                cout << endl;
            }
            break;
        }
        
        case 2: {
            cout << "\n空心正方形：" << endl;
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (i == 1 || i == size || j == 1 || j == size) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
        }
        
        case 3: {
            cout << "\n菱形圖案：" << endl;
            // 上半部
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size - i; j++) {
                    cout << " ";
                }
                for (int k = 1; k <= 2 * i - 1; k++) {
                    cout << "*";
                }
                cout << endl;
            }
            // 下半部
            for (int i = size - 1; i >= 1; i--) {
                for (int j = 1; j <= size - i; j++) {
                    cout << " ";
                }
                for (int k = 1; k <= 2 * i - 1; k++) {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        }
        
        case 4: {
            cout << "\n階梯圖案：" << endl;
            for (int i = 1; i <= size; i++) {
                // 印出空格
                for (int j = 1; j < i; j++) {
                    cout << "  ";
                }
                // 印出階梯
                for (int k = 1; k <= size - i + 1; k++) {
                    cout << "# ";
                }
                cout << endl;
            }
            break;
        }
        
        default:
            cout << "無效的選擇！" << endl;
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
