#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<string>::iterator iter;

	*iter++;	// �Ϸ������ص�������ǰָ���Ԫ�أ�����������

	(*iter)++;  // ���Ϸ�����Ϊiterָ�����string������++

	*iter.empty();	// ���Ϸ���Ҫ������
	iter->empty();	// �Ϸ�

	++* iter;	//���Ϸ�����ִ�е���*��iterָ���ʱ��string��string�ֲ���++

	iter++->empty();	// �Ϸ������жϵ�ǰԪ���Ƿ�Ϊ�գ�Ȼ�����������

	return 0;
}