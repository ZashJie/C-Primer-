// �ٶ� c ��һ��string��multiset��v ��һ��string ��vector����������ĵ��á�ָ��ÿ�������Ƿ�Ϸ���
//
copy(v.begin(), v.end(), inserter(c, c.end()));
copy(v.begin(), v.end(), back_inserter(c));
copy(c.begin(), c.end(), inserter(v, v.end()));
copy(c.begin(), c.end(), back_inserter(v));
// 
// copy(c.begin(), c.end(), inserter(v, v.end()));
// ��������ԣ���Ϊmultisetû��push_back����
//