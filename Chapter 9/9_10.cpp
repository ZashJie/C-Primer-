#include<iostream>
#include<vector>
using namespace std;
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin();
auto it3 = v1.cbegin(), it4 = v2.cbegin();
// ���������б���auto����һ��Ҫ��ͬһ�����͵� it1 �� it2������ͬһ������
// ���Խ������Ϊ
auto it1 = v1.begin(); // it1��iterator
auto it2 = v2.begin(), it3 = v1.cbegin(), it4 = v2.cbegin(); //it2,it3,it4��iterator����

