#include <iostream>
#include <map>
#include <vector>
using namespace std;



int main() {
	map<string, vector<string>> m;
	for (string ln;cout << "��ͥ����Ϊ:\n", cin >> ln && ln != "@q";) {
		for (string cn; cout << "|-���ӵ���Ϊ:\n", cin >> cn && cn != "@q";) {
			m[ln].push_back(cn);
		}
	}

	for (auto i : m) {
		cout << i.first << ":";
		for (auto j : i.second) {
			cout << j << "��";
		}
		cout << endl;
	}


	return 0;
}