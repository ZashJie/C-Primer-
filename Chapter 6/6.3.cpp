#include <iostream>
using namespace std;

// �������Ľײ�
int fact(int x) {

	return x > 1 ? x*fact(x - 1) : 1;

}


int main() {

	int x;
	cin >> x;
	cout << fact(x) << endl;

	return 0;
}
// ���� 5
// ��� 120