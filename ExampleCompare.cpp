#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char capital[10];
	 
	cout << "Do you know the capital of ALASKA? ";
	cin >> capital;
		if(strcmp(capital, "Juneau") ==0 || strcmp(capital, "juneau") ==0) //pipe symbol is 'or'
	 		cout << "Congratulations, your answer is correct " <<endl;
	 	else
	 		cout << "WRONG!! Please try again" <<endl;
	
	return(0);
}
