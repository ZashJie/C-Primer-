#include<iostream>
#include<string>
using namespace std;


int main() {

	string curr, prev;
	bool no_twice = true;

	while (cin >> curr) {
		if (isupper(curr[0]) && prev == curr)	// �������һ�� ����һ��isupper�����ж��Ƿ��Ǵ�д��ĸ 
		{
			cout << curr << ":����������" << endl;
			no_twice = false;
			break;
		}
		prev = curr;
	}
	if (no_twice) {
		cout << "��û���ظ���" << endl;
	}

	return 0;
}