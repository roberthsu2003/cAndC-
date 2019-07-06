# 指標
## & 取運算子

```
&變數名稱
```
	//============================================================================
	// Name        : Pointer.cpp
	//宣告變數 double m=5, int n = 10, 顯示變數m,n的值，位址和記憶體大小。
	
	#include <iostream>
	using namespace std;
	
	int main() {
		double m = 5;
		int n = 10;
		cout << "變數m的值=" << m << endl;
		cout << "變數n的值=" << n << endl;
		cout << "變數m的位址" << &m << endl;
		cout << "變數n的位址" << &n << endl;
		cout << "變數m的記憶體=" << sizeof(m) << "Bytes" << endl;
		cout << "變數n的記憶體=" << sizeof(n) << "Bytes" << endl;
		return 0;
	}

### 

	//============================================================================
	// Name        : pointer2.cpp
	//顯示陣列的位址。宣告陣列 int n[3] = {1, 2, 3}，顯示陣列元素的位址。
	
	
	#include <iostream>
	using namespace std;
	
	int main() {
		int n[3] = {1, 2, 3};
		cout << "陣列n的位址=" << n << endl;
		cout << "陣列元素n[0]的位址=" << &n[0] << endl;
		cout << "陣列元素n[1]的位址=" << &n[1] << endl;
		cout << "陣列元素n[2]的位址=" << &n[2] << endl;
	
		return 0;
	}

```
*question 顯示變數n的值和位址 number.cpp
輸入變數n的值後，顯示此變數的值和存放的位址

顯示=============================
請輸入變數 n = 12
變數 n 的值=12
變數 n 的位址=0x7ffeef0805a0
```