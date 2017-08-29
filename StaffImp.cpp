// Mark Tan
// CECS 282 LAB #5
#include <iostream>
#include "Staff.h"
#include <iomanip>
using namespace std;

/**
 * Constructs a default constructor
 */
Staff::Staff() : Employee(), hourlyRate(0)
{ }

/**
 * Constructs a constructor with arguments
 */
Staff::Staff(string lName, string fName, string IDnum, char s, Date* bDate, double rate)
: Employee(lName, fName, IDnum, s, bDate), hourlyRate(rate)
{ }
/**
 * Input hourly rate
 */
void Staff::setHourlyRate(double rate)
{ hourlyRate = rate; }
/**
 * Returns hourly rate
 */
double Staff::getHourlyRate()
{ return hourlyRate; }
/**
 * Prints out information of staff
 */
void Staff::putData()
{ Employee::putData(); cout << setprecision(2) << fixed; cout << "Monthly Salary: $" << monthlyEarning() << endl; }
/**
 * Returns monthly earning of staff
 */
double Staff::monthlyEarning()
{ return hourlyRate * STAFF_MONTHLY_HOURS_WORKED; }
