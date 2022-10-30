#include <iostream>
#include <vector>
using namespace std;

class Screen;
class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	inline void clear(ScreenIndex);
	
private:
	std::vector<Screen> screens;

};


class Screen {
	friend void Window_mgr::clear(ScreenIndex);
public:
	using pos = std::string::size_type;

	// ��Ϊ�����Լ��Ѿ�д��һ�����캯���ˣ�������������������������һ��Ĭ�Ϲ��캯������������Ҫ�����ذ�����ʾ����������
	// һ��Ĭ�Ϲ��캯��
	Screen() = default;
	// ��һ�����캯�����ܿ�͸ߵ�ֵ��Ȼ��contents ��ʼ���ɸ��������Ŀհ�
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht* wd, ' ') { }
	// ���������캯�����ܿ�͸ߵ�ֵ�Լ�һ���ַ������ַ���Ϊ��ʼ������Ļ�����ݡ�
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c) { }

	inline Screen move(pos r, pos c);
	inline Screen set(char c);
	inline Screen set(pos r, pos c, char ch);

	Screen display(std::ostream& os);
	const Screen display(std::ostream& os) const;



	char get() const {
		return contents[cursor];
	}
	// �����е�λ�ã����ظ����е��ַ�
	inline char get(pos ht, pos wd) const { return contents[ht * width + wd]; }

private:

	void do_display(std::ostream& os) const { os << contents; }

	pos cursor = 0;				// ���
	pos height = 0, width = 0;	// �ߴ�
	std::string contents;		// ����

};

inline void Window_mgr::clear(ScreenIndex i) {
	Screen& s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

inline Screen Screen::move(pos r, pos c) {
	cursor = r * width + c;
	return *this;
}

inline Screen Screen::set(pos r, pos c, char ch) {
	contents[r * width + c] = ch;
	return *this;
}

inline Screen Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

Screen Screen::display(std::ostream& os) {
	do_display(os);
	return *this;
}
const Screen Screen::display(std::ostream& os) const {
	do_display(os);
	return *this;
}
