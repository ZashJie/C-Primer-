

//(a) 
for (int ix = 0; ix != sz; ++ix) { /* ... */ }
if (ix != sz)
// . . .
// ��forѭ���������ж����ix������һ��if���ǰix�����ͱ��Զ������ˣ�����Ҫ����
int ix;
for (ix = 0; ix != sz; ++ix) { /* ... */ }
if (ix != sz)

//(b)
int ix;
for (ix != sz; ++ix) { /* ... */ }
// ������forѭ�����﷨������Ӧ��Ҫ����
int ix;
for (;ix != sz; ++ix) { /* ... */ }

//(c) 
for (int ix = 0; ix != sz; ++ix, ++sz) { /*...*/ }
// ���ѭ����Զ���������ˣ�����Ҫ����
for (int ix = 0; ix != sz; ++ix) { /*...*/ }


