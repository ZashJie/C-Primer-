// ��6�ִ����ͳ�ʼ�� vector ����ķ�����ÿһ�ֶ�����һ��ʵ��������ÿ��vector����ʲôֵ��
#include<iostream>
#include<vector>
using namespace std;

vector<int> v1;
vector<int> v2(10);
vector<int> v3(10, 3);
vector<int> v4{ 10, 3 };
vector<int> v5 = v4; // ��û������������Ǵ�Σ�������֪��Ϊʲô
vector<int> v6(v1);
vector<int> v7(v4.begin(), v4.end());
