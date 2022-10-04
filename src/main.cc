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
	}
	if (argc = 2) {
		std::cout
			<< "Please choose an encryption method\n"
			<< "-c Caesar cipher\n"
			<< "-a A1Z26 cipher\n"
	}
	
	std::string sTypecyph = argv[2];
	std::string sDeen = argv[1];
	
	if (sDeen == "encryption" || sDeen == "e") {	
		switch(sTypecyph) {
		
			case "-c":
			 caesar_ciph();
			 break;
			case "-a":
			 a1z26_ciph();
			 break;
			default:
			 std::cout << "Invalid method" << std::endl;
			 break;
		}
	}
	else if (sDeen == "decryption" || sDeen == "d") {	
		switch(sTypecyph) {

			case "-c":
			 caesar_deciph();
			 break;
			case "-a":
			 std::cout << "W.I.P." << std::endl;
			 break;
			default:
			 std::cout << "Invalid method" << std::endl;
			 break;
		}
	}
}
