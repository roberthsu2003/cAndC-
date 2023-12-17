## 純值運算

```c
#include <stdio.h>

int main(void) {
  printf("這是c語言的課程!\n");
  printf("Hello! C語言\n");
  return 0;
}

```

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


```c
#include <stdio.h>

int main(void) {
  printf("%d + %d = %d\n", 5, 5, 5 + 5);
  printf("%.2lf + %.2lf = %.2lf\n", 5.0, 5.0, 5.0 + 5.0);
  printf("%d + %.2lf = %.2lf\n", 5, 10.0, 5 + 10.0);
	printf("%d / %d = %d\n", 3, 2, 3 / 2);// int / int
	printf("%d / %d = %.2lf\n", 3, 2, 3 / 2.0);//int / dobule,自動轉換
	printf("%d / %d = %.2lf\n", 3, 2, 3 / (double)2);//強制轉換
  return 0;
}
```

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