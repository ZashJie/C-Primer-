struct X {
	X(int i, int j) : base(i), rem(base% j) {}
	int rem, base;
};
��Ϊ
struct X {
	X(int i, int j) : base(i), rem(base% j) {}
	int base, rem;
};

// ��Ա��ʼ����˳�����������ඨ���г��ֵ�˳��һ��
