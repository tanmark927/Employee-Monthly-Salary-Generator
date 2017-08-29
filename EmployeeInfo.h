// Mark Tan
// CECS 282 LAB #5
#ifndef EMPLOYEEINFO_H_
#define EMPLOYEEINFO_H_

const double FACULTY_MONTHLY_SALARY = 5000.00;
const int STAFF_MONTHLY_HOURS_WORKED = 160;

class Date
{
private:
	int m,d,y;
public:
	Date();
	Date(int month, int day, int year);
	void getDate();
	void showDate();
	void showDate(int m, int d, int y);
};

#endif /* EMPLOYEEINFO_H_ */
