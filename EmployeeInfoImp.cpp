// Mark Tan
// CECS 282 LAB #5
#include <iostream>
#include "EmployeeInfo.h"
using namespace std;

/**
 * Constructs a default constructor
 */
Date::Date() : m(0),d(0),y(0)
{ }
/**
 * Constructs a constructor with arguments
 */
Date::Date(int month, int day, int year): m(month),d(day),y(year)
{ }
/**
 * Input month,day,year
 */
void Date::getDate()
{ cin >> m; cin >> d; cin >> y; }
/**
 * Prints stored month,date,year
 */
void Date::showDate()
{ cout << m << "/" << d << "/" << y << endl; }
/**
 * Prints month,date,year as passed by arguments
 */
void Date::showDate(int m,int d,int y)
{ cout << m << "/" << d << "/" << y << endl; }
