#include <iostream>
using namespace::std;
#include <vector>
#include <string>


int main() {

	vector<int> v;
	int i;
	while (cin >> i) {
		v.push_back(i);
	}
	// ʹ�õ������ķ�����
	for (auto i = v.begin();i!=v.end()-1;i++) {			//ע�⣬ѭ������������Ҫд��v.end()�ˣ�һ��Ҫ-1
		cout << *i + *(i+1) << endl;
	}
	cout << "��������������������������������" << endl;
	auto n = v.begin();
	auto m = v.end() - 1;
	while (n < m) {
		cout << *n + *m << endl;
		n++;
		m--;
	}

	return 0;
}