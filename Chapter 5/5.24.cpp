#include<iostream>
#include<stdexcept>		// 
using namespace std;

int main() {


	int a;
	int b;
	cin >> a >> b;
	if (b == 0)
	{
		throw runtime_error("��������Ϊ��");
		cout << "dddd";						// ��û�����dddd
	}

	cout << a / b;


	return 0;
}