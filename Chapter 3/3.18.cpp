#include <iostream>
using namespace::std;
#include <vector>
#include <string>


int main() {
	/*
	vector<int> ivec;
	ivec[0] = 42;
	*/
	// ���󣬷���Ϊû�ж�ivec���г�ʼ��
	vector<int> ivec(10);
	// ����ʮ��ֵΪ0��Ԫ��
	ivec[0] = 42;

	// ��������������˼�� ��׼������
	vector<int> v;
	v.push_back(42);
	

	return 0;
}