#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	string _firstname;
	string _middlename;
	string _lastname;
public:
	string get_firstname() { return _firstname; }
	string get_middlename() { return _middlename; }
	string get_lastname() { return _lastname; }
	void set_firstname(string firstname) { _firstname = firstname; }
	void set_middlename(string middlename) { _middlename = middlename; }
	void set_lastname(string lastname) { _lastname = lastname; }
public:
	Student();
	Student(string, string, string);
	Student(string);
	Student(const Student&);
	~Student();
};