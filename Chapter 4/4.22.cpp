#include<iostream>
#include <vector>
using namespace std;

int main() {

	int grade;
	string finalgrade;
	cin >> grade;
	finalgrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade > 60) ? "low pass" : "fail";
	cout << finalgrade;

	int grade1;
	string finalgrade1;
	cin >> grade1;
	
	if (grade > 90) {
		finalgrade1 = "high pass";
	}
	else if (grade > 75) {
		finalgrade1 = "pass";
	}
	else if (grade > 60) {
		finalgrade1 = "low pass";
	}
	else {
		finalgrade1 = "fail";
	}

	cout << finalgrade1;

	// �ڶ��������⣬����һ����ӿ��ٷ��㣻�ڶ���һ�����ܿ���������Ҫ��������˼�������ǵ�һ�濴���е��ۻ����������һ����������˼��


	return 0;
}