#include <iostream>
using namespace::std;
#include <vector>
#include <string>


int main() {
	
	vector<int> v(10, 0);
	auto beg = v.begin();
	auto end = v.end();
	
	cout << "end - beg = " << end - beg << endl;
	// ������� 10��Ҳ����˵����������������Ϊ��Ŀ�����ٸ�Ԫ��
	// cout << "end + begin = " << end + begin << endl;
	// ����򱨴�
	cout << (end - beg) +10 << endl;
	return 0;
}