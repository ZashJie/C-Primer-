#include <iostream>
#include <vector>
using namespace std;

int main() {
	constexpr size_t array_size = 10;
	// size_t ר�����������±꣬�䱻��Ƶ��㹻���ܱ�ʾ�ڴ��е���������С
	int ia[array_size];
	for (size_t ix = 1; ix <= array_size; ++ix) {
		ia[ix] = ix;
	}
	//ia�����СΪ10���������forѭ��ȴ����ʮһ��λ�ø�ֵ
	return 0;
}