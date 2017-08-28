#include <iostream>  
// #include <tchar.h>

#pragma hdrstop 
using namespace std; 

//---------------------------------------------------------------------------------------------------------------

#pragma argsused 
int main(int argc, char* argv[]){ 

	float pounds; 
	float kilograms; 

	cout << "Enter the weight in pounds "; 
	cin >> pounds; 

	kilograms = pounds / 2.200; 

	cout << "The weight of " << pounds << " pounds is equal to " << kilograms << " kilograms"; 

	std::getchar();
	return 0; 
}