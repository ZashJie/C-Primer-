#include <iostream>
#include <vector>
using namespace std;

int main() {

	const char ca[] = { 'h', 'e', 'l', 'l','o' };
	const char* cp = ca;	// ָ�볣����ָ������ָ�룩��cp���ܸı�ca����ֵ
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
	// cp���ַ������е�Ԫ�ض���ӡ������������Ϊû�п��ַ��Ĵ��ڣ����򲻻��˳�ѭ��

	return 0;
}