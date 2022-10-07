#include <iostream>
#include <string>
#include "caesar.hh"
#include "A1Z26.hh"
#include "affine.hh"
#define MAX 2

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
		else if(sTypecyph == "-f") {
			affine_ciph();
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
		else if(sTypecyph == "-f") {
			affine_deciph();
			return 0;
		}
		else {
			std::cout << "Invalid method" << std::endl;
			return 3;
		}
	}
}
