#include <iostream>  
// #include <tchar.h>

#pragma hdrstop 
using namespace std; 

//---------------------------------------------------------------------------------------------------------------

#pragma argsused 
int main(int argc, char* argv[]){ 

	float far; 
	float cel; 

	cout << "Enter the fahrenheight temperature "; 
	cin >> far; 

	cel = (far + 40) * 5 / 9 - 40;  

	cout << "Temperature Conversion Table" << endl << endl << endl; 

	cout << "Fahrenheight      |        Celsius" << endl; 
	cout << "------------------|---------------" << endl; 
	cout << far << "                           " << cel << endl;  

	std::getchar();
	return 0; 
}