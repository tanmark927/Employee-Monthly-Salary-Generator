// Mark Tan
// CECS 282 LAB #5
#ifndef PARTTIME_H_
#define PARTTIME_H_
#include "Staff.h"
using namespace std;

const int num = 4;
class Parttime: public Staff
{
private:
	int hrsPerWeek;
public:
	Parttime();
	Parttime(string lName, string fName, string IDnum, char s, Date* bDate, double rate, int hrs);
	void setHrsPerWeek(int h);
	int getHrsPerWeek();
	int getHrsPerMonth();
	void putData();
	double monthlyEarning();
};

#endif /* PARTTIME_H_ */
