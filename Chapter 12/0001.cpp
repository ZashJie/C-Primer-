#include <iostream>
using namespace std;

class Rect {
public:
	Rect(int x, int y) : length(x), width(y) {

	}
	friend bool area_compare(Rect, Rect);
private:
	int length;
	int width;
};

bool area_compare(Rect x, Rect y) {
	if (x.length * x.width > y.length * y.width) {
		// ��ߵĴ󣬷���true
		return true;
	}
	else {
		// �ұߵĴ󣬷���false
		return false;
	}
}

int main() {
	Rect a(1, 3);
	Rect b(2, 3);

	if (area_compare(a, b)) {
		cout << "a�������b��" << endl;
	}
	else
	{
		cout << "b�������a��" << endl;
	}
	return 0;
}