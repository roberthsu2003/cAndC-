#include <iostream>

class Circle{
	private:
	int _radius;

	public:
	int getRadius();
	void setRadius(int r);	
};

int Circle::getRadius(){
	return _radius;
}

void Circle::setRadius(int r){
	if(r>0){
		_radius = r;
	}else{
		_radius = 1;
	}
}

using namespace std;
int main() {
	Circle c1;
	c1.setRadius(50);
	cout << "c1的半徑是" << c1.getRadius() << endl;
}
