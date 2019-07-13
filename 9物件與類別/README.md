#物件與類別
### 結構

![陣列和結構不同之處](pic/pic1.png)

```
定義結構的語法:struct 結構名稱{	資料型別 成員變數1;	資料型別 成員變數1;	資料型別 成員變數1;}

例如:
struct student{	int id;	char *name;	int chinese,math,english;};
```

```
建立結構變數struct 結構名稱 結構變數;

例如:
struct student david;david.id = 99001;david.name=”robert;”david.chinese = 75;david.math = 86;david.english = 90;
```

```
宣告結構變數David時，同時初始化
struct Student david = {99001, "robert", 75, 86, 90};
```

#### 定義結構時同時建立結構變數
```
truct 結構名稱{	資料型別 成員變數1;	資料型別 成員變數1;	資料型別 成員變數1;}結構變數1,結構變數2;

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
	
