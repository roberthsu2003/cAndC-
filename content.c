#include <iostream>
#define PI 3.14159

using namespace std;

namespace Shape{
	class Circle{
		private:
			int _radius;

		public:
			void setRadius(int);		
			float area(void);
	};

	float Circle::area(){
		return PI * _radius * _radius;
	}
	void Circle::setRadius(int r){
		_radius = r;
	}
}

int main() {
	
}
