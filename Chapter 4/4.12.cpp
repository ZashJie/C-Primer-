#include<iostream>
#include<vector>
using namespace std;

int main() {

	int i = 1;
	int j = 2;
	int k = 3;
	if ((i != j) < k) {
		cout << "i������j����1,1<3����1" << endl;
	}
	if (i != j < k) {
		cout << "i������j����1,1<3����1" << endl;
	}
	else {
		cout << "<���ȼ����ߣ�j<k����1��i����1������0" << endl;
	}


	return 0;
}