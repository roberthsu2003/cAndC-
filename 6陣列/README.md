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

	// Name        : array2.cpp
	//建立陣列語法
	//宣告時同時給值
	#include <iostream>
	using namespace std;
	
	int main() {
		
		int scores[3] = {70, 80, 90};
		cout << scores[0] << "," << scores[1] << "," << scores[2];
		return 0;
	}

```
*question fruit_s.cpp
建立一個包含三個元素的字串陣列並設定初始值，代表個人的三種最喜愛的水果名稱，再依序顯示:



顯示=========
我喜歡的第一種水果:xxx
我喜歡的第二種水果:xxx
我喜歡的第三種水果:xxxx
```