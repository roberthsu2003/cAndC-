# 前端處理程式

### 列舉

列舉 (enum 或 enumeration) 是另一種複合型別，主要是用在宣告僅有少數值的型別，像是一星期內的日期 (day of week) 或是一年內的月份等。

```c
enum direction {
    North,
    South,
    East,
    West
};

int main(void)
{
    enum direction dest = East;
    
    return 0;
```

列舉同樣可用 typedef 簡化型別名稱，如下例：

```c
typedef enum direction Direction;

enum direction {
    North,
    South,
    East,
    West
};

int main(void)
{
    Direction dest = East;
    
    return 0;
}
```

```c
enum DAY            /* Defines an enumeration type    */
{
    saturday,       /* Names day and declares a       */
    sunday = 0,     /* variable named workday with    */
    monday,         /* that type                      */
    tuesday,
    wednesday,      /* wednesday is associated with 3 */
    thursday,
    friday
};

enum DAY today = wednesday;
```

### 前端處理程式

```c++
#define


/*========================================

#include <iostream>
using namespace std;

#define RATE 32.78

int main() {
  double us, nt;
  cout << "請輸入您有多少美金:";
  cin >> us;
  nt = us * RATE;
  cout << "您有" << nt << "台幣" << endl;
}
```

```c++
#include <iostream>
//美金換台幣的匯率(動態的marco)
#define RATE(x) (x) * 32.78
using namespace std;

int main() {
	double us,nt;
	cout << "請輸入您有多少美金:";
	cin >> 	us;
	nt = RATE (us+1);
	cout << "您有" << nt << "台幣" << endl;
}
```

```c++

#include <iostream>
//marco 巨集
using namespace std;
//#define SQUARE(x) x * x
#define SQUARE(x) (x) * (x)
int main() {
	int s, result;
	cout << "請輸入數字:";
	cin >> s;
	result = SQUARE(s);
	cout << s << "的平方為:" << result << endl;

	result = SQUARE(s+1);
	//result = (5+1) * (5+1);
	cout << s+1 << "的平方為:" << result << endl;	
}

```

```c++
#define Min(x, y) (x)>=(y)?(y):(x)

void tryDefineMin()
{
int a=3, b=8;
  printf("Min(%d, %d)= %d", a, b, Min(a, b));
}
// Min(a, b) => (a)>=(b)?(b):(a)
```

```c++
//前端處理程式
#ifdef ... #else ... #endif

//==================================
#include <iostream>
using namespace std;

#define MAC

#ifdef MAC
#define OS "MAC_OS_VERSION_10_0"
#else
#define OS "Window10"
#endif

int main() {
  cout << OS << endl;
}
```

```c++
//前端處理程式
#undef

#include <iostream>
using namespace std;

#define MAC
#undef MAC

#ifdef MAC
#define OS "MAC_OS_VERSION_10_0"
#else
#define OS "Window10"
#endif

int main() {
  cout << OS << endl;
}
```

```c++
//前端處理程式
#ifndef

//========================================

#include <iostream>
using namespace std;

#ifndef MAC

#define OS "Window10"

#else

#define OS "MAC_OS_VERSION"

#endif

int main() {
  cout << OS << endl;
}
```

```c++
//typedef

typedef int INTEGER;

//=============================
#include <iostream>
using namespace std;

typedef int INTEGER;
typedef int* POINTER;

int main() {
  INTEGER x = 100, y=200;
  POINTER ptr = &x;
  cout << x << "+" << y << "=" << x+y << endl;
  cout << "*ptr=" << *ptr; 
}

```


