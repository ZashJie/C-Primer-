#include <iostream>
#include <vector>
using namespace std;

int main() {

	int ia[3] = { 1,2,3 };
	int* p1 = &ia[0];
	int* p2 = &ia[1];

	cout << p2 - p1 << endl;

	// ����ָ��������Ա�ʾ����ָ���ľ��룬��ָ�����һ������Ҳ���Ա�ʾ�ƶ����ָ�뵽ĳһ��λ��
	// ��������ָ����Ӳ�û��ʲô�߼��ϵ����塣

	return 0;
}