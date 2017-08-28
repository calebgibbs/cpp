#include <iostream>  
#pragma hdrstop 
using namespace std; 

void singleLineDigit(int);  

//---------------------------------------------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[]){ 
  	
	int fourDigitNumber; 

	cout << "Enter a four digit number ";
	cin >> fourDigitNumber;  

	singleLineDigit(fourDigitNumber); 

	std::getchar();
	return 0; 
} 

void singleLineDigit(int num){ 

	cout << num / 1000 << endl; 
	cout << num / 100 % 10 << endl; 
	cout << num / 10 % 10 << endl; 
	cout << num / 1 % 10 << endl;   
}