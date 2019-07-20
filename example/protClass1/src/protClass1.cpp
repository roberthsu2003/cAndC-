//============================================================================
// Name        : protClass1.cpp
// 在類別的外部定義方法



#include "Person.h"

int main() {
	Person david;
	david.tall = 183;
	david.name = "David";
	cout << david.name << " 身高=" << david.tall << endl;
	david.walk(20);
	return 0;
}
