#include<iostream>
#include<string.h>
using namespace std;

/*strcmp() for string compare
negative str1 < str2
positive str1 > str2 */
int main(){
	
	char word1[20], word2[20];
	
	cout << "Enter first word : ";
	cin >> ws;
	cin.getline(word1, 20);
	
	cout << "Enter second word : ";
	cin >> ws;
	cin.getline(word2, 20);
	
	cout << "value return by strcmp() " << strcmp(word1, word2);
	
	if(strcmp(word1, word2) == 0)
		cout << endl << word1 << " equal to " << word2 <<endl;
	else 
		cout << endl << word1 << " is not equal to " << word2 <<endl;
	
	return(0);
}
