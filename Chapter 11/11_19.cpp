// ����һ��������ͨ����11.2.2���е���Ϊ bookstore ��multiset ����begin()����ʼ�����������д�����������ͣ���Ҫʹ��auto �� decltype��



#include <iostream>
#include <set> 
#include "Sales_data.h"

using namespace std;

bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs)
{
    return lhs.isbn() < rhs.isbn();
}

int main()
{
    //multiset<Sales_data,decltype(compareIsbn)*> bookstore(compareIsbn);

    //F�Ǻ������ͣ�����ָ�룬F*��һ����ָ��ĸ������ͣ��ο�P223ҳ 
    using Z = bool(const Sales_data&, const Sales_data&);
    multiset<Sales_data, Z*> bookstore(compareIsbn);

    multiset<Sales_data, Z*>::iterator it = bookstore.begin();
}