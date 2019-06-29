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

