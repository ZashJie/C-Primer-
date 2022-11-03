#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>
using std::string;// using std::

int main() {
	// fstream - �ļ��� ifstream - �����ļ������üǣ�
	std::ifstream ifs("file.txt");
	std::string buf;
	std::vector<std::string> svec;
	while (getline(ifs, buf)) {
		svec.push_back(buf);
	}
	

	for (auto& s : svec) {
		// istringstream - �����ַ��������üǣ�
		std::istringstream iss(s);
		string word;
		while (iss >> word) {
			std::cout << word << "," ;
		}
		std::cout << std::endl;
	}



	return 0;
}