#include<iostream>
using namespace std;

int main() {

	int i;
	double d;
	d = i = 3.5;	// d=3 i=3 �ڽ�3.5��ֵ��i��ʱ���Ϊ�������Ա���ֵ��d��ֵҲ��ת��Ϊ3
	cout << "d:" << d << "i:" << i << endl;
	i = d = 3.5;	// d=3.5 i=3
	cout << "d:" << d << "i:" << i << endl;

	return 0;
}