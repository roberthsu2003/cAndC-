#include <iostream>
using namespace std;

int main() {
	char word[] = {'H','e','l','l','o'};
	cout << word << endl;
	
	//就是c語言建立的字串(字元陣列)
	const char *word1 = "Hello";
	cout << word1 << endl;
	word1 = "World";
	cout << word1 << endl;

	//c++語言 string
	string word2 = "Hello";
	cout << word2 << endl;
	word2 = "World";
	cout << word2 << endl;
}
