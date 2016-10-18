#include <iostream>
#include "student.h"

using namespace std;

int main(){

	freopen("students.txt","r",stdin);

	int n;

	cin >> n;

	student arr[10];

	for(int i = 0; i < n; ++i){
		cin >> arr[i].sname;
		cin >> arr[i].name;
		cin >> arr[i].gpa;
	}

	double avg = 0;

	for(int i = 0; i < n; ++i){
		avg = avg + arr[i].gpa;
	}

	cout << avg/n << endl;

	return 0;
}