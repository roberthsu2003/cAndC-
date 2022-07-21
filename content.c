#include <iostream>
//多載overloading
//area()矩形面積
int area(int width, int height){
	return width * height;
}

//area()正方形面積
int area(int side){
	return side * side;
}


int main() {
  std::cout << "Hello World!\n";
}
