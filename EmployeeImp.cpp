// Mark Tan
// CECS 282 LAB #5
#include <iostream>
#include "Employee.h"
using namespace std;

/**
 * Constructs a default constructor
 */
Employee::Employee()
{
	lastName = "";
	firstName = "";
	IDnumber = "";
	sex = 'a';
	birthDate = new Date();
}
/**
 * Constructs a constructor with arguments
 */
Employee::Employee(string lName, string fName, string IDnum, char s, Date* bDate)
: lastName(lName), firstName(fName), IDnumber(IDnum), sex(s), birthDate(bDate)
{ }

/**
 * Input last name
 */
void Employee::setLastName(string lName)
{ lastName = lName; }
/**
 * Returns last name
 */
string Employee::getLastName()
{ return lastName; }
/**
 * Input first name
 */
void Employee::setFirstName(string fName)
{ firstName = fName; }
/**
 * Returns last name
 */
string Employee::getFirstName()
{ return firstName; }
/**
 * Input ID number
 */
void Employee::setIDNumber(string IDnum)
{ IDnumber = IDnum; }
/**
 * Returns ID number
 */
string Employee::getIDnumber()
{ return IDnumber; }
/**
 * Input sex
 */
void Employee::setSex(char s)
{ sex = s; }
/**
 * Returns sex
 */
char Employee::getSex()
{ return sex; }
/**
 * Input birthdate
 */
void Employee::setBirthDate(Date* bDate)
{ birthDate = bDate; }
/**
 * Returns birthdate
 */
void Employee::getBirthDate()
{ birthDate->showDate(); }
/**
 * Prints out information of employee
 */
void Employee::putData()
{
	cout << "ID employee number: " << getIDnumber() << endl;
	cout << "Employee name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Birth date: ";
	getBirthDate();
}
