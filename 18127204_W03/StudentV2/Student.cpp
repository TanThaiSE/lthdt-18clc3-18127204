#include"Student.h"
Student::Student()
{
	_firstname = "Nguyen";
	_middlename = "Van";
	_lastname = "An";
}
Student::Student(string first, string middle, string last)
{
	_firstname = first;
	_middlename = middle;
	_lastname = last;
}
Student::Student(string first)
{
	_firstname = first;
	_middlename = "Van";
	_lastname = "Cong";
}
Student::Student(const Student& f)
{
	_firstname = f._firstname;
	_middlename = f._middlename;
	_lastname = f._lastname;
}
Student::~Student()
{

}