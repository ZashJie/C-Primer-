#include <iostream>
using namespace::std;
#include <vector>
#include <string>

int main() {
	
	vector<int> v1;
	cout << "v1.size = " << v1.size() << endl;
	// v1 ��СΪ0

	vector<int> v2(10);
	cout << "v2.size = " << v2.size() << endl;
	// v2 ��СΪ10  �� v2���� ֵ��ʼ��

	vector<int> v3(10, 42);
	cout << "v3.size = " << v3.size() << endl;
	for (auto it = v3.begin();it != v3.end();++it) {
		cout << *it << "\t";
	}
	cout << endl;
	// ����10��ֵΪ42��Ԫ��

	vector<int> v4{ 10 };
	cout << "v4.size = " << v4.size() << endl;
	// v4 ��СΪ1��ֻ������һ��ֵΪ10��Ԫ��

	vector<int> v5{ 10, 42 };
	cout << "v4.size = " << v5.size() << endl;
	// v5 ��СΪ2���ֱ𴴽���ֵΪ10��42��Ԫ��

	vector<string> v6{ 10 };
	cout << "v6.size = " << v6.size() << endl;
	// v6 ��СΪ10��ֵΪ""
	// �ⲻ���б��ʼ���������������ֵ������Ԫ�ص�������ͬ��
	// ��Ϊ��ͬ�����Ա�����������Ĭ��ֵ��ʼ��

	vector<string> v7{ 10,"hi" };
	cout << "v7.size = " << v7.size() << endl;
	for (auto it = v7.begin();it != v7.end();it++) {
		cout << *it << "\t";
	}
	// v7 ��СΪ10��10��ֵΪhi��Ԫ��
	// ����Ϊstring��vector������ʹ�û����ų�ʼ�����е��൱������Ϊint��Բ���ŵ�ͬ������Ϊstring�Ļ�����



	return 0;
}