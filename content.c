#include <iostream>
#define PI 3.14159

using namespace std;

namespace Shape{
	class Circle{
		private:
			int _radius;

		public:
			void setRadius(int);
			int getRadius(void);		
			float area(void);
	};

	float Circle::area(){
		return PI * _radius * _radius;
	}
	void Circle::setRadius(int r){
		_radius = r;
	}

	int Circle::getRadius(void){
		return _radius;
	}
}

Shape::Circle circle;

int main() {
	circle.setRadius(10);
	cout << "半徑=" << circle.getRadius() << endl;
	cout << "圓面積=" << circle.area() << endl;
}
