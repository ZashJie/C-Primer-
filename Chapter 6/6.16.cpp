#include<iostream>
using namespace std;


bool is_empty1(const string& s) {
	return s.empty();
}


int main() {
	// ���������ڳ����ַ������ַ�������ֵ�޷���Ϊ�ú�����ʵ��
	const string str = "100";
	bool flag = is_empty1(str);

	return 0;
}