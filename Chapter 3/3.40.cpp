#include <iostream>
#include <string>
using namespace std;

const char cstr1[] = "Hello";
const char cstr2[] = "world";

int main() {

	char cstr3[100];
	strcpy_s(cstr3, cstr1);
	strcat_s(cstr3, " ");	// strcat����ַ�������ӵ���һ���ַ�����ĺ���
	strcat_s(cstr3, cstr2);
	cout << cstr3 << endl;


	return 0;

}