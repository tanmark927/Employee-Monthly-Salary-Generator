// Mark Tan
// CECS 282 LAB #5
#include <iostream>
#include "Education.h"
using namespace std;

/**
 * Constructs a default constructor
 */
Education::Education()
{ degree = ""; major = ""; research = ""; }
/**
 * Constructs a constructor with arguments
 */
Education::Education(string d, string m, string r)
{ degree = d; major = m; research = r; }
/**
 * Input degree
 */
void Education::setDegree(string d)
{ degree = d; }
/**
 * Returns degree
 */
string Education::getDegree()
{ return degree; }
/**
 * Input degree
 */
void Education::setMajor(string m)
{ major = m; }
/**
 * Returns degree
 */
string Education::getMajor()
{ return major; }
/**
 * Input research
 */
void Education::setResearch(string r)
{ research = r; }
/**
 * Returns research
 */
string Education::getResearch()
{ return research; }

void Education::printEdu()
{ cout << getDegree() << " " << getMajor() << " " << getResearch() << endl; }
