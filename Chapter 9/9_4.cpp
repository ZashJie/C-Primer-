// ��д����������һ��ָ��vector�ĵ�������һ��intֵ��������������ָ���ķ�Χ�в��Ҹ�����ֵ������һ������ֵ��ָ���Ƿ��ҵ���
#include <iostream>
#include <vector>
using namespace std;

bool func(vector<int>::const_iterator begin, vector<int>::const_iterator end, int i) {
	for (;begin != end;begin++) {
		if (*begin == i) {
			return true;
		}
	}
	return false;
}