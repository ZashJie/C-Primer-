#include <iostream>
#include <vector>
using namespace std;

int main() {

	unsigned scores[11];
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++scores[grade / 10];
		}
		else {
			break;
		}
	}

	for (auto i : scores) {
		cout << i << " " << endl;
	}

	/*
	��scores���鲻��ʼ��ʱ��������£�
		3435973836
		3435973837
		3435973837
		3435973837
		3435973837
		3435973838
		3435973837
		3435973837
		3435973837
		3435973837
		3435973837
	���������е�ֵ��δ������


	*/

	return 0;
}