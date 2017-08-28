#include <iostream>  
#pragma hdrstop 
using namespace std; 

void printName( char [] );  

//---------------------------------------------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[]){ 

	char name[20];

	cout << "Please enter your name: "; 
	cin.get(name,20); 

	cout << endl << "Your names is: " << endl; 

	printName( name );
	

	std::getchar();
	return 0; 
}   

void printName( char name[] ){ 

	int i = 0; 

	while( name[ i ] != '\0' ){ 
		cout << "\t\t\t\t\t" << name[i] << endl; 
		i++;
	}

}

