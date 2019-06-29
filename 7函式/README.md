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
	
