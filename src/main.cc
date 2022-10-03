#include <iostream>
#include <string>
#include "caesar.hpp"
#include "A1Z26.hpp"

#define MAX 2

int choose_ciph() {

	int iTypecyph;

	std::cout 
		<< "What type of encryption you want"
		<< std::endl
		<< "1 - Caesar Cipher\n"
		<< "2 - A1Z26"
		<< std::endl
		<< "> ";
	std::cin >> iTypecyph;
	
	if (iTypecyph > MAX || iTypecyph <= 0)
	{
		std::cout << std::endl << "INVALID NUMBER" << std::endl;
		choose_ciph();
	}
	else {
		return iTypecyph;
	}
	return 0;
}

int main(int argc, char *argv[]) {

	int iTypecyph = choose_ciph();
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
			 caesar_ciph();
			 break;
			case 2:
			 a1z26_ciph();
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
			 caesar_deciph();
			 break;
			case 2:
			 std::cout << "W.I.P." << std::endl;
			 break;
			default:
			 break;
		}
	}
}
