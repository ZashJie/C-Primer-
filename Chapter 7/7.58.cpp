//����ľ�̬���ݳ�Ա�������Ͷ����д����������ԭ��

//example.h
class Example {
public:
	static double rate = 6.5;
	static const int vecSize = 20;
	static vector<double> vec(vecSize);
};
//example.c
#include "example.h"
double Example::rate;
vector<double> Example::vec;

// ��̬��Ա��ʼ��Ҫ��̬��Ա������ֵ�������͵�constexpr������vec����

// �޸�����
// example.h
class Example {
public:
	static constexpr double rate = 6.5;
	static const int vecSize = 20;
	static vector<double> vec;
};

// example.C
#include "example.h"
constexpr double Example::rate;
vector<double> Example::vec(Example::vecSize);