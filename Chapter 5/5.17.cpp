#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

	vector<int> vec1{ 0,1,1,2 };
	vector<int> vec2{ 0,1,1,2,3,5,8 };


	//int minvec = vec1.size() > vec2.size() ? vec1.size() : vec2.size();   �����֪��Ϊʲô����
	int minvec;
	if (vec1.size() > vec2.size()) {
		minvec = vec2.size();
	}
	else {
		minvec = vec1.size();
	}


	for (unsigned i = 0;i < minvec;i++) {
		if (vec1[i] != vec2[i]) {
			cout << "��ƥ�䣡" << endl;
			return 0;
		}
	}
	cout << "ƥ��ĺܣ���" << endl;

	return 0;
}