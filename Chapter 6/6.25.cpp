#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

	std::string str;
	for (int i = 1;i != argc;++i) {
		str += std::string(argv[i]) + " ";
	}
	std::cout << str << endl;
	return 0;
}