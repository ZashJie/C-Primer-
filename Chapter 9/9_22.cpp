// �ٶ�iv��һ��int��vector������ĳ������ʲô�����㽫����޸ģ�
vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
while (iter != mid)
	if (*iter == some_val)
		iv.insert(iter, 2 * some_val);

// ��ѭ��


vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
while (iter != mid) {
	if (*iter == some_val) {
		iv.insert(iter, 2 * some_val);
		// ������������ָ��������Ǽ��ϵ�Ԫ��
		iter++;
	}
	iter++;
}
	