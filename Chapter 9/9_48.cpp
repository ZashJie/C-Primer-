#include <iostream>
#include <string>
using namespace std;

int main() {

	string numbers("0123456789");
	string name("r2d2");

	auto a = numbers.find(name);
	cout << a << endl;

	// find����ʧ�ܷ���һ�� string::npos �����һ��unsigned���ͣ�
	// �˳�ʼֵ��ζ��npos�����κ�string���Ŀ��ܴ�С

	return 0;
}