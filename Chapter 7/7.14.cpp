#include <string>
#include <iostream>


struct Sales_data {

	Sales_data() = default;
	Sales_data(const std::string& s) :bookNo(s) { }
	Sales_data(const std::string& s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(n* p) { }
	Sales_data(std::istream& is) { read(is, *this); }

	// ��дһ�����캯���������������ṩ�����ڳ�ʼֵ��ʽ�س�ʼ����Ա��
	Sales_data() :units_sold(0), revenue(0) { }

	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

