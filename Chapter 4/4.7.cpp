#include<iostream>
using namespace std;

int main() {

	short svalue = 32767;	//short�����ֵΪ32767
	cout << "svalue:" << svalue << endl;	
	++svalue;
	cout << "svalue:" << svalue << endl;	// -32768

	unsigned uivalue = 0;	//unsigned����СֵΪ0
	cout << "uivalue:" << uivalue << endl;
	--uivalue;	
	cout << "uivalue:" << uivalue << endl;	// 4294967295

	unsigned short usvalue = 65535;		// unsigned short�����ֵΪ65535
	cout << "usvalue:" << usvalue << endl;
	++usvalue;
	cout << "usvalue:" << usvalue << endl;	// 0


	return 0;
}