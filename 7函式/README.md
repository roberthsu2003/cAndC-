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

```