// ��д���򣬷ֱ�ʹ�� at���±��������front �� begin ��ȡһ��vector�еĵ�һ��Ԫ�ء���һ����vector�ϲ�����ĳ���
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v{ 1 };
	
	cout << v.at(0) << endl;
	cout << v[0] << endl;
	cout << v.front() << endl;
	cout << *v.begin() << endl;

	return 0;
}