int factorial(int val) {
	if (val > 1)
		return factorial(val - 1) * val;
	return 1;
}
// ������ж�������Ϊ  if(val!=0) �Ļ�

// �����Ǹ����ͻ������ѭ��