// Mark Tan
// CECS 282 LAB #5
#include <iostream>
#include "Parttime.h"
using namespace std;

/**
 * Constructs a default constructor
 */
Parttime::Parttime(): Staff(),hrsPerWeek(0)
{ }

/**
 * Constructs a constructor with arguments
 */
Parttime::Parttime(string lName, string fName, string IDnum, char s, Date* bDate, double rate, int hrs)
: Staff(lName, fName, IDnum, s, bDate, rate), hrsPerWeek(hrs)
{ }
/**
 * Input hours per week
 */
void Parttime::setHrsPerWeek(int h)
{ hrsPerWeek = h; }
/**
 * Returns hours per week
 */
int Parttime::getHrsPerWeek()
{ return hrsPerWeek; }

int Parttime::getHrsPerMonth()
{
	return getHrsPerWeek() * num;
}

/**
 * Prints out information for parttime
 */
void Parttime::putData()
{
	Staff::putData();
	cout << "Hours worked per month: " << getHrsPerMonth() << endl;
}
/**
 * Returns monthly earning of parttime
 */
double Parttime::monthlyEarning()
{ return Staff::getHourlyRate() * getHrsPerMonth(); }
