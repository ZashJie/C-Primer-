#include <iostream>
using namespace::std;
#include <vector>
#include <string>


int main() {
	/* 
	* 
	* �α�ԭ������
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++scores[grade / 10];
		}
	}
	*/
	vector<unsigned> scores(11, 0);
	unsigned grade=100;
	while (cin >> grade) {
		if (grade <= 100) {
			++*(scores.begin() + grade / 10);
			// �ص㣺һ��Ҫ���Ǻ�(*)�������Ǻ�++�Ļ�ֻ�ǽ�������������һλ����
		}
	}
	for (auto i : scores) {
		cout << i << endl;
	}

	

	return 0;
}