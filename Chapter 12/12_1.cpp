// �ڴ˴���Ľ�β��b1 �� b2 ���������ٸ�Ԫ�أ�

StrBlob b1;
{
	StrBlob b2 = { "a", "an", "the" };		// ���ü���Ϊ1
	b1 = b2;								// ���ü���Ϊ2
	b2.push_back("about");					
}

// b1,b2��������4��Ԫ�أ���ΪStrBlob���data��Ա��һ��ָ��string���͵�vector��shared_ptr
// ����shared_ptr���´�����ݣ����ǹ����ڴ�
// ����Ľ�βb2�������ˣ�����Ӱ��b1