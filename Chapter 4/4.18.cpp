#include <iostream>
#include<vector>
using namespace std;

int main() {

	vector<int> v(10,1);

	auto pbeg = v.begin();
	while (pbeg != v.end() && *pbeg >= 0)
		cout << *++pbeg << endl;
	// ���е���󱨴���Ϊ��++��ζ�ţ����ȴӵڶ���������ʼȡֵ����ȡ��v.end()
	// v.end()�����һ��Ԫ�ص���һ��ֵ�����Գ������


	return 0;
}