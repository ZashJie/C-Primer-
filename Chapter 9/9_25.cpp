#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v{ 1, 2, 3, 4, 5 };
	auto front = v.begin();
	auto end = v.begin();
	v.erase(front, end);
	for (auto s : v) {
		cout << s << endl;

	}
	// ��� elem1 �� elem2 ��ȣ���ô���ᷢ���κβ�����

	cout << "-------------------" << endl;

	auto end1 = v.end(); // β�������
	v.erase(front, end1);

	for (auto s : v) {
		cout << s << endl;

	}
	
	// ������߽�Ϊβ���������Ҳʲô�����ᷢ����


	return 0;
}