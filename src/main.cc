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

	if (argc == 1) {
		std::cout 
			<< "Usage: cryple e/d [...]\n"
			<< "cryple {e -c}\n"
			<< "cryple {e -a}\n";
			return 1;
	}
	if (argc == 2) {
		std::cout
			<< "Please choose an encryption method\n"
			<< "-c Caesar cipher\n"
			<< "-a A1Z26 cipher\n";
			return 2;
	}
	
	std::string sTypecyph = argv[2];
	std::string sDeen = argv[1];
	
	if (sDeen == "encryption" || sDeen == "e") {	
		
		if (sTypecyph == "-c") {
			caesar_ciph();
			return 0;
		}
		else if(sTypecyph == "-a") {
			a1z26_ciph();
			return 0;
		}
		else {
			std::cout << "Invalid method" << std::endl;
			return 3;
		}
	}
	else if (sDeen == "decryption" || sDeen == "d") {	

		if (sTypecyph == "-c") {
			caesar_deciph();
			return 0;
		}
		else if(sTypecyph == "-a") {
			a1z26_deciph();
			return 0;
		}
		else {
			std::cout << "Invalid method" << std::endl;
			return 3;
		}
	}
}
