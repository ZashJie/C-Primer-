int factorial(int val) {
	if (val > 1)
		return factorial(val - 1) * val;
	return 1;
}

// �ڵ���factorial ����ʱ��Ϊʲô���Ǵ����ֵ�� val-1 ���� val--��

// ��ô����Զ������ͬ����������--val�����