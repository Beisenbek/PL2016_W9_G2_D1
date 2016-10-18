#include <iostream>
#include "student.h"

using namespace std;

void printMenu(){
	cout << "0 - Print all students" << endl;
	cout << "1 - Print all students in sorted order for GPA" << endl;
	cout << "2 - Print all students which have gpa more than entered" << endl;
	cout << "3 - Exit" << endl;
}

int main(){

	//freopen("students.txt","r",stdin);

	int n,k;
	cin >> n;
	student arr[10];

	readStudents(arr,n);
	printStudents(arr,n);

	do{

		printMenu();

		cin >> k;

		if(k == 0){
			printStudents(arr,n);
		}else if(k == 1){
			sortStudentsForGPA(arr,n);
			printStudents(arr,n);
		}else if(k == 2){
			double x;
			cin >> x;
			printStudentsAboveSomeGPA(arr,n,x);
		}
		
	}while(k!=3);
	
	return 0;
}