#include <iostream>
#include "student.h"

using namespace std;

int main(){

	student s;
	s.sname = "Omarov";
	s.name = "Marat";
	s.gpa = 3.5;

	student s2;
	s2.sname = "Sakenov";
	s2.name = "Murat";
	s2.gpa = 2.5;

	cout << (s.gpa+s2.gpa)/2;

	return 0;
}