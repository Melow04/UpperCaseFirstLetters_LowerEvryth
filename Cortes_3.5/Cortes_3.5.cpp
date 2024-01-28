#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
	int length = 100;
	int i; 

	string inputString;
	
	cout << "Enter a string: ";
	getline(cin, inputString);

	if (isalpha(inputString[0])) 
	{
		inputString[0] = toupper(inputString[0]);
	}

	for (i = 1; i < length && inputString[i] != '\0'; i++) 
	{
		if (inputString[i - 1] == ' ' && isalpha(inputString[i])) 
		{
			inputString[i] = toupper(inputString[i]);
		}
		else 
		{
			inputString[i] = tolower(inputString[i]);
		}
	}
	cout << "Fixed string: " << inputString;

	return 0;
}