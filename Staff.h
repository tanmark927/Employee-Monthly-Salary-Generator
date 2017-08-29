// Mark Tan
// CECS 282 LAB #5
#ifndef STAFF_H_
#define STAFF_H_
#include "Employee.h"
using namespace std;
class Staff: public Employee
{
private:
	double hourlyRate;
public:
	Staff();
	Staff(string lName, string fName, string IDnum, char s, Date* bDate, double rate);
	void setHourlyRate(double rate);
	double getHourlyRate();
	void putData();
	double monthlyEarning();
};

#endif /* STAFF_H_ */
