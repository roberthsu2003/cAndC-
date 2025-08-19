## 純值運算（最簡單入門）

以最基礎的「印出純文字」與「四則運算」為主，帶你快速上手 C 語言的輸出與基本計算。

### 目錄
- [課程目標](#課程目標)
- [快速開始：印出文字](#快速開始印出文字)
- [基本四則運算](#基本四則運算)
- [型別與格式化輸出](#型別與格式化輸出)
 - [常用格式化速查](#常用格式化速查)
- [型別轉換：自動與強制](#型別轉換自動與強制)
- [實作：梯形面積](#實作梯形面積)
- [常見錯誤](#常見錯誤)
- [練習題](#練習題)
- [編譯與執行](#編譯與執行)

### 課程目標
- 會用 `printf` 輸出文字與數值
- 了解整數 `int` 與浮點數 `double` 的基本差異
- 能完成加減乘除與簡單實作題

### 快速開始：印出文字
```c
#include <stdio.h>

int main(void) {
  printf("這是c語言的課程!\n");
  printf("Hello! C語言\n");
  return 0;
}

```

### 基本四則運算
```c
#include <stdio.h>

int main(void) {
  printf("%d+%d=%d\n",5,10,5+10);
	printf("%d*%d=%d\n",125,97,125*97);
	printf("5/5=%d\n",5/5);
	printf("5-5=%d\n",5-5);
  return 0;
}
```

### 型別與格式化輸出
以 `printf` 的格式化字串控制輸出形式：
- `%d`: 以十進位整數輸出
- `%.2lf`: 以小數點後 2 位的浮點數輸出

```c
#include <stdio.h>

int main(void) {
  printf("%d + %d = %d\n", 5, 5, 5 + 5);
  printf("%.2lf + %.2lf = %.2lf\n", 5.0, 5.0, 5.0 + 5.0);
  printf("%d + %.2lf = %.2lf\n", 5, 10.0, 5 + 10.0);
  return 0;
}
```

### 常用格式化速查
- `printf` 常見：
  - **整數**：`%d`（有號），`%u`（無號），`%o`（八進位），`%x/%X`（十六進位）
  - **浮點數**：`%f`（固定小數）、`%e/%E`（科學記號）、`%g/%G`（自動選 f 或 e）
  - **字元/字串**：`%c`、`%s`
  - **指標**：`%p`
  - **輸出百分號**：`%%`

- `scanf` 常見（注意：字串要提供足夠緩衝區）：
  - **整數**：`%d`、`%u`、`%o`、`%x`
  - **浮點數**：`%f`（對應 `float*`）、`%lf`（對應 `double*`）
  - **字元/字串**：`%c`、`%s`（遇空白停止）

- 寬度、對齊、精度：
  - `%-8d`：欄位寬度 8、靠左對齊
  - `%08d`：欄位寬度 8、前面補 0
  - `%10.2f`：欄位寬度 10、小數 2 位
  - `%.3s`：字串最多輸出 3 個字元

示例：
```c
#include <stdio.h>

int main(void) {
  int n = 255;
  double pi = 3.14159;
  char ch = 'A';
  char s[] = "Hello";

  // printf 常見用法
  printf("d=%d, u=%u, o=%o, x=%x, X=%X\n", n, n, n, n, n);
  printf("f=%.2f, e=%.3e, g=%g\n", pi, pi, pi);
  printf("c=%c, s=%s, percent=%%\n", ch, s);
  printf("width: '%8d', left: '%-8d', zero: '%08d'\n", n, n, n);
  printf("string precision: '%.3s'\n", s);

  // scanf 常見用法（示意，不實際讀入）
  // int a; unsigned b; double d; char c; char buf[16];
  // scanf("%d %u %lf %c %15s", &a, &b, &d, &c, buf);
  return 0;
}
```

### 型別轉換：自動與強制
- 自動轉換：運算中若同時有整數與浮點數，會自動提升為浮點數
- 強制轉換：使用 `(double)` 或 `(int)` 強制改變運算時的型別

```c
#include <stdio.h>

int main(void) {
	printf("%d / %d = %d\n", 3, 2, 3 / 2);              // int / int，整數除法
	printf("%d / %d = %.2lf\n", 3, 2, 3 / 2.0);        // int / double，自動轉換
	printf("%d / %d = %.2lf\n", 3, 2, 3 / (double)2);  // 強制轉換
  return 0;
}
```

### 實作：梯形面積
公式：`(上底 + 下底) * 高 / 2`

不使用變數，直接帶值計算：
```c
#include <stdio.h>
//求梯型面積(上底+下底) * 高 / 2
//上底:2
//下底:3
//高:3

int main(void) {
  printf("求梯型面積(上底+下底) * 高 / 2\n");
  printf("上底:2\n");
  printf("下底:3\n");
  printf("高:3\n");
  printf("面積是:%.2lf\n", (2 + 3) * 3 / 2.0);       //自動轉換
  printf("面積是:%.2lf\n", (2 + 3) * 3 / (double)2); //強制轉換
  return 0;
}
```

使用變數讓程式更易讀：
```c
#include <stdio.h>

int main(void) {
	printf("求梯型面積(上底+下底) * 高 / 2\n");
	printf("上底:2\n");
	printf("下底:3\n");
	printf("高:3\n");
	int top = 2;//建立變數同時給值
	int bottom = 3;
	int height = 3;	
	printf("面積是:%.2lf\n", (top + bottom) * height / 2.0);       //自動轉換
	printf("面積是:%.2lf\n", (top + bottom) * (double)height / 2); //強制轉換
}
```

### 常見錯誤
- 整數除法被截斷：`3/2` 會得到 `1` 而非 `1.5`
- 格式化不匹配：用 `%d` 輸出 `double` 或用 `%.2lf` 輸出 `int`
- 漏換行：記得結尾 `\n`，輸出更整齊

### 練習題
1. 修改「梯形面積」程式，讓使用者輸入上底、下底與高，再計算面積
2. 印出 `125 % 97` 的結果，並說明 `%` 的意義
3. 嘗試輸出 `1/3` 與 `1/3.0`，觀察差異

### 編譯與執行
- 編譯：`gcc main.c -o main`
- 執行：`./main`