#include<iostream>
#include<string>
using namespace std;

int main() {

	int x[10];
	int* p = x;
	cout << sizeof(x) / sizeof(*x) << endl;	// �²⣺40/4=10 ��
	cout << sizeof(p) / sizeof(*p) << endl; // �²⣺40/4=10 �� 

	cout << sizeof(p) << endl;	// 8 ָ��
	cout << sizeof(*p) << endl;	// 4  

	// x��������׵�ַ��p����������׵�ַ��*pָ��p[0]

	// ��𣺵�һ���������� 10���ڶ��������δ���塣


	return 0;
}