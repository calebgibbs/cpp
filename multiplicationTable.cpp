#include <iostream>  
#pragma hdrstop 
using namespace std;  
void multiply(int); 
//---------------------------------------------------------------------------------------------------------------

#pragma argsused 
int main(int argc, char* argv[]){ 
 
	int number; 

	cout << "Please enter a number: "; 
	cin >> number; 

	multiply(number); 

	std::getchar();
	return 0; 
} 

void multiply(int number){ 
	int i; 
	int num = 1; 
	int equation; 

	cout << "Multiplication table for " << number << endl; 

	for( i = 0; i < 12; i++ ){
		equation = number * num; 
		cout << num << " times " << number << " is " << equation << endl; 
		num++; 
	}
}  

