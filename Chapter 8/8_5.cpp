#include <vector>
#include <iostream>
#include<string>
#include <fstream>
// ʹ���ļ�����Ҫ��fstream����
using namespace std;


void ReadFileToVec(const string& filename, vector<string>& vec) {
	ifstream ifs(filename);
	if (ifs) {
		string buf;
		while (ifs>>buf) {
			vec.push_back(buf);
		}
	}
}


int main() {
	vector<string> vec;
	// �ļ���Ҫ�Ӻ�׺
	ReadFileToVec("file.txt", vec);
	for (auto i : vec) {
		cout << i << endl;
	}
	return 0;
}