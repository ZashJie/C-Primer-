#include <iostream>
#include <vector>
using namespace std;

int main() {

	int ia[2] = { 1,2 };


	int* p1 = &ia[0];
	int* p2 = &ia[1];

	p1 += p2 - p1;
	// �൱��p1�����Ƶ�p2λ��

	cout << *p1 << endl;
	cout << *p2 << endl;
	// p1 �� p2 ��ָ�����ia�ĵڶ�������Ԫ��

	return 0;
}