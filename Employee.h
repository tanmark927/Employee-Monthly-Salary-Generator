// Mark Tan
// CECS 282 LAB #5
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include "EmployeeInfo.h"
using namespace std;

class Employee
{
private:
	string lastName;
	string firstName;
	string IDnumber;
	char sex;
	Date* birthDate;
public:
	Employee();
	Employee(string lName, string fName, string IDnum, char s, Date* bDate);
	void setLastName(string lName);
	string getLastName();
	void setFirstName(string fName);
	string getFirstName();
	void setIDNumber(string IDnum);
	string getIDnumber();
	void setSex(char s);
	char getSex();
	void setBirthDate(Date* bDate);
	void getBirthDate();
	virtual void putData();
	virtual double monthlyEarning() = 0;
};

#endif /* EMPLOYEE_H_ */
