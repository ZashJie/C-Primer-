#include <iostream>
using namespace::std;
#include <vector>
#include <string>
#include <cctype>
// cctype��ı��ַ�

int main() {
	vector<string> svec;
	string s;
	while (cin >> s) {
		svec.push_back(s);
	}
	// CTRL+Z�˳���ѭ��
	for (auto& str : svec) {
		for (auto& i : str) {
			i = toupper(i);
		}
	}

	for (auto i : svec) {
		cout << i << endl;
	}

	return 0;
}