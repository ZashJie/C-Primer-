#include<iostream>
using namespace std;

void print(const int ia[10])
{
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}

void print(const int(&ia)[10])
{
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}
// ��������Ϊʵ�ε�ʱ�򣬻ᱻ�Զ�ת��Ϊָ��Ԫ�ص�ָ�룬��˺����βν��յ���һ��ָ�룬������������ɹ����У����Խ�������Ϊ���������

int main() {
	int ia[10] = { 10,10 };
	print(ia);


	return 0;
}