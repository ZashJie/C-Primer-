vector<string> svec;
svec.reserve(1024);
string word;
while (cin >> word)
	svec.push_back(word);
svec.resize(svec.size() + svec.size() / 2);

//
// ������һ������string���͵�vector������Ϊ�����1024��Ԫ�صĿռ䣬
// ����һ��string���͵ı�����ͨ��ѭ���ӱ�׼�����ж�ȡ�ַ�����ӵ�vector���У�
// ѭ�������󣬸ı�vector�����ݴ�СΪԭ����1.5������Ԫ��Ĭ��ֵ����� 
// 
//