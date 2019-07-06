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

