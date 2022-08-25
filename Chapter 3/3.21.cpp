#include <iostream>
using namespace::std;
#include <vector>
#include <string>

void chack_and_print(vector<int>& vec) {
	cout << "size: " << vec.size() << "content: [";
	for (auto it = vec.begin();it != vec.end();it++) {
		cout << *it << (it != vec.end() - 1 ? "," : "");
	}
	cout << "]" << endl;
}

void chack_and_print(vector<string>& vec) {
	cout << "size:" << vec.size() << "content: [";
	for (auto it = vec.begin();it != vec.end();it++) {
		cout << *it << (it != vec.end() - 1 ? "," : "");
	}
	cout << "]" << endl;
}


int main() {
	// ��Ŀ����3.13 3.16�����������������õ������������

	vector<int> v1;
	chack_and_print(v1);
	// v1 ��СΪ0 

	vector<int> v2(10);
	chack_and_print(v2);
	// v2 ��СΪ10  �� v2���� ֵ��ʼ��

	vector<int> v3(10, 42);
	chack_and_print(v3);
	// ����10��ֵΪ42��Ԫ��

	vector<int> v4{ 10 };
	chack_and_print(v4);
	// v4 ��СΪ1��ֻ������һ��ֵΪ10��Ԫ��

	vector<int> v5{ 10, 42 };
	chack_and_print(v5);
	// v5 ��СΪ2���ֱ𴴽���ֵΪ10��42��Ԫ��

	vector<string> v6{ 10 };
	chack_and_print(v6);
	// v6 ��СΪ10��ֵΪ""
	// �ⲻ���б��ʼ���������������ֵ������Ԫ�ص�������ͬ��
	// ��Ϊ��ͬ�����Ա�����������Ĭ��ֵ��ʼ��

	vector<string> v7{ 10,"hi" };
	chack_and_print(v7);
	// v7 ��СΪ10��10��ֵΪhi��Ԫ��
	// ����Ϊstring��vector������ʹ�û����ų�ʼ�����е��൱������Ϊint��Բ���ŵ�ͬ������Ϊstring�Ļ�����


	


	return 0;
}