#include<iostream>
using namespace std;

int main() {

	const char* cp = "Hello World";
	if (cp && *cp) {
		cout << cp << endl;	// cp���ַ�������ĸ�ĵ�ַ
		cout << *cp << endl;	// *cpָ�ľ�������ĸ
	}


	return 0;
}