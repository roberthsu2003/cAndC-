//搜尋
#include <iostream>
#include <time.h>
using namespace std;

void search(int n[], int elements, int key) {
  int count = 0;
  for (int i = 0; i < elements; i++) {
    if (key == n[i]) {
      count += 1;
    }
  }

  cout << key << "出現的次數是" << count << "次\n";
}

int main() {
  srandom(time(NULL));
  int nums[250];
  int keyin;

  for (int i = 0; i < 250; i++) {
    nums[i] = random() % (50 - 1 + 1) + 1;
  }

	for(int i=1; i<=50; i++){
		search(nums,250,i);
	}
}
