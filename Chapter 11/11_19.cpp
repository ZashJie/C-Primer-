// ����һ��������ͨ����11.2.2���е���Ϊ bookstore ��multiset ����begin()����ʼ�����������д�����������ͣ���Ҫʹ��auto �� decltype��
//  

using compareType = bool (*)(const Sales_data& lhs, const Sales_data& rhs);
std::multiset<Sale_data, compareType> bookstore(compareIsbn);
std::multiset<Sale_data, compareType>::iterator c_it = bookstore.begin();