# 函式
##　定義和呼叫函式
```
語法:回傳值的資料型別  函式名稱([參數串列]){	程式碼;	[return value]}
```
	//============================================================================
	// Name        : function1.cpp
	//定義函式，顯示「歡迎光臨」。
	
	#include <iostream>
	using namespace std;
	
	void sayHello(){
		cout << "歡迎光臨!" << endl;
	}
	
	int main() {
		sayHello();
		return 0;
	}
	
### 
	// Name        : function2.cpp
	//輸入攝氏溫度，求華氏溫度
	
	#include <iostream>
	using namespace std;
	
	float temperature(int value){
		return 1.8 * value + 32;
	}
	
	int main() {
		cout << "攝氏10度轉華氏溫度=" << temperature(10) << endl;
		cout << "----------------\n";
		int value;
		float result;
		cout << "請輸入攝氏溫度:";
		cin >> value;
		result = temperature(value);
		cout << "華氏溫度=" << result << endl;
		return 0;
	}

```
*question transtemperature.cpp
輸入華氏溫度，求攝密溫度


顯示=====================
請輸入華氏溫度:xx
攝氏溫度=xx.xxxx
```

### 函式原型

	// Name        : function2.cpp
	//輸入攝氏溫度，求華氏溫度
	//function 的原型宣告
	#include <iostream>
	using namespace std;
	
	float temperature(int); //原型宣告
	
	int main() {
		cout << "攝氏10度轉華氏溫度=" << temperature(10) << endl;
		cout << "----------------\n";
		int value;
		float result;
		cout << "請輸入攝氏溫度:";
		cin >> value;
		result = temperature(value);
		cout << "華氏溫度=" << result << endl;
		return 0;
	}
	
	float temperature(int value){
		return 1.8 * value + 32;
	}


### 

	// Name        : function3.cpp
	//輸入攝氏溫度，求華氏溫度
	//function 的原型宣告
	//加上do...while()
	#include <iostream>
	using namespace std;
	
	float temperature(int); //原型宣告
	
	int main() {
		cout << "攝氏10度轉華氏溫度=" << temperature(10) << endl;
		cout << "----------------\n";
		int value;
		float result;
		string runAgain;
		do{
			cout << "請輸入攝氏溫度:";
			cin >> value;
			result = temperature(value);
			cout << "華氏溫度=" << result << endl;
			cout << "程式還要繼續嗎?(輸入N...結束):";
			cin >> runAgain;
		} while(runAgain != "N");
		cout << "程式結束";
		return 0;
	}
	
	float temperature(int value){
		return 1.8 * value + 32;
	}

### return返回呼叫函式
在函式中return會傳回返回值，並會立即結束函式，也可以用以強迫結束函式，返回呼叫的程式
```
return <返回值>
```

	// Name        : return1.cpp
	//自鍵盤輸入一個數字n,顯示1...n。
	
	#include <iostream>
	using namespace std;
	
	void showNum(int n){
		int i = 1;
		while(true){
			if (i > n){
				return;
			}
			cout << i << " ";
			i++;
		}
	
	}
	
	int main() {
		int inputNum;
		cout << "請輸入數字 n:";
		cin >> inputNum;
		showNum(inputNum);
		cout << endl;
		return 0;
	}


### 參數
### 傳值呼叫(call by value)
	// Name        : callByValue1.cpp
	//callByValue
	
	#include <iostream>
	using namespace std;
	int turbo(int);
	
	int main() {
		int speed;
		cout << "請輸入初始速度:";
		cin >> speed;
		speed = turbo(speed);
		cout << "加速後的速度:" << speed << endl;
		return 0;
	}
	int turbo(int speed){
		cout << "加速前速度:" << speed << endl;
		return speed += 10;
	}


### 傳值呼叫(call by reference)
	// Name        : callByReference.cpp
	//callByReference
	
	#include <iostream>
	using namespace std;
	void turbo(int&);
	
	int main() {
		int speed;
		cout << "請輸入初始速度:";
		cin >> speed;
		turbo(speed);
		cout << "加速後的速度:" << speed << endl;
		return 0;
	}
	void turbo(int& speed){
		cout << "加速前速度:" << speed << endl;
		speed += 10;
	}
	
### 傳址呼叫(call by address)
	// Name        : callByAddress.cpp
	//call by address
	
	#include <iostream>
	using namespace std;
	void turbo(int*);
	
	int main() {
		int speed;
		cout << "請輸入初始速度:";
		cin >> speed;
		turbo(&speed);
		cout << "加速後的速度:" << speed << endl;
		return 0;
	}
	void turbo(int* speed){
		cout << "加速前速度:" << *speed << endl;
		*speed += 10;
	}
	
### 陣列參數
	//============================================================================
	// Name        : array11.cpp
	//以陣列當作參數，觀查陣列傳遞變化
	
	#include <iostream>
	using namespace std;
	
	void showArray(int tempary[], int count){
	
		for(int i=0; i<count; i++){
			cout << "any[" << i << "]=" << tempary[i] << " \t";
		}
		cout << "\n\n";
	}
	
	
	void sub2(int tempary[], int count){
		for(int i=0; i<count; i++){
			tempary[i] *= 2;
		}
	}
	
	int main() {
		int ary[] = {212, 328, 765, 986};
		int count = sizeof(ary)/ sizeof(ary[0]);
		cout << "呼叫showArray\n";
		showArray(ary, count);
	
		sub2(ary, count);
	
		showArray(ary, count);
		return 0;
	}
	
```
*question 找出大的數,maxValue.cpp
輸入兩個數字，自定函式找出最大的數


顯示========================
請輸入數值 a = 12
請輸入數值 b = 34
較的的數是 34
```

### 遞迴(Recursive)
	//============================================================================
	// Name        : recoursive.cpp
	//自鍵盤輸入一個數字n, 利用遞迴來計算n階層(n!)
	
	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	
	using namespace std;
	
	double factorial(double n){
		if(n == 0){
			return 1;
		}else{
			return n * factorial(n-1);
		}
	}
	
	int main() {
		double n, total;
		cout << "請輸入數字 n:";
		cin >> n;
		total = factorial(n);
		//cout << n << "!=" << total << endl;
		printf("%f!=%10.0f",n,total);
		return 0;
	}
	
### 可以使用迴圈代替遞迴

```
使用迴圈代替遞迴
double factorial(int n){
	int t = 1;
	for(int i=1; i<=n ; i++){
		t = t * i;
	}
	return t;
}
```

### 多載(overloading)
	//============================================================================
	// Name        : overload1.cpp
	//建立Add()函式多載，分別處理數值和字串相加。
	
	#include <iostream>
	using namespace std;
	int add(int a, int b){
		return a + b;
	}
	
	string add(string a, string b){
		return a + b;
	}
	int main() {
		cout << "add(2,3)=" << add(2, 3) << endl;
		cout << "=======================\n";
		cout << "add(\"Nice\", \"Play\") = " << add("Nice", "Play") << endl;
		return 0;
	}

```
*question Arae.cpp
建立Area()函式多載,分別求正方形和矩形面積。

顯示====================
正方形=100
矩形面積=150


提示
int Area(int a){
	return a*a
}

int Area(int a,intb){
	return a*a
}
```


### 全域變數，區塊變數，區域變數
	//============================================================================
	// Name        : variable1.cpp
	//區域變數,區塊變數,全域變數
	
	#include <iostream>
	using namespace std;
	//全域變數n
	int n;
	void showNum(){
		//value為區域變數
		int value = n;
		cout << "============================" << endl;
		for(int n = value; n >= 1; n--){
			//n是區塊變數
			cout << "區塊變數 n=" << n << endl;
		}
		cout << "=======================" << endl;
		cout << "結束for 巡圈後 全域變數n=" << n << endl;
	}
	int main() {
		cout << "請輸入全域變數 n=";
		cin >> n;
		showNum();
		return 0;
	}

### 靜態變數(static variable)
想要保留區域變數的值，就要使用靜態變數

```
宣告靜態變數的語法為:
static 資料型別 變數名稱 = 初始值;
```

	//============================================================================
	// Name        : static1.cpp
	//觀察靜態變數的存取範圍
	
	
	#include <iostream>
	using namespace std;
	static int total = 0;
	
	void getData(string name){
		static int n = 0;
		n++;
		cout << "第" << n << "位候選人是:" << name << endl;
		total++;
	}
	int main() {
		getData("David");
		getData("Amy");
		getData("Tony");
		cout << "共有" << total << " 位登記" << endl;
		return 0;
	}


### 內建函式
#### 亂數函式rand()

```
rand(), 會傳回大於0，小於32767的整數。使用時通常配合亂數種子srand();
srand(seed);
seed稱為亂數種子，它是unsigned int 資料型別，其值介於(0~(2的32次方-1)，即0~4294967295, 必需改變亂數種子seed, 才能產生不規則的亂數，最簡單就是使用系統時間當亂數種子，使用系統時間必需引用time.h標頭檔
```

```
//============================================================================
// Name        : random1.cpp
//建立一個亂數

#include <iostream>
#include <time.h>
using namespace std;

int main() {
	unsigned int seed = (unsigned int)time(NULL);
	srand(seed);

	for(int i=0; i<5; i++){
		cout << rand() << endl;
	}

	return 0;
}

```

```
建立0<= r <=n (0~n的亂數)
int r = rand() % (n+1);

建立m <= r <= n(含m，n)間的亂數
int r = m + rand() % (n+1 - m); 


產生10~100(含10,100)間的亂數
for(int i=0; i<5; i++)
	cout << 10 + rand()% (100-10+1) << endl;
```

```
擲骰子遊戲亂數模擬 random1.cpp

```
