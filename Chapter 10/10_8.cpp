// �����ᵽ������׼���㷨����ı������������������Ĵ�С��Ϊʲôʹ�� back_inserter ����ʹ��һ����ʧЧ��

// back_inserter �ǲ������������ iterator.h ͷ�ļ��У����Ǳ�׼����㷨��


#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {

	vector<int> vec;
	cout << vec.size() << endl;			// 0
	cout << vec.capacity() << endl;		// 0

	// ���ܵ��ǵ�����
	auto i = back_inserter(vec);

	*i = 10;

	cout << vec.size() << endl;			// 1
	cout << vec.capacity() << endl;		// 1

	*i = 20;

	cout << vec.size() << endl;			// 2
	cout << vec.capacity() << endl;		// 2

	// i ָ��vec�������Ԫ�غ�һ��λ��

	return 0;
}