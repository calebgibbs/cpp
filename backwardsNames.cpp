#include <iostream>  
#pragma hdrstop 
using namespace std;  

void printName(const std::string& name);

//---------------------------------------------------------------------------------------------------------------

#pragma argsused 
int main(int argc, char* argv[]){ 
 
	string name; 	

	cout << "Enter your name: ";
	cin >> name; 

	cout << endl  << endl; 

	cout << "Your name backwards: ";  

	printName(name);

	std::getchar();
	return 0; 
}  

void printName(const std::string& name){ 
	int i; 
	char current; 
	char upper;
	for(i = name.length()-1; i >=0; i--){
		current = name[i]; 
		upper = toupper(current);
		cout << upper;
	}  

	cout << endl  << endl << endl;
}

