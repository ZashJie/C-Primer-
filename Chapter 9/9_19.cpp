// ��д��һ��ĳ�����list���deque���г�����Ҫ������Щ�ı䡣
#include <iostream>
#include <string>
#include <deque>
#include <list>
using namespace std;

int main() {

	string s;
	// ֻ��Ҫ�������������ı伴�ɣ����������䡣
	list<string> sdeq;
	while (cin >> s) {
		sdeq.push_back(s);
	}
	for (auto i : sdeq) {
		cout << i << endl;
	}



	return 0;
}

