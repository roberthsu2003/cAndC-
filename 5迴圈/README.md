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

#### 範例 1：計算 1 到 10 的總和
```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    
    for (int i = 1; i <= 10; i++) {
        sum += i;
        cout << "第 " << i << " 次迴圈，目前總和為: " << sum << endl;
    }
    
    cout << "1 到 10 的總和為: " << sum << endl;
    return 0;
}
```

**執行結果：**
```
第 1 次迴圈，目前總和為: 1
第 2 次迴圈，目前總和為: 3
第 3 次迴圈，目前總和為: 6
第 4 次迴圈，目前總和為: 10
第 5 次迴圈，目前總和為: 15
第 6 次迴圈，目前總和為: 21
第 7 次迴圈，目前總和為: 28
第 8 次迴圈，目前總和為: 36
第 9 次迴圈，目前總和為: 45
第 10 次迴圈，目前總和為: 55
1 到 10 的總和為: 55
```

#### 範例 2：計算偶數總和
```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    
    // 計算 2 到 10 所有偶數的總和
    for (int i = 2; i <= 10; i += 2) {
        sum += i;
        cout << "第 " << i/2 << " 次迴圈，i = " << i << "，總和為: " << sum << endl;
    }
    
    cout << "2 到 10 的偶數總和為: " << sum << endl;
    return 0;
}
```

#### 範例 3：輸入多筆資料並計算總和
```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int expense;
    
    // 輸入一週七天的支出
    for (int day = 1; day <= 7; day++) {
        if (day == 7) {
            cout << "請輸入星期日的支出: ";
        } else {
            cout << "請輸入星期" << day << " 的支出: ";
        }
        cin >> expense;
        sum += expense;
    }
    
    cout << "本週的總支出為: " << sum << " 元" << endl;
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

#### 範例 1：存錢買機車
```cpp
#include <iostream>
using namespace std;

int main() {
    int target = 30000;  // 目標金額
    int total = 0;       // 總存款
    int month = 0;       // 月份計數
    int deposit;         // 每月存款
    
    while (total < target) {
        month++;
        cout << "請輸入第 " << month << " 個月的存款: ";
        cin >> deposit;
        total += deposit;
    }
    
    cout << "恭喜！已經存夠了，存了 " << month << " 個月的總存款為: " << total << " 元" << endl;
    return 0;
}
```

#### 範例 2：for 迴圈轉換為 while 迴圈
```cpp
// 使用 for 迴圈
for (int i = 0; i <= 5; i++) {
    cout << "這是第 " << i << " 次迴圈" << endl;
}

// 使用 while 迴圈達到相同結果
int i = 0;
while (i <= 5) {
    cout << "這是第 " << i << " 次迴圈" << endl;
    i++;  // 重要：改變條件變數
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

### 基本範例

#### 範例 1：密碼驗證
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    string correctPassword = "5678";
    
    do {
        cout << "請輸入密碼: ";
        cin >> password;
    } while (password != correctPassword);
    
    cout << "恭喜！密碼正確，歡迎進入系統！" << endl;
    return 0;
}
```

#### 範例 2：選單系統
```cpp
#include <iostream>
using namespace std;

int main() {
    int choice;
    
    do {
        cout << "\n=== 選單系統 ===" << endl;
        cout << "1. 新增資料" << endl;
        cout << "2. 查詢資料" << endl;
        cout << "3. 修改資料" << endl;
        cout << "4. 刪除資料" << endl;
        cout << "0. 離開系統" << endl;
        cout << "請選擇功能 (0-4): ";
        cin >> choice;
        
        switch (choice) {
            case 1: cout << "執行新增資料功能" << endl; break;
            case 2: cout << "執行查詢資料功能" << endl; break;
            case 3: cout << "執行修改資料功能" << endl; break;
            case 4: cout << "執行刪除資料功能" << endl; break;
            case 0: cout << "感謝使用，再見！" << endl; break;
            default: cout << "無效選擇，請重新輸入" << endl;
        }
    } while (choice != 0);
    
    return 0;
}
```

---

## 巢狀迴圈

巢狀迴圈是指在迴圈內部再包含另一個迴圈。

### 基本範例

#### 範例 1：印出直角三角形
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "第 " << i << " 行: ";
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}
```

**執行結果：**
```
第 1 行: #
第 2 行: ##
第 3 行: ###
第 4 行: ####
第 5 行: #####
```

