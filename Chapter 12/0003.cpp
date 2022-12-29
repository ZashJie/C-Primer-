#include<iostream>
using namespace std;

class Book
{
private:
	string bookname;
	string authors;
	int pages;
	string publishing_house;
	double price;
public:
	Book(const string bk, const  string aut, int pag, const  string pub, double pri);
	string getBookname();
	string getAuthors();
	int getPages();
	string getPublishing_house();
	double getPrice();

	void  setBookname(string bk);
	void  setAuthors(string aut);
	void  setPages(int pag);
	void  setPublishing_house(string pub);
	void  setPrice(double pri);

	void print();
};

Book::Book(const string bk, const string aut, int pag, const string pub, double pri)
{
	
	bookname = bk;
	authors = aut;
	pages = pag;
	publishing_house = pub;
	price = pri;
}

string Book::getBookname()
{
	return bookname;
}
string Book::getAuthors()
{
	return authors;
}
int Book::getPages()
{
	return pages;
}
string Book::getPublishing_house()
{
	return publishing_house;
}
double Book::getPrice()
{
	return price;
}


void  Book::setBookname(string bk)
{
	bookname = bk;
}
void  Book::setAuthors(string aut)
{
	authors = aut;
}
void  Book::setPages(int pag)
{
	pages = pag;
}
void  Book::setPublishing_house(string pub)
{
	publishing_house = pub;
}
void  Book::setPrice(double pri)
{
	price = pri;
}

void Book::print()
{
	cout << "������" << bookname << "\n���ߣ�" << authors
		<< "����\nҳ����" << pages << "ҳ\n�����磺" << publishing_house <<
		"\n�۸�" << getPrice() << "Ԫ\n" << endl;
}


int main()
{
	string name = "C++�������";
	Book b1(name, "̷��ǿ", 485, "�廪��ѧ������", 36.00);
	cout << b1.getBookname() << endl << endl;
	b1.print();

	Book b2("��ţ�������ռ�", "��˹����", 149, "������������", 12.80);
	b2.print();
}