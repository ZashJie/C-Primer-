#include <iostream>
#include <vector>
using namespace std;

int txt_size() {
	return 1;
}

int main() {
	
	unsigned buf_size = 1024;

	// int ia[buf_size];
	// �Ƿ������ʽ����Ϊ����

	int ia2[4 * 7 - 14];
	// OK

	int ia3[txt_size()];
	// �Ƿ�����׼��Ϊtxt_size()��ֵ����Ҫ������ʱ���ܵõ�

	char st[11] = "fundamental";

	// �Ƿ����ַ�����߻����Զ����Ͽ��ַ������ǲ�û�и���Ԥ���ռ�

	return 0;
}