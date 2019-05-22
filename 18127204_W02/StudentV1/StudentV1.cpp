#include"Student.h"
int main()
{
	Student hs1;
	cout << "First name:" << hs1.get_firstname() << "-Middle name:" << hs1.get_middlename() << "-Last name:" << hs1.get_lastname()<<endl;
	string a = "Le";
	string b = "Thi";
	string c = "Binh";
	Student hs2(a, b, c);
	cout << "First name:" << hs2.get_firstname() << "-Middle name:" << hs2.get_middlename() << "-Last name:" << hs2.get_lastname()<<endl;
	string e = "Lai";
	string f = "Van";
	string g = "Cong";
	Student* hs3 = new Student(e, f, g);
	cout << "First name:" << hs3->get_firstname() << "-Middle name:" << hs3->get_middlename() << "-Last name:" << hs3->get_lastname() << endl;
}