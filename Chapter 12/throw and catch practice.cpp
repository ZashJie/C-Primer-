#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double triangle(double, double, double);
	double a, b, c;
	cin >> a >> b >> c;
	try                           //����쳣
	{
			while (a > 0 && b > 0 && c > 0)
			{
				cout << triangle(a,b,c) << endl;
				cin >> a >> b >> c;           //���������쳣�����������߳����������
			}
	}
	catch(int)                           //�����쳣	
	{
			cout << "a=" << a << ",b=" << b << ",c=" << c << ",that is not a triangle!" << endl;
	}
	cout << "end" << endl;
	return 0;
}
                          //��ȫtriangle �������壬Ҫ����triangle �����ж��������������м�飬�����������׳��쳣��Ϣ

double triangle(double a, double b, double c) {

	if (a + b <= c || a + c <= b || b + c <= a)
		throw - 1;		

	double temp = (a + b + c) / 2;
	double s = sqrt(temp * (temp - a) * (temp - b) * (temp - c));//���׹�ʽ�����
	return s;
}