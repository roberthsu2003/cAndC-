#include <iostream>
#include <string.h>

using namespace std;
int main() {
	//char name[10] = {'r', 'o', 'b', 'e', 'r', 't','\0','z','z','z'};
	char name[20] = "robert";
	strcpy(name,"alice");
	
	printf("%s\n", name);
	
}
