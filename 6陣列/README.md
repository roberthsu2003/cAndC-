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

```
*question
試使用陣列配合for迴圈，找尋陣列中最小值的程式，程式執行時會要求連續輸入5個數值，輸入完畢會顯示所輸入5個數值中的最小值
```

	### 一維陣列空間大小
	
	// Name        : sizeof.cpp
	//建立一個包含五個元素的整數陣列,使用sizeof計算陣列元素的個數,再使用for迴圈顯示陣列內容。
	#include <iostream>
	using namespace std;
	
	int main() {
		int n[]={1,3,5,7,9};
		int totalSize = sizeof(n);
		int oneSize = sizeof(n[0]);
		int counts = totalSize / oneSize;
		cout << "陣列的大小為:" << totalSize << ",一個元素的大小是" << oneSize << ",陣列的數量是" << counts;
		return 0;
	}


### 陣列的應用:泡沫排序

	// Name        : bubble.cpp
	//任由使用者輸入任意個數的數值序列,程式會將此數值序列由小到大排序後顯示
	#include <iostream>
	using namespace std;
	
	int main() {
		int nums;
		cout << "請輸入要排序的數值個數:";
		cin >> nums;
		float array[nums],temp;
	
		for(int i=0; i<nums; i++){
			cout << "請輸入第" << i+1 << "個數值:";
			cin >> array[i];
		}
	
		cout << "排序前:\n";
		for (int i=0; i < nums; i++){
			cout << array[i] << " ";
		}
	
		//陣列排序
		for(int i=0; i < nums-1; i++){
			for(int j=i+1; j < nums; j++){
				if (array[i] > array[j]){
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
	
		cout << "\n";
		cout << "排序後:\n";
			for (int i=0; i < nums; i++){
				cout << array[i] << " ";
			}
	
		return 0;
	}

```
*question bubble_s.cpp
由大到小的排序

顯示==========
排序前數值序列:
20 45 98 23 85
由大到小的排序後:
98 85 45 23 20
```

### 陣列的應用:循序搜尋
	// Name        : sequential.cpp
	//百貨公司舉辦週年抽獎活動，將顧客的抽獎編號及姓名分別儲存於陣列中，使用者輸入編號，程式會搜尋出該編號的姓名並顯示。若查詢不到也會顯示無此編號的訊息
	
	#include <iostream>
	using namespace std;
	
	int main() {
		int nums[] = {256, 731, 943, 389, 142, 645, 829, 945, 371, 418};
		string names[] = {"stu1","stu2","stu3","stu4","stu5","stu6","stu7","stu8","stu9","stu10"};
		int inputNum;
		int i;
		int n = sizeof(nums) / sizeof(nums[0]);
		bool isfound = false;
		cout << "請輸入中獎者的編號";
		cin >> inputNum;
		for(i=0; i<n ; i++){
			if(nums[i] == inputNum){
				isfound = true;
				break;
			}
		}
	
		if(isfound == true){
			cout << "中獎者的姓名為:" << names[i];
		}else{
			cout << "無此中獎號碼!";
		}
	
		cout << "(共比對" << i+1 << "次)\n\n";
		return 0;
	}
