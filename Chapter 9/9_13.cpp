// ��δ�һ��list��ʼ��һ��vector����һ��vector�ָ���δ�������д������֤��Ĵ𰸡�

#include <iostream>
#include <string>
#include <vector>
#include <list>

using std::list; using std::vector; using std::cout; using std::endl;

int main() {
	list<int> ilst(5, 4);
	
	vector<double> dvec(ilst.begin(), ilst.end());

	for (auto i : ilst) cout << i << " ";
	cout << endl;
	for (auto d : dvec) cout << d << " ";
	cout << endl;

	vector<int> ivec(6, 5);

	vector<double> dvec2(ivec.begin(), ivec.end());

	for (auto i : ivec) cout << i << " ";
	cout << endl;
	for (auto d : dvec2) cout << d << " ";



	return 0;
}


