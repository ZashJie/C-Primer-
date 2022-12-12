// 11.2.1����ϰ�е�map �Ժ��ӵ���Ϊ�ؼ��֣��������ǵ�����vector����multimap ��д��map��

#include <map>
#include <iostream>
#include <string>

using namespace std;

int main() {
	multimap<string, string> families;

	for (string lname, cname; cin >> cname >> lname; families.emplace(cname, lname));
	
	for (auto const& family : families) {
		cout << family.first << " " << family.second << endl;
	}


}