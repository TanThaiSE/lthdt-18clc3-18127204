#include"Student.h"
int main()
{
	Student hs1;
	cout << hs1.get_firstname() << " " << hs1.get_middlename() << " " << hs1.get_lastname() << endl;
	string e = "Lai";
	string f = "Van";
	string g = "Cong";
	Student* hs3 = new Student(e, f, g);
	cout << hs3->get_firstname() << " " << hs3->get_middlename() << " " << hs3->get_lastname() << endl;
	string a = "Le";
	string b = "Thi";
	string c = "Binh";
	Student hs2(a, b, c);
	cout << hs2.get_firstname() << " " << hs2.get_middlename() << " " << hs2.get_lastname() << endl;
	Student hs4 = Student(hs1);
	cout << hs4.get_firstname() << " " << hs4.get_middlename() << " " << hs4.get_lastname() << endl;
}