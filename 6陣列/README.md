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

### 使用迴圈設定陣列
	// Name        : score1.cpp
	//建立一個包含五個元素的整數陣列，讓使用者輸入五位學生的成績，然後計算班級總成績及平均成績
	#include <iostream>
	using namespace std;
	
	int main() {
		const int nums = 5;
		int scores[nums];
		int sum=0;
		double ave;
		for(int i=0;i<nums;i++){
			cout << "請輸入第" << i+1 << "位學的成績";
			cin >> scores[i];
		}
	
		for(int i=0; i<nums; i++){
			sum += scores[i];
		}
	
		ave = (double)sum / nums;
	
		cout << "全班總成績為:" << sum << "分,平均為" << ave << "分\n";
		return 0;
	}

### 

	//============================================================================
	 //Name        : score2.c
	 //建立一個包含五個元素的整數陣列，讓使用者輸入五位學生的成績，然後計算班級總成績及平均成績
	 //使用c的語法
	
	#include <stdio.h>
	#include <stdlib.h>
	
	int main(void) {
		const int nums = 5;
			int scores[nums];
			int sum=0;
			double ave;
			for(int i=0;i<nums;i++){
				//cout << "請輸入第" << i+1 << "位學的成績";
				//cin >> scores[i];
				printf("請輸入第%d位學的成績",i);
				scanf("%d",&scores[i]);
			}
	
			for(int i=0; i<nums; i++){
				sum += scores[i];
			}
	
			ave = (double)sum / nums;
	
			//cout << "全班總成績為:" << sum << "分,平均為" << ave << "分\n";
			printf("全班總成績為:%d分,平均為%.2f分\n",sum,ave);
		return EXIT_SUCCESS;
	}

```

*question sale_s.cpp
小英是白貨公司結帳員,請您為她設計一個程式，先輸入客戶購買的貨品件數，再依此件數宣告陣列來儲存貨品價格，最後計算全部貨品總價

顯示=======
請輸入購買貨品件數:4
請輸入第1件貨品的價格:xxx
請輸入第2件貨品的價格:xxx
請輸入第3件貨品的價格:xxx
請輸入第4件貨品的價格:xxx
全部貨品總價為:xxxxx元
```

### 一維陣列空間大小