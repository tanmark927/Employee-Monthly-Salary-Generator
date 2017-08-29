// Mark Tan
// CECS 282 LAB #5
#include <iostream>
#include <iomanip>
#include <typeinfo>
#include "Staff.h"
#include "Faculty.h"
#include "Parttime.h"
using namespace std;

bool isParttime(Employee* pUnknown)
{
	Parttime* pParttime;
	if(pParttime = dynamic_cast<Parttime*>(pUnknown))
		return true;
	else
		return false;
}
int main()
{
	Employee* employees[9];
	Staff s1("Allen", "Paita", "123", 'M', new Date(2,23,59), 50.00);
	Staff s2("Zapata", "Steven", "456", 'F', new Date(7,12,64), 35.00);
	Staff s3("Rios", "Enrique", "789", 'M', new Date(6,2,70), 40.00);
	Faculty f1("Johnson", "Anne", "243", 'F', new Date(4,7,62), "Full", new Education("Ph.D", "Engineering", "3"));
	Faculty f2("Bouris", "William", "791", 'F', new Date(3,14,75), "Associate", new Education("Ph.D", "English", "1"));
	Faculty f3("Andrade", "Christopher", "623", 'F', new Date(5,22,80), "Assistant", new Education("MS", "Physical Education", "0"));
	Parttime p1("Guzman", "Augusto", "455", 'F', new Date(8,10,77), 35.00, 30);
	Parttime p2("Depirro", "Martin", "678", 'F', new Date(9,15,87), 30.00, 15);
	Parttime p3("Aldaco", "Marque", "945", 'M', new Date(11,24,88), 20.00, 35);
	employees[0] = &s1; employees[1] = &s2; employees[2] = &s3;
	employees[3] = &f1; employees[4] = &f2; employees[5] = &f3;
	employees[6] = &p1; employees[7] = &p2; employees[8] = &p3;

	for( int i = 0; i < 9; i++)
	{ employees[i]->putData(); cout << endl; }

	double monthlyEarningAll = 0.0;
	double monthlyEarningParttime = 0.0;
	for(int i = 0; i < 9; i++)
	{
		monthlyEarningAll += employees[i]->monthlyEarning();
		//if(dynamic_cast<Parttime*>(employees[i]))
		if(isParttime(employees[i]))
			monthlyEarningParttime += employees[i]->monthlyEarning();
	}

	cout << setprecision(2) << fixed;
	cout << "Total monthly salary for all part-time staff: $" << monthlyEarningParttime << endl;
	cout << "Total monthly salary for all employees: $" << monthlyEarningAll << endl;
	return 0;
}
