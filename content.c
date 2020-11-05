#include <iostream>
using namespace std;

typedef struct rectangle{
	string name;
	int width;
	int height;
} Rectangle;

int main() {
	Rectangle recs[] = {{"rec1", 56, 35}, {"rec2", 74, 26}, {"rec3", 93, 14}};

	int count = sizeof(recs) / sizeof(recs[0]);

	for(int i=0; i<count; i++){
		Rectangle rec = recs[i];
		cout << "矩型名稱:" << rec.name << endl;
		cout << "寬度:" << rec.width << endl;
		cout << "長度:" << rec.height << endl;
		cout << "面積:" << rec.width * rec.height << endl;
		cout << "================================\n";		
 	}

}
