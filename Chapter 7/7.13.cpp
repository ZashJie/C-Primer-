#include<iostream>
#include"7.12.h"
// ���º�����д7.3�ĳ���
using std::cin;	using std::cout; using std::endl;  using std::string;

int main() {
	Sales_data total(cin);
	if (!total.isbn().empty()) {
		std::istream& is = cin;
		while (is) {
			Sales_data trans(is);
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