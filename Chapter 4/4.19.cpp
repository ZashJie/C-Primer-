#include<iostream>
#include<vector>
using namespace std;

int main() {

	int* ptr=nullptr;
	vector<int> vec{0,0};
	int ival=0;

	if (ptr == 0)
		cout << "ptr�ǿ�ָ��" << "ptr:" << ptr << endl;	// ptr�ǿ�ָ��ptr:0000000000000000
	// (a) ptr != 0 && *ptr++
	// �ж�ptr�ǲ���һ����ָ�룬���ҵ�ǰָ���Ԫ�ص�ֵҲΪ�棬Ȼ��ptrָ����һ��Ԫ��

	// (b) ival++ && ival
	// �ж�ival�Ƿ�Ϊ�棬�����ж�ival+1�Ƿ�ҲΪ��

	// (c) vec[ival++] <= vec[ival]
	// ����C++��û�й涨��������ߵ���ֵ˳��Ӧ�ø�Ϊ vec[ival] <= vec[ival+1]




	return 0;
}