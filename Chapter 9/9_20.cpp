// ��д���򣬴�һ��list����Ԫ�ص�����deque�С�ֵΪż��������Ԫ�ض�������һ��deque�У�������ֵԪ�ض���������һ��deque�С�

#include <iostream>
#include <string>
#include <deque>
#include <list>
using namespace std;

int main() {

	list<int> li{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	deque<int> ideq1;
	deque<int> ideq2;


	for (auto i : li) {
		(i & 0x1 ? ideq1 : ideq2).push_back(i);
	}

	for (auto i : ideq1) cout << i << endl;

	for (auto i : ideq2) cout << i << endl;


	return 0;
}
