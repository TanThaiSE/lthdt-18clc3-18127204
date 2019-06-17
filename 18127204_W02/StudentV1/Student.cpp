#include"Student.h"
Student::Student()
{
	_firstname = "Nguyen";
	_middlename = "Van";
	_lastname = "An";
}
Student::Student(string f, string m, string l)
{
	_firstname = f;
	_middlename = m;
	_lastname = l;
}
Student::~Student()
{

}