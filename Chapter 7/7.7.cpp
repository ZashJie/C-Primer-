#include<iostream>
#include"7.6.h"
// ���º�����д7.3�ĳ���
using std::cin;	using std::cout; using std::endl;  using std::string;

int main() {
	Sales_data total;
	if (read(cin, total)) {
		Sales_data trans;
		while (read(cin, trans)) {
			if (total.bookNo == trans.bookNo) {
				total.combine(trans);
			}
			else {
				print(cout, total) << endl;
			}
		}
	}
	else {
		std::cerr << "û������" << endl;
		return -1;
	}


	return 0;
}