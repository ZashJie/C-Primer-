#include <iostream>
using namespace std;

// �������Ľײ�
int fact(int x) {

	return x > 1 ? x * fact(x - 1) : 1;

}


int main() {

	int x;
	cout << "������1��13֮�������:" << endl;
	while (cin >> x) {
		if (x < 1 || x>13) {
			cout << "����������1��13֮�������:" << endl;

			continue;
		}
		cout << fact(x) << endl;
		cout << "������1��13֮�������:" << endl;
	}
	
	

	return 0;
}
// ���� 5
// ��� 120