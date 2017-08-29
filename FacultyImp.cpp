// Mark Tan
// CECS 282 LAB #5
#include <iostream>
#include <iomanip>
#include "Faculty.h"
using namespace std;

/**
 * Constructs a default constructor
 */
Faculty::Faculty() : Employee(), level(static_cast<Level>(0)), edu(new Education())
{}

/**
 * Constructs a constructor with arguments
 */
Faculty::Faculty(string lName, string fName, string IDnum, char s, Date* bDate, string l, Education* e)
: Employee(lName, fName, IDnum, s, bDate), edu(e)
{
	if(l == "Assistant")
		level = AS;
	else if(l == "Associate")
		level = AO;
	else if (l == "Full")
		level = FU;
}
/**
 * Input level
 */
void Faculty::setLevel(Level l)
{ level = l; }
/**
 * Print out level
 */
string Faculty::getLevel()
{
	string facultyLevel = "";
	if(level == AS)
		facultyLevel = "Assistant ";
	else if(level == AO)
		facultyLevel = "Associate ";
	else if (level == FU)
		facultyLevel = "Full ";
	return facultyLevel;

}
/**
 * Input education
 */
void Faculty::setEducation(Education* e)
{ edu = e; }
/**
 * Returns education
 */
void Faculty::getEducation()
{ edu->printEdu(); }
/**
 * Prints out faculty information
 */
void Faculty::putData()
{
	Employee::putData();
	cout << getLevel() << "Professor" << endl;
	cout << setprecision(2) << fixed;
	cout << "Monthly Salary: $" << monthlyEarning() << endl;
}
/**
 * Returns monthly earning of faculty
 */
double Faculty::monthlyEarning()
{
	double monthlyEarning = 0.0;
	switch(level)
	{
	case AS:
		monthlyEarning = FACULTY_MONTHLY_SALARY;
		break;
	case AO:
		monthlyEarning = assocProfRate * FACULTY_MONTHLY_SALARY;
		break;
	case FU:
		monthlyEarning = profRate * FACULTY_MONTHLY_SALARY;
		break;
	}
	return monthlyEarning;
}
