#include <iostream>
using namespace::std;
#include <vector>
#include <string>


int main() {
	
	// ���ַ������庬��ʮ��Ԫ��ֵΪ42��vector����

	vector<int> one(10, 42);

	vector<int> two{ 42,42,42,42,42,42,42,42,42,42 };

	vector<int> three;
	for (int i = 0;i < 10;i++) {
		three.push_back(42);
	}


	return 0;
}