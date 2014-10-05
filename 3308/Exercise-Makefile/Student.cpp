// Student class
#include <iostream>
#include "Student.h"
using namespace std;


/*
int main()
{
	Student liz = Student();
	//cout << liz.firstName << endl;	// private so we can't
	//liz.firstName = "Elizabeth";		// private so we can't
	cout << liz.getFirstName() << endl;
	cout << liz.getLastName() << endl;
	liz.setFirstName("Elizabeth");
	cout << liz.getFirstName() << endl;
	// cout << setFirstName("goo") << endl; // does not work
	Student cm = Student("Cookie", "Monster", 7);
	cm = Student();
	cout << cm.getFirstName() << cm.getLastName() << endl;
	return 0;
}
*/

Student::Student()
{
	firstName = "Unknown";
	lastName = "Unknown";
	age = 0;
}
Student::Student(string fn, string ln, int _age)
{
	firstName = fn;
	lastName = ln;
	age = _age;
}
string Student::getFirstName()
{
	return firstName;
}
string Student::getLastName()
{
	return lastName;
}
int Student::getAge()
{
	return age;
}
void Student::setFirstName(string fn)
{
	firstName = fn;
}
void Student::setLastName(string ln)
{
	lastName = ln;
}
void Student::setAge(int _age)
{
	age = _age;
}

