using namespace std;

struct student{
	string name;
	string sname;
	double gpa;
};

void readStudents(student *arr,int n){
	for(int i = 0; i < n; ++i){
		cin >> arr[i].sname;
		cin >> arr[i].name;
		cin >> arr[i].gpa;
	}
}

void printStudents(student *arr,int n){
	for(int i = 0; i < n; ++i){
		cout << arr[i].sname << " " << arr[i].name << " " << arr[i].gpa << endl; 
	}
}

void sortStudentsForGPA(student *arr,int n){
	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(arr[i].gpa > arr[j].gpa){
				swap(arr[i],arr[j]);
			}else if(arr[i].gpa == arr[j].gpa){
				if(arr[i].sname > arr[j].sname){
					swap(arr[i],arr[j]);
				}
			}
		}
	}
}

void printStudentsAboveSomeGPA(student *arr,int n, double x){
	for(int i = 0; i < n; ++i){
		if(arr[i].gpa > x){
			cout << arr[i].sname << " " << arr[i].name << " " << arr[i].gpa << endl; 
		}
	}	
}

