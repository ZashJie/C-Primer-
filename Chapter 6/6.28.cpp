#include<iostream>
using namespace std;
void error_msg(ErrCode e, initializer_list<string> li) {
	cout << e.msg() << ":";
	for (const auto& elem : li)
		cout << elem << " ";
	cout << endl;
}

// ���ʣ���error_msg�����ĵڶ����汾�а���ErrCode���͵Ĳ���������ѭ���ڵ�elem��ʲô���ͣ�

// initializer_list�����Ԫ����string���ͣ�����auto�� string ����elem�� const string& ����

