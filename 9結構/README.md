# 物件與類別
### 結構

![陣列和結構不同之處](pic/pic1.png)

```c++
定義結構的語法:
struct 結構名稱{
	資料型別 成員變數1;
	資料型別 成員變數2;
	資料型別 成員變數3;
};

例如:
struct student{
	int id;
	char *name;
	int chinese,math,english;
};
```

```c++
建立結構變數
struct 結構名稱 結構變數;

例如:
struct student david;
david.id = 99001;
david.name="robert";
david.chinese = 75;
david.math = 86;
david.english = 90;
```

```c++
宣告結構變數David時，同時初始化
struct Student david = {99001, "robert", 75, 86, 90};
```

#### 定義結構時同時建立結構變數
```c++
struct 結構名稱{
	資料型別 成員變數1;
	資料型別 成員變數1;
	資料型別 成員變數1;
}結構變數1,結構變數2;

```

#### 結構成員的存取
```c++
使用「.」運算子存取
struct Student david = {99001, "robert", 75, 86, 90};
david.name
david.chinese
david.math
david.english
```


```c++
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
```
	
###
```c++
//============================================================================
// Name        : struct2.cpp
//結構的宣告與結構存取



#include <iostream>
using namespace std;

typedef struct Student{
	string name;
	int score;
} Student;

int main() {


  Student stus[3] = {{"robert", 94},{"david", 91}, {"alice", 94}};

  int stuCount = sizeof(stus) / sizeof(stus[0]);
  for(int i=0; i<stuCount; i++){
	  cout << "第" << i+1 << "位學生是" << stus[i].name << "分數是" << stus[i].score << endl;
  }


}
```

### 

```c++
//============================================================================
// Name        : struct3.cpp
//結構的宣告與結構存取



#include <iostream>
using namespace std;

typedef struct Student{
	string name;
	int scores[5];
} Student;

int main() {


  Student stus[3] = {{"robert", {78, 98, 78, 63, 83}},{"david", {78, 98, 58, 73, 73}}, {"alice", {68, 98, 74, 63, 82}}};

  int stuCount = sizeof(stus) / sizeof(stus[0]);
  for(int i=0; i<stuCount; i++){
	  int sum = 0;
	  for(int j=0; j<5; j++){
	  sum += stus[i].scores[j];
	  }
	  cout << "第" << i+1 << "位學生是" << stus[i].name << "總分數是" << sum << endl;
  }


}
```


### 

```c++
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
```

```c++
//建立50個學生，計算平均和總分和排名
#include <iostream>
#include "data.h"
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	srand(time(NULL));
	int studentCount = 50;
	Student students[studentCount];
	
	for(int i=0;i<studentCount;i++){
		students[i] = createStudent(i+1);
	}
	sortStudent(students,studentCount);
	cout << "姓名\t國文\t英文\t數學\t總分\t平均\t名次" << endl;

	for(int i=0; i<studentCount; i++){
		Student s = students[i];
		cout << s.name << "\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << "\t\t" << sum(s) << "\t\t";

		printf("%.2f\n", average(s));
	}
	
}


data.h

#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

//建立一個學生
Student createStudent(int);

//計算學生總分
int sum(Student);

//計算學生平均
float average(Student);

//排序
void sortStudent(Student*,int);


data.cpp
#include "data.h"

Student createStudent(int num){
	Student s;
	s.name = "學生" + to_string(num);
	s.chinese = 50 + (rand() % 51);
	s.english = 50 + (rand() % 51);
	s.math = 50 + (rand() % 51);
	return s;
}

int sum(Student s){
	return s.chinese + s.english + s.math;
}

float average(Student s){
	return sum(s) / 3.0;
}

void sortStudent(Student s[],int nums){
	Student temp;
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (sum(s[i]) < sum(s[j])){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}
```

