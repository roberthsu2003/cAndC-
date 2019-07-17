#物件與類別
### 結構

![陣列和結構不同之處](pic/pic1.png)

```
定義結構的語法:
struct 結構名稱{
	資料型別 成員變數1;
	資料型別 成員變數1;
	資料型別 成員變數1;
}

例如:
struct student{
	int id;
	char *name;
	int chinese,math,english;
};
```

```
建立結構變數
struct 結構名稱 結構變數;

例如:
struct student david;
david.id = 99001;
david.name=”robert;”
david.chinese = 75;
david.math = 86;
david.english = 90;
```

```
宣告結構變數David時，同時初始化
struct Student david = {99001, "robert", 75, 86, 90};
```

#### 定義結構時同時建立結構變數
```
truct 結構名稱{
	資料型別 成員變數1;
	資料型別 成員變數1;
	資料型別 成員變數1;
}結構變數1,結構變數2;

```

#### 結構成員的存取
```
使用「.」運算子存取
struct Student david = {99001, "robert", 75, 86, 90};
david.name
david.chinese
david.math
david.english
```


	//============================================================================
	// Name        : struct1.cpp
	//結構的宣告與結構存取
	
	
	#include <iostream>
	using namespace std;
	
	//宣告(定義)結構
	struct Student{
		char name[8];
		int score;
	};
	
	int main() {
		//建立結構實體
		struct Student david = {"David", 90};
		cout << "姓名" << "\t" << "成績" << endl;
		cout << david.name << "\t" << david.score;
		return 0;
	}


### 

	//============================================================================
	// Name        : Rectangle1.cpp
	//宣告Rectangle結構，並建立結構變數Height,Width表示長和寬，輸入矩形的長和寬後計算面積
	
	
	#include <iostream>
	using namespace std;
	struct Rectangle{
		int width;
		int height;
	};
	
	int main() {
		struct Rectangle rec = {0,0};
		cout << "請輸入width:";
		cin >> rec.width;
		cout << "請輸入height:";
		cin >> rec.height;
	
		cout << "矩形的面績是:" << rec.width * rec.height << endl;
		return 0;
	}

## 物件與類別
```
class 類別名稱{
	private:
		[static] 資料型別 成員;
	public:
		[static] 資料型別 成員;
	protected:
		[static] 資料型別 成員;
};
```
![自行定義的類別](pic/i2.JPG)
	//============================================================================
	// Name        : FirstClass1.cpp
	//自行定義的類別
	
	
	using namespace std;
	//定義class
	class Person{
		public:
		int tall;
		string name;
		void walk(int var){
			cout << name << "每小時可跑" << var << "公里" << endl;
		}

	};


	int main() {
		Person david;
		david.tall = 180;
		david.name = "David";
		cout << david.name << " 身高=" << david.tall << endl ;
		david.walk(15);

		Person robert;
		robert.tall = 183;
		robert.name = "Robert";
		cout << robert.name << " 身高=" << robert.tall << endl;
		robert.walk(20);
		return 0;
	}

	//實作arduino https://single9.github.io/arduino/arduino_basic.html
