#include<iostream>
#include <stdexcept>
using namespace std;

int main() {


	int a;
	int b;
	
	while (cin >> a >> b) {
		try {
			if (b == 0) {
				throw runtime_error("��������Ϊ��");
			}
			cout << a / b << endl;
		}
		catch (runtime_error err) {
			cout << err.what() << "\n ����һ�Σ� ���� y ���� n" << endl;
			// err.what() �������Ϣ��
			char c;
			cin >> c;
			if (c != 'y')
				break;
		}
	}


	return 0;
}