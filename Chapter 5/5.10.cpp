#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	// ͳ���ж��ٸ�Ԫ����ĸ�������5.9�ܹ���׽��д��Ԫ����ĸ��
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch) {
		switch (ch) {
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;

		}
	}
	cout << "a::" << aCnt << endl
		<< "e::" << eCnt << endl
		<< "i::" << iCnt << endl
		<< "o::" << oCnt << endl
		<< "u::" << uCnt << endl;

	// ���룺qwertyuiopQWERTYUIOP
	// �����a::0
	// e::2
	// i::2
	// o::2
	// u::2

	return 0;
}