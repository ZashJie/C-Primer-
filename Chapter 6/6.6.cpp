#include <iostream>
using namespace std;

int xx(int x) {
	cout << "���x�����β�" << endl;
	static int ctr = 10;
	cout << "���ctr���Ǿֲ���̬����" << endl;
	return x;
}

int main() {

	int i = 0;
	cout << "���i���Ǿֲ�����" << endl;
	xx(i);
	return 0;
}