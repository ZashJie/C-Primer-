#include <iostream>
#include <string>
#include <cstring>
using std::cout; using std::endl; using std::string;

int main()
{
	// �Ƚ�����string����
	string s1("aaaaaaaaaa"), s2("bbbbbbbbbb");
	if (s1 == s2)
		cout << "same string." << endl;
	else if (s1 > s2)
		cout << "aaaaaaaaaa > bbbbbbbbbb" << endl;
	else
		cout << "aaaaaaaaaa < bbbbbbbbbb" << endl;

	cout << "=========" << endl;
	// �Ƚ�����C����ַ���������
	const char* cs1 = "aaaaaaaaaa";
	const char* cs2 = "bbbbbbbbbb";
	auto result = strcmp(cs1, cs2);	// ��ȷ���0 С�ڷ���-1 ���ڷ���1
	if (result == 0)
		cout << "same string." << endl;
	else if (result < 0)
		cout << "aaaaaaaaaa < bbbbbbbbbb" << endl;
	else
		cout << "aaaaaaaaaa > bbbbbbbbbb" << endl;

	return 0;
}