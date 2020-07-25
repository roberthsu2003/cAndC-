#include <iostream>
#define PI 3.14159

using namespace std;

namespace Shape{
	class Circle{
		private:
			int _radius;

		public:
			void setRadius(int);
			void setRadius(void);
			int getRadius(void);		
			float area(void);
	};

	float Circle::area(){
		return PI * _radius * _radius;
	}
	//多載
	void Circle::setRadius(int r){
		_radius = r;
	}
	//多載
	void Circle::setRadius(){
		_radius = 100;
	}

	int Circle::getRadius(void){
		return _radius;
	}
}

Shape::Circle circle;

int main() {
	circle.setRadius();
	cout << "半徑=" << circle.getRadius() << endl;
	cout << "圓面積=" << circle.area() << endl;
}
