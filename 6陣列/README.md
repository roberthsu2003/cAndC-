# 陣列
## 一維陣列初值設定
```
資料型別 陣列名稱[陣列長度 n];
陣列名稱[0] = 值1;
陣列名稱[1] = 值2;
........
```

	// Name        : array1.cpp
	//建立陣列語法
	
	#include <iostream>
	using namespace std;
	
	int main() {
		int scores[3];
		scores[0] = 70;
		scores[1] = 80;
		scores[2] = 90;
		cout << scores[0] << "," << scores[1] << "," << scores[2];
		return 0;
	}

### 宣告陣列變數同時設定各元素初始值的語法為:

```
資料型別 陣列名稱[n] = {值1,值2,值3,......,值n}
```
