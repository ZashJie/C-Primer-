#include<iostream>
#include<string>
using namespace std;

int main() {

	constexpr int size = 5;
	int ia[size] = { 1, 2, 3, 4, 5 };
	for (int* ptr = ia, ix = 0;
		ix != size && ptr != ia + size;
		++ix, ++ptr) { 
		// cout << ia << endl;
	}

	// ���ѭ���ڱ������� ia��ָ�� ptr �� ���� ix ������һ��ѭ�������Ĺ��ܡ�


	return 0;
}