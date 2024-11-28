#include<iostream>
using namespace std;

int main(){
	
	char student_name[50], grade;
	int id;
	float test1, test2, average;
	
	cout << "Please enter your name : " <<endl;
	cin >> ws;
	cin.getline(student_name, 50);
	cout << "Please enter your student ID : " <<endl;
	cin >> id;
	cout << "Please enter your mark for Test 1 : " <<endl;
	cin >> test1;
	cout << "Please enter your mark for Test 2 : " <<endl;
	cin >> test2;
	
	average = (test1 + test2)/2.0;
	
		if(average >= 90 && average <= 100)
			grade = 'A';
		else if(average >= 70)
			grade = 'B';
		else if(average >= 60)
			grade = 'C';
		else if(average >= 45)
			grade = 'D';
		else if(average >= 40)
			grade = 'E';
		else
			grade = 'F';
	
	cout << "" <<endl;		
	cout << "Name         : " << student_name <<endl;
	cout << "Student ID   : " << id <<endl;
	cout << "Test 1       : " << test1 <<endl;
	cout << "Test 2       : " << test2 <<endl;
	cout << "Average mark : " << average <<endl;
	cout << "Grade        : " << grade <<endl;
		
		return(0);
}
