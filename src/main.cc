#include <iostream>
#include <string>
#include "caesar.hpp"

#define MAX 1

int chooseciph() {

	int iTypecyph;

	std::cout 
		<< "What type of encryption you want"
		<< std::endl
		<< "1 - Caesar Cipher"
		<< std::endl
		<< "> ";
	std::cin >> iTypecyph;
	
	if (iTypecyph > MAX || iTypecyph <= 0)
	{
		std::cout << std::endl << "INVALID NUMBER" << std::endl;
		chooseciph();
	}
	else {
		return iTypecyph;
	}
	return 0;
}

int main(int argc, char *argv[]) {

	int iTypecyph = chooseciph();
	int iDeen = 0;

	do {
		std::cout
			<< std::endl
	    	<< "1 - Encrypt\n" 
	    	<< "2 - Decrypt\n"
			<< std::endl
			<< "> ";
		std::cin >> iDeen;
	} while(iDeen <= 0 || iDeen > 2);
	
	if (iDeen == 1) {	
		switch(iTypecyph) {
		
			case 0:
			 std::cout << "ERROR\n";
			 return 1;
			case 1:
			 caesarciph();
			 break;
		
			default:
			 break;
		}
	}
	else if (iDeen == 2) {	
		switch(iTypecyph) {
		
			case 0:
			 std::cout << "ERROR\n";
			 return 1;
			case 1:
		//	 caesardeciph();
			 break;
		
			default:
			 break;
		}
	}
}
