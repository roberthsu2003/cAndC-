# 資料型別和變數
```
宣告變數
資料型別 變數名稱 [ = 初始值]
```

```
//沒有初始值
int intA;
char a;
```

```
//有初始值
int intA = 100;
char a = 's';
```

### 變數的命名規則
```
第一個字元，只可以是英文字
第一個字元符號，只可以是_
```

### 數值型別
數值型別 | 記憶體大小 | 範圍
------|------ | ---
char | 1 Byte | -128 ~ 127
unsigned char | 1 Byte | 0 ~ 255
short | 2 Byte | -32768 ~ 32767
unsigned short | 2 Byte | 0 ~ 65535	
int | 4 Byte | -2147483648 ~ 2147483647
unsigned int | 4 Byte | 0 ~ 4294967295
long | 4 Byte | -2147483648 ~ 2147483647
unsigned long | 4 Byte | 0 ~ 4294967295
float | 4 Byte | 6,7位數
double | 8 Byte | 15位數


```
特字元
\'
\"
\n 換行
\t tab
```

```
*question
請輸出:
姓名      座號      電話
李振聲    11        0229435437
張四聲    13        0229435467
```

### 字串型別(string)
```
string str1;
string str2 = "這是字串";
string str3 = "這是 \" C++ \",非常簡單";

```

### 布林型別(bool)
```
bool bolA = true;
bool bolB = false;

true = 1
false = 0

1,2,3...代表true
0 ...代表false
``` 


### 型別轉換
#### 型別自動轉換
```
運算式中若含有不同的型別，編譯器會自動以值域較大的型別為轉換依據

float PI = 3.14149;
int radius = 10;
//PI * radius * radius 自動轉換為float
cout << "圓面積=" << PI * radius * radius; 
```

```
如果是指字式，編譯器會自動將=右邊的資料型別轉換為左邊的資料型別。

int area;
area = PI * radius * radius; //自動由flaot轉換為int
cout << "area =" << area;
```

```
short a = 3000;
int b;
b = a; //可以小轉大
char c;
c = b; //大轉小，資料會遺失
```

### 強制轉換
