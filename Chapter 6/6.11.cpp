// reset���� ���������Ķ����Ϊ�� �������õ�����

#include<iostream>
using namespace std;

void reset(int& x) {
	x = 0;
}


int main() {
	int x = 10;
	reset(x);
	cout << "x:" << x;
	return 0;
}