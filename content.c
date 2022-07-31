using namespace std;
int main() {
  int array1[] = {10, 20, 30};
  int array2[] = {90, 80, 70};

  int *ptr;
	ptr = array1;
  for (int i = 0; i < 3; i++) {
		cout << *(ptr+i) << "\t";
  }
	cout << endl;

	ptr = array2;
	for (int i = 0; i < 3; i++) {
		cout << *(ptr+i) << "\t";
  }
	cout << endl;
}