#### 範例 2：九九乘法表
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i << "×" << j << "=" << i*j << "\t";
        }
        cout << endl;
    }
    return 0;
}
```

---

## 迴圈控制語句

### break 語句
- **功能**：立即跳出迴圈
- **用途**：當滿足特定條件時，提前結束迴圈

#### 範例：成績輸入系統
```cpp
#include <iostream>
using namespace std;

int main() {
    int score;
    int sum = 0;
    int count = 0;
    
    while (true) {
        cout << "請輸入第 " << (count + 1) << " 位學生的成績 (輸入負數結束): ";
        cin >> score;
        
        if (score < 0) {
            break;  // 輸入負數時跳出迴圈
        }
        
        sum += score;
        count++;
    }
    
    if (count > 0) {
        cout << "全班總成績為: " << sum << " 分" << endl;
        cout << "平均成績為: " << (double)sum / count << " 分" << endl;
    }
    
    return 0;
}
```

### continue 語句
- **功能**：跳過本次迴圈，繼續下一次迴圈
- **用途**：當滿足特定條件時，跳過當前迭代

#### 範例：只計算正偶數
```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    int count = 0;
    
    while (true) {
        cout << "請輸入第 " << (count + 1) << " 個數值 (輸入負數結束): ";
        cin >> num;
        
        if (num < 0) {
            break;
        }
        
        count++;
        
        // 跳過奇數
        if (num % 2 == 1) {
            cout << num << " 是奇數，跳過計算" << endl;
            continue;
        }
        
        sum += num;
        cout << num << " 是偶數，已加入總和，目前總和為: " << sum << endl;
    }
    
    cout << "所有正偶數的總和為: " << sum << endl;
    return 0;
}
```

---

## 實用範例

### 範例 1：猜數字遊戲
```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int answer = rand() % 100 + 1;  // 1-100 的隨機數
    int guess;
    int attempts = 0;
    
    cout << "=== 猜數字遊戲 ===" << endl;
    cout << "請猜一個 1-100 之間的數字" << endl;
    
    while (true) {
        cout << "請輸入您的猜測: ";
        cin >> guess;
        attempts++;
        
        if (guess == answer) {
            cout << "恭喜！猜對了！答案是 " << answer << endl;
            cout << "您總共猜了 " << attempts << " 次" << endl;
            break;
        } else if (guess > answer) {
            cout << "太大了！再小一點" << endl;
        } else {
            cout << "太小了！再大一點" << endl;
        }
    }
    
    return 0;
}
```

### 範例 2：計算最大公因數和最小公倍數
```cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int gcd, lcm;
    
    cout << "請輸入第一個整數: ";
    cin >> num1;
    cout << "請輸入第二個整數: ";
    cin >> num2;
    
    // 計算最大公因數 (GCD)
    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    
    // 計算最小公倍數 (LCM)
    lcm = (num1 * num2) / gcd;
    
    cout << num1 << " 和 " << num2 << " 的最大公因數是: " << gcd << endl;
    cout << num1 << " 和 " << num2 << " 的最小公倍數是: " << lcm << endl;
    
    return 0;
}
```

### 範例 3：質數判斷
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    
    cout << "請輸入一個正整數: ";
    cin >> n;
    
    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    
    if (isPrime) {
        cout << n << " 是質數" << endl;
    } else {
        cout << n << " 不是質數" << endl;
    }
    
    return 0;
}
```

### 範例 4：印出特定圖案
```cpp
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "請輸入要印出的行數: ";
    cin >> rows;
    
    // 印出數字三角形
    for (int i = 1; i <= rows; i++) {
        // 印出空格
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // 印出數字
        for (int k = 1; k <= i; k++) {
            cout << i;
        }
        cout << endl;
    }
    
    return 0;
}
```

**執行結果（輸入 5）：**
```
    1
   22
  333
 4444
55555
```

---

## 練習題

### 練習 1：計算階乘
設計一個程式，計算使用者輸入數字的階乘。

### 練習 2：費波那契數列
設計一個程式，印出前 n 個費波那契數。

### 練習 3：數字金字塔
設計一個程式，印出如下圖案：
```
    1
   121
  12321
 1234321
123454321
```

### 練習 4：簡單計算機
設計一個程式，可以重複進行加減乘除運算，直到使用者選擇退出。

---

## 總結

1. **for 迴圈**：適用於已知執行次數的情況
2. **while 迴圈**：適用於未知執行次數，但知道終止條件的情況
3. **do-while 迴圈**：適用於至少需要執行一次的情況
4. **巢狀迴圈**：用於處理二維或多維的問題
5. **break**：提前結束迴圈
6. **continue**：跳過當前迭代

選擇適當的迴圈類型可以讓程式更清晰、更有效率！
