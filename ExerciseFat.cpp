#include<iostream>
#include<string.h>
using namespace std;

//percent fat = ((gram * 9)/num_cal)*100
int main(){
	char food[50];
	float num_cal, fat, gram_fat;
	
	cout << "Enter the name of the food : ";
	cin >> ws;
	cin.getline(food, 50);
	cout << "Enter the number of calories per serving : ";
	cin >> num_cal;
	cout << "Enter grams of fat per serving : ";
	cin >> gram_fat;
	
	fat = ((gram_fat * 9)/num_cal)* 100;
	
	cout << food << " contains " << fat << "% calories from fat" <<endl;
	
	if(fat > 30)
		cout << food << " exceeds the AHA recommendations" <<endl;
	else
		cout << food << " not exceeds the AHA recommendations" <<endl;
		
	return(0);
}
