#include<iostream>
using namespace std;

int main(){
	
	int age;
	
	cout << "Please enter your age" <<endl;
	cin >> age;
	
	if(age >= 17)
		cout << "You are allowed to take driving license" <<endl;
	else
		cout << "You are underage" <<endl;
		
		return(0);
}
