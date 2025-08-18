# 指標 (Pointers)

## 目錄
1. [基本概念](#基本概念)
2. [取址運算子](#取址運算子)
3. [指標變數](#指標變數)
4. [指標與陣列](#指標與陣列)
5. [指標與函式](#指標與函式)
6. [動態記憶體配置](#動態記憶體配置)
7. [實作練習](#實作練習)

---

## 基本概念

指標是 C++ 中一個重要的概念，它允許我們直接操作記憶體位址。指標變數儲存的內容是記憶體位址，而不是一般的數值。

### 為什麼需要指標？
- 直接操作記憶體位址
- 提高程式執行效率
- 實現動態記憶體配置
- 傳遞函式參數的參考

---

## 取址運算子

### `&` 運算子
`&` 運算子用來取得變數的記憶體位址。

```c++
int n = 10;
cout << "變數 n 的值 = " << n << endl;
cout << "變數 n 的位址 = " << &n << endl;
```

### 陣列與記憶體位址
陣列變數本身儲存的就是記憶體位址。

```c++
int arr[3] = {1, 2, 3};
cout << "陣列 arr 的位址 = " << arr << endl;
cout << "陣列元素 arr[0] 的位址 = " << &arr[0] << endl;
cout << "陣列元素 arr[1] 的位址 = " << &arr[1] << endl;
cout << "陣列元素 arr[2] 的位址 = " << &arr[2] << endl;

// 使用指標運算
cout << "arr + 0 的位址 = " << arr + 0 << endl;
cout << "arr + 1 的位址 = " << arr + 1 << endl;
cout << "arr + 2 的位址 = " << arr + 2 << endl;
```

**執行結果：**
```
陣列 arr 的位址 = 0x7ffeef0805a0
陣列元素 arr[0] 的位址 = 0x7ffeef0805a0
陣列元素 arr[1] 的位址 = 0x7ffeef0805a4
陣列元素 arr[2] 的位址 = 0x7ffeef0805a8
```

---

## 指標變數

### 指標變數的宣告
```c++
// 基本宣告
資料型別 *指標變數名稱;

// 範例
int *p;        // 整數指標
double *dp;    // 雙精度浮點數指標
char *cp;      // 字元指標
```

### 指標變數的初始化
```c++
int n = 10;
int *p = &n;    // 指標 p 指向變數 n 的位址
```

### 指標運算子 `*`
`*` 符號有兩個用途：
1. **宣告指標變數**：`int *p;`
2. **取用指標指向的值**：`*p`

```c++
int n = 10;
int *p = &n;

cout << "變數 n 的值 = " << n << endl;        // 10
cout << "變數 n 的位址 = " << &n << endl;     // 0x7ffeef0805a0
cout << "指標 p 的值 = " << p << endl;        // 0x7ffeef0805a0
cout << "指標 p 的位址 = " << &p << endl;     // 0x7ffeef0805b0
cout << "指標 p 指向的值 = " << *p << endl;   // 10
```

### 透過指標修改值
```c++
int n = 10;
int *p = &n;

cout << "修改前：n = " << n << endl;  // 10
*p = 20;                              // 透過指標修改值
cout << "修改後：n = " << n << endl;  // 20
```

### 指標可以改變指向
```c++
int n = 10;
int m = 20;
int *p;

p = &n;  // 指標 p 指向變數 n
cout << "*p = " << *p << endl;  // 10

p = &m;  // 指標 p 改為指向變數 m
cout << "*p = " << *p << endl;  // 20
```

---

## 指標與陣列

### 一維陣列與指標
陣列元素可以用兩種方式存取：

```c++
int array[] = {1, 2, 3, 4, 5};

// 方法 1：使用陣列索引
cout << "array[1] = " << array[1] << endl;           // 2
cout << "&array[1] = " << &array[1] << endl;         // 位址

// 方法 2：使用指標運算
cout << "*(array + 1) = " << *(array + 1) << endl;   // 2
cout << "(array + 1) = " << (array + 1) << endl;     // 位址
```

### 指標變數存取陣列
```c++
int array[] = {10, 20, 30};
int *ptr = array;  // 指標指向陣列開頭

// 使用指標存取陣列元素
for (int i = 0; i < 3; i++) {
    cout << *(ptr + i) << " ";
}
cout << endl;
```

### 字元陣列與指標
```c++
// 字串指標（可改變指向）
const char* str1 = "Hello";
char str2[] = "World";

// 使用指標存取字元
for (int i = 0; i < 5; i++) {
    cout << "str1[" << i << "] = " << str1[i] << endl;
}

// 指標可以改變指向
str1 = str2;  // 合法
// str2 = str1;  // 不合法，陣列位址不能改變
```

---

## 指標與函式

### Call by Value vs Call by Reference

#### Call by Value（傳值呼叫）
```c++
void add(int x, int y, int result) {
    result = x + y;  // 只改變區域變數
}

int main() {
    int a = 10, b = 20, sum = 0;
    add(a, b, sum);
    cout << "sum = " << sum << endl;  // 仍然是 0
    return 0;
}
```

#### Call by Reference（傳參考呼叫）
```c++
void add(int x, int y, int &result) {
    result = x + y;  // 直接修改原變數
}

int main() {
    int a = 10, b = 20, sum = 0;
    add(a, b, sum);
    cout << "sum = " << sum << endl;  // 30
    return 0;
}
```

#### Call by Address（傳位址呼叫）
```c++
void add(int x, int y, int *result) {
    *result = x + y;  // 透過指標修改原變數
}

int main() {
    int a = 10, b = 20, sum = 0;
    add(a, b, &sum);
    cout << "sum = " << sum << endl;  // 30
    return 0;
}
```

### 指標參數的應用

#### 交換兩個數值
```c++
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "交換前：x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "交換後：x = " << x << ", y = " << y << endl;
    return 0;
}
```

#### 陣列參數
```c++
void showArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;  // 將每個元素乘以 2
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    showArray(array, 5);
    modifyArray(array, 5);
    showArray(array, 5);
    return 0;
}
```

---

## 動態記憶體配置

### 為什麼需要動態記憶體？
- 程式執行時才知道需要多少記憶體
- 避免浪費記憶體空間
- 實現更靈活的資料結構

### `new` 運算子
```c++
// 配置單一變數
int *p = new int;        // 未初始化
int *p = new int(10);    // 初始化為 10

// 配置陣列
int *arr = new int[5];   // 配置 5 個整數的空間
```

### `delete` 運算子
```c++
// 釋放單一變數
delete p;

// 釋放陣列
delete[] arr;
```

### 完整範例
```c++
int main() {
    // 動態配置記憶體
    int *n = new int();
    int *m = new int();
    
    cout << "請輸入 n 的值：";
    cin >> *n;
    
    cout << "請輸入 m 的值：";
    cin >> *m;
    
    int sum = *n + *m;
    cout << "n 和 m 的總和為：" << sum << endl;
    
    // 釋放記憶體
    delete n;
    delete m;
    
    return 0;
}
```

### 動態陣列
```c++
int main() {
    int size;
    cout << "請輸入陣列大小：";
    cin >> size;
    
    // 動態配置陣列
    int *arr = new int[size];
    
    // 輸入陣列元素
    cout << "請輸入 " << size << " 個數值：";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    // 顯示陣列元素
    cout << "陣列元素：";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // 釋放記憶體
    delete[] arr;
    
    return 0;
}
```

---

## 實作練習

### 練習 1：指標基本操作
```c++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "請輸入變數 n = ";
    cin >> n;
    
    cout << "變數 n 的值 = " << n << endl;
    cout << "變數 n 的位址 = " << &n << endl;
    
    return 0;
}
```

### 練習 2：指標加法
```c++
#include <iostream>
using namespace std;

int add(int* x, int* y) {
    return *x + *y;
}

int main() {
    int x, y;
    cout << "請輸入變數 x = ";
    cin >> x;
    cout << "請輸入變數 y = ";
    cin >> y;
    
    int sum = add(&x, &y);
    cout << x << " + " << y << " = " << sum << endl;
    
    return 0;
}
```

### 練習 3：陣列與指標
```c++
#include <iostream>
using namespace std;

int main() {
    int n[] = {1, 2, 3};
    int *ptr = n;
    int sum = 0;
    
    // 使用陣列索引求總和
    for (int i = 0; i < 3; i++) {
        sum += n[i];
    }
    cout << "以陣列元素求總和：總和 = " << sum << endl;
    
    // 使用指標求總和
    sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += *(n + i);
    }
    cout << "以指標求總和：總和 = " << sum << endl;
    
    return 0;
}
```

### 練習 4：字串倒印
```c++
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char *str = new char[100];
    
    cout << "請輸入字串：";
    cin >> str;
    
    int len = strlen(str);
    cout << "字串倒印 = ";
    
    for (int i = len - 1; i >= 0; i--) {
        cout << *(str + i);
    }
    cout << endl;
    
    delete[] str;
    return 0;
}
```

---

## 重要提醒

1. **指標初始化**：指標宣告後必須指向有效的記憶體位址
2. **記憶體洩漏**：使用 `new` 配置的記憶體必須用 `delete` 釋放
3. **空指標**：避免存取未初始化的指標
4. **陣列邊界**：小心不要超出陣列範圍
5. **指標運算**：理解指標加減法的意義

---

## 總結

指標是 C++ 中強大的工具，掌握指標可以：
- 直接操作記憶體
- 提高程式效率
- 實現複雜的資料結構
- 靈活地傳遞函式參數

記住：**指標就是記憶體位址**，理解這個概念是掌握指標的關鍵！
