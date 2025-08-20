// macro_examples.cpp - 巨集使用範例
#include <iostream>
#include <cmath>
using namespace std;

// 數學常數
#define PI 3.14159265359
#define E 2.71828182846

// 基本運算巨集
#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) <= (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))

// 幾何計算巨集
#define CIRCLE_AREA(r) (PI * SQUARE(r))
#define CIRCLE_CIRCUMFERENCE(r) (2 * PI * (r))
#define RECTANGLE_AREA(w, h) ((w) * (h))
#define TRIANGLE_AREA(b, h) (0.5 * (b) * (h))
#define SPHERE_VOLUME(r) (4.0/3.0 * PI * CUBE(r))

// 溫度轉換巨集
#define CELSIUS_TO_FAHRENHEIT(c) (((c) * 9.0 / 5.0) + 32)
#define FAHRENHEIT_TO_CELSIUS(f) (((f) - 32) * 5.0 / 9.0)
#define CELSIUS_TO_KELVIN(c) ((c) + 273.15)

// 單位轉換巨集
#define KM_TO_MILES(km) ((km) * 0.621371)
#define MILES_TO_KM(miles) ((miles) * 1.60934)
#define POUNDS_TO_KG(lbs) ((lbs) * 0.453592)
#define KG_TO_POUNDS(kg) ((kg) * 2.20462)

// 除錯巨集
#define DEBUG_MODE 1
#if DEBUG_MODE
    #define DEBUG_PRINT(msg) cout << "[DEBUG] " << msg << endl
#else
    #define DEBUG_PRINT(msg)
#endif

// 陣列大小巨集
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

// 交換巨集
#define SWAP(a, b, type) do { type temp = a; a = b; b = temp; } while(0)

int main() {
    cout << "=== 巨集使用範例 ===\n" << endl;
    
    // 基本運算測試
    int a = 5, b = 3;
    cout << "基本運算:" << endl;
    cout << "SQUARE(" << a << ") = " << SQUARE(a) << endl;
    cout << "CUBE(" << a << ") = " << CUBE(a) << endl;
    cout << "MAX(" << a << ", " << b << ") = " << MAX(a, b) << endl;
    cout << "MIN(" << a << ", " << b << ") = " << MIN(a, b) << endl;
    cout << "ABS(-10) = " << ABS(-10) << endl;
    
    // 幾何計算
    double radius = 5.0;
    cout << "\n幾何計算 (半徑 = " << radius << "):" << endl;
    cout << "圓面積: " << CIRCLE_AREA(radius) << endl;
    cout << "圓周長: " << CIRCLE_CIRCUMFERENCE(radius) << endl;
    cout << "球體積: " << SPHERE_VOLUME(radius) << endl;
    
    double width = 10.0, height = 6.0;
    cout << "矩形面積 (" << width << "x" << height << "): " << RECTANGLE_AREA(width, height) << endl;
    cout << "三角形面積 (底=" << width << ", 高=" << height << "): " << TRIANGLE_AREA(width, height) << endl;
    
    // 溫度轉換
    double celsius = 25.0;
    cout << "\n溫度轉換:" << endl;
    cout << celsius << "°C = " << CELSIUS_TO_FAHRENHEIT(celsius) << "°F" << endl;
    cout << celsius << "°C = " << CELSIUS_TO_KELVIN(celsius) << "K" << endl;
    
    double fahrenheit = 77.0;
    cout << fahrenheit << "°F = " << FAHRENHEIT_TO_CELSIUS(fahrenheit) << "°C" << endl;
    
    // 單位轉換
    double km = 100.0;
    double pounds = 150.0;
    cout << "\n單位轉換:" << endl;
    cout << km << " 公里 = " << KM_TO_MILES(km) << " 英里" << endl;
    cout << pounds << " 磅 = " << POUNDS_TO_KG(pounds) << " 公斤" << endl;
    
    // 陣列大小測試
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "\n陣列大小: " << ARRAY_SIZE(numbers) << endl;
    
    // 交換測試
    int x = 10, y = 20;
    cout << "\n交換前: x = " << x << ", y = " << y << endl;
    SWAP(x, y, int);
    cout << "交換後: x = " << x << ", y = " << y << endl;
    
    // 除錯訊息
    DEBUG_PRINT("這是除錯訊息");
    
    return 0;
}