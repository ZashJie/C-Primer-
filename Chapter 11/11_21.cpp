// �ٶ�word_count ��һ�� string �� size_t ��map��word ��һ��string����������ѭ�������ã�
while (cin >> word)
	++word_count.insert({ word, 0 }).first->second;

// ��ӹؼ��֣���word_coun��û�еĹؼ�����Ӻ����1����ͬ�Ĺؼ��ּ���1
