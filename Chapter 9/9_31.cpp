// ��316ҳ��ɾ��ż��ֵԪ�ز���������ֵԪ�صĳ���������list��forward_list��Ϊʲô���޸ĳ���ʹ֮Ҳ��������Щ���͡�
// ��Ϊ iter += 2 Ӧ�ò���  �������ֻ������string vector deque array

// ����list���ɸ�Ϊ
list++;
list++;

// ���� forward_list
auto prev = flst.before_begin();


curr == flst.insert_after(prev, *curr);
++curr; ++curr;
++prev; ++prev;

