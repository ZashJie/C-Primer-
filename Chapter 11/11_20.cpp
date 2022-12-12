// ��д11.1����ϰ�ĵ��ʼ�������ʹ��insert�����±����������Ϊ�ĸ���������ױ�д���Ķ�������ԭ��

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, size_t> counts;
	for (string word; cin >> word;) {
		auto result = counts.insert({word, 1});
		if (!result.second) {
			// �䷵��ֵΪָ��ָ��Ԫ�صĹؼ���
			result.first->second++;
		}
	}
	for (auto i : counts) {
		cout << i.first << ":" << i.second << endl;
	}

	return 0;
}