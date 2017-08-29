// Mark Tan
// CECS 282 LAB #5
#ifndef FACULTY_H_
#define FACULTY_H_
#include "Employee.h"
#include "Education.h"
using namespace std;

const double assocProfRate = 1.2;
const double profRate = 1.4;

class Faculty: public Employee
{
private:
	enum Level
	{ AS,AO,FU };
	Level level;
	Education* edu;
public:
	Faculty();
	Faculty(string lName, string fName, string IDnum, char s, Date* bDate, string l, Education* e);
	void setLevel(Level l);
	string getLevel();
	void setEducation(Education* e);
	void getEducation();
	void putData();
	double monthlyEarning();
};

#endif /* FACULTY_H_ */
