#include <iostream>
using namespace std;

class Screen {
public:
	using pos = std::string::size_type;

	// ��Ϊ�����Լ��Ѿ�д��һ�����캯���ˣ�������������������������һ��Ĭ�Ϲ��캯������������Ҫ�����ذ�����ʾ����������
	Screen() = default;

	Screen(pos ht, pos wd, char c) :height(ht), width(wd),contents(ht*wd,c) { }
	char get() const {
		return contents[cursor];
	}
	// �����е�λ�ã����ظ����е��ַ�
	inline char get(pos ht, pos wd) const { return contents[ht * width + wd]; }
	Screen& move(pos r, pos c);

private:
	pos cursor = 0;				// ���
	pos height = 0, width = 0;	// �ߴ�
	std::string contents;		// ����
	
};

