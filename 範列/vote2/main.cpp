#include <iostream>
using namespace std;

//定義結構
struct student{
    int id;
    string name;
    int chinese,english,math;
};

int main() {
  //建立一筆結構資料  
  struct student stu1;
  //給結構資料值
  stu1.id = 101;
  stu1.name = "周華見";
  stu1.chinese = 78;
  stu1.english = 98;
  stu1.math = 78;
 
 //取出結構資料
  cout << "id:" << stu1.id << endl;
  cout << "name:" << stu1.name << endl;
  cout << "chinese:" << stu1.chinese << endl;
  cout << "english:" << stu1.english << endl;
  cout << "math:" << stu1.math << endl;
  cout << "總分是" << stu1.chinese + stu1.english + stu1.math << endl;  

}
