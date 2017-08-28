#include <iostream>  
#pragma hdrstop 
using namespace std; 

void determineGrade(int mark);  

//---------------------------------------------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[]){ 

	int mark; 

	cout << "Enter the students mark" << endl; 
	cin >> mark; 
	
	determineGrade(mark); 

	std::getchar();
	return 0; 
}  

void determineGrade(int mark){ 
	
	if( mark >= 80 ){ 
		cout << "Mark: " << mark << endl << "Grade: A" << endl << "Pass!" << endl;
	}else if( mark >= 65 ){ 
		cout << "Mark: " << mark << endl << "Grade: B" << endl << "Pass!" << endl; 
	}else if( mark >= 50 ){ 
		cout << "Mark: " << mark << endl << "Grade: C" << endl << "Pass!" << endl; 
	}else if( mark >= 40 ){ 
		cout << "Mark: " << mark << endl << "Grade: E" << endl << "Fail" << endl; 
	}else{ 
		cout << "Mark: " << mark << endl << "Grade: F" << endl << "Fail" << endl;
	}
}
