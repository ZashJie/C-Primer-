// ��д���򣬴ӱ�׼�����ȡstring���У�����һ��deque�С���дһ��ѭ�����õ�������ӡdeque�е�Ԫ�ء�
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {

	string s;
	deque<string> sdeq;
	while (cin >> s) {
		sdeq.push_back(s);
	}
	for (auto i : sdeq) {
		cout << i << endl;
	}
	


	return 0;
}

