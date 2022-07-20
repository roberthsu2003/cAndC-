# 11 Vectors
- vector可以儲存多個值
- 必需是相同資料類型
- 使用索引

## 11_1 建立和使用Vectors

### 1. 使用前2種匯入方式

```c++
#include <vector>
```

```c++
using namespace std;
```

### 2. 4種建立vector的方法

#### 建立空的vec_a

```c++
vector<int> vec_a;
```

#### 建立特定長度的vector

- 建立長度10,預設每個元素值為0

```c++
vector<int> vec_c(10)
```

#### 指定預設元素值

- 建立長度為10,預設值為8

```c++
vector<int> vec_c(10,8)
```

#### 直接給值
- 注意是{}(大括號)

```c++
vector<int> vec_d{10, 20, 30, 40, 50}
```

### 使用vector

```c++
vector<int> list(3);
list[0] = 5;
list[1] = -3;
list[2] = 12;
cout << list[1] << endl;
```