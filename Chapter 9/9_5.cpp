// ��д��һ��ĺ���������һ��������ָ���ҵ���Ԫ�ء�ע�⣬������봦��δ�ҵ�����ֵ�������
#include <iostream>
#include <vector>
using namespace std;

vector<int>::const_iterator func(vector<int>::const_iterator begin, vector<int>::const_iterator end, int i) {
	for (;begin != end;begin++) {
		if (*begin == i) {
			return begin;
		}
	}
	return end;
}