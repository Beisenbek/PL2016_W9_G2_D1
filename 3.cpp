#include <iostream>
#include "student.h"

using namespace std;

int main(){

	freopen("students.txt","r",stdin);

	int n;

	cin >> n;

	student arr[10];

	readStudents(arr,n);
	printStudents(arr,n);

	return 0;
}