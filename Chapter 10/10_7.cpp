// ��������Ƿ��д�������У��������


(a)
vector<int> vec; list<int> lst; int i;
while (cin >> i)
	lst.push_back(i);
copy(lst.cbegin(), lst.cend(), vec.begin());

// Ӧ�üӸ� vec.resize(vec.size()) ����Ϊcopy��ʱ��Ҫ��֤Ŀ�����и���������һ�����Ԫ��

(b)
vector<int> vec;
vec.reserve(10);
fill_n(vec.begin(), 10, 0);

// ���û�д��󣬵���û�дﵽ��Ҫ����Ŀ��
// vec.reserve(10) ��Ϊ vec.resize(10)

