#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<int> vec{ 1,3,3,4,5 };

	cout << *vec.begin() << endl;
	cout << *vec.begin() + 1 << endl;
	// �����õó���ֵ�ټ�һ

	cout << *(vec.begin()) << endl;
	cout << *(vec.begin()) + 1 << endl;

	// �������������ȼ������

	return 0;
}