// typedef_examples.cpp - typedef 使用範例
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 基本型別重新定義
typedef int INTEGER;
typedef float REAL;
typedef double DOUBLE;
typedef char CHARACTER;
typedef string STRING;

// 指標型別定義
typedef int* IntPtr;
typedef char* CharPtr;
typedef double* DoublePtr;

// 陣列型別定義
typedef int IntArray[100];
typedef char CharArray[256];

// 函數指標型別定義
typedef int (*MathFunction)(int, int);
typedef void (*PrintFunction)(const string&);

// 結構型別定義
typedef struct {
    int x, y;
} Point;

typedef struct {
    STRING name;
    INTEGER age;
    REAL height;
    REAL weight;
} Person;

typedef struct {
    Point topLeft;
    Point bottomRight;
} Rectangle;

// 複雜資料結構
typedef vector<INTEGER> IntVector;
typedef vector<STRING> StringVector;
typedef vector<Person> PersonVector;

// 數學運算函數
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int subtract(int a, int b) {
    return a - b;
}

// 列印函數
void printMessage(const string& msg) {
    cout << "訊息: " << msg << endl;
}

void printWarning(const string& msg) {
    cout << "警告: " << msg << endl;
}

// 幾何計算函數
REAL calculateDistance(Point p1, Point p2) {
    INTEGER dx = p2.x - p1.x;
    INTEGER dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

INTEGER calculateRectangleArea(Rectangle rect) {
    INTEGER width = rect.bottomRight.x - rect.topLeft.x;
    INTEGER height = rect.bottomRight.y - rect.topLeft.y;
    return width * height;
}

// 人員管理函數
void printPerson(const Person& person) {
    cout << "姓名: " << person.name << endl;
    cout << "年齡: " << person.age << " 歲" << endl;
    cout << "身高: " << person.height << " 公分" << endl;
    cout << "體重: " << person.weight << " 公斤" << endl;
    
    REAL bmi = person.weight / ((person.height / 100.0) * (person.height / 100.0));
    cout << "BMI: " << bmi << endl;
}

void printPersonVector(const PersonVector& people) {
    cout << "=== 人員清單 ===" << endl;
    for (size_t i = 0; i < people.size(); i++) {
        cout << "\n第 " << (i + 1) << " 位:" << endl;
        printPerson(people[i]);
    }
}

int main() {
    cout << "=== typedef 使用範例 ===" << endl << endl;
    
    // 基本型別使用
    INTEGER x = 100, y = 200;
    REAL pi = 3.14159f;
    STRING message = "Hello, typedef!";
    
    cout << "基本型別:" << endl;
    cout << "INTEGER x = " << x << ", y = " << y << endl;
    cout << "REAL pi = " << pi << endl;
    cout << "STRING message = " << message << endl << endl;
    
    // 指標使用
    IntPtr ptr = &x;
    cout << "指標使用:" << endl;
    cout << "IntPtr ptr 指向的值: " << *ptr << endl;
    cout << "ptr 的位址: " << ptr << endl << endl;
    
    // 函數指標使用
    cout << "函數指標使用:" << endl;
    MathFunction mathOp;
    
    mathOp = add;
    cout << "add(10, 5) = " << mathOp(10, 5) << endl;
    
    mathOp = multiply;
    cout << "multiply(10, 5) = " << mathOp(10, 5) << endl;
    
    mathOp = subtract;
    cout << "subtract(10, 5) = " << mathOp(10, 5) << endl;
    
    PrintFunction printFunc = printMessage;
    printFunc("這是透過函數指標呼叫的訊息");
    
    printFunc = printWarning;
    printFunc("這是警告訊息");
    cout << endl;
    
    // 結構使用
    cout << "結構使用:" << endl;
    Point p1 = {0, 0};
    Point p2 = {3, 4};
    
    cout << "點 1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "點 2: (" << p2.x << ", " << p2.y << ")" << endl;
    cout << "兩點距離: " << calculateDistance(p1, p2) << endl;
    
    Rectangle rect = {{1, 1}, {6, 4}};
    cout << "矩形面積: " << calculateRectangleArea(rect) << endl << endl;
    
    // 複雜資料結構使用
    cout << "複雜資料結構:" << endl;
    IntVector numbers = {1, 2, 3, 4, 5};
    StringVector names = {"Alice", "Bob", "Charlie"};
    
    cout << "整數向量: ";
    for (INTEGER num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "字串向量: ";
    for (const STRING& name : names) {
        cout << name << " ";
    }
    cout << endl << endl;
    
    // 人員管理系統
    PersonVector people = {
        {"張三", 25, 175.0f, 70.0f},
        {"李四", 30, 168.0f, 65.0f},
        {"王五", 28, 180.0f, 75.0f}
    };
    
    printPersonVector(people);
    
    // 陣列型別使用
    cout << "\n=== 陣列型別使用 ===" << endl;
    IntArray scores;
    for (int i = 0; i < 10; i++) {
        scores[i] = (i + 1) * 10;
    }
    
    cout << "成績陣列: ";
    for (int i = 0; i < 10; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
    
    return 0;
}