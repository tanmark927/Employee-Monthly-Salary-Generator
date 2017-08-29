// Mark Tan
// CECS 282 LAB #5
#ifndef EDUCATION_H_
#define EDUCATION_H_
using namespace std;

class Education
{
private:
	string degree;
	string major;
	string research;
public:
	Education();
	Education(string d, string m, string r);
	void setDegree(string d);
	string getDegree();
	void setMajor(string m);
	string getMajor();
	void setResearch(string r);
	string getResearch();
	void printEdu();
};

#endif /* EDUCATION_H_ */
