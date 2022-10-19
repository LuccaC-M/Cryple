// BEGIN OF INCLUDES
#include <iostream>
#include <string>
#include "cmd.hh"
#include "caesar.hh"
#include "A1Z26.hh"
#include "affine.hh"
// END OF INCLUDES

#define MAX 2

int main(int argc, char *argv[]) {

	std::string sTypecyph = argv[2];
	std::string sDeen = argv[1];


	if (argc >= 2 && (argv[1] == "e" || argv[1] == "encryption")) {

		std::cout << "Enter a valid type of encryption" << std::endl;
		return 1;
	}
	else {

		std::cout
			<< "Usage:\n"
			<< "       cryple {command} {arguments}\n"
			<< "Example:\n"
			<< "       cryple e -c\n"
			<< "       cryple d -a\n";
		return 2;
	}


	cmd_options(sTypecyph);

	if (sDeen == "encryption" || sDeen == "e") {	
		
		if (bCaesar) {
			caesar_ciph();
			return 0;
		}
		else if(bAZ) {
			a1z26_ciph();
			return 0;
		}
		else if(bAffine) {
			affine_ciph();
			return 0;
		}
		else {
			std::cout << "Invalid method" << std::endl;
			return 3;
		}
	}
	else if (sDeen == "decryption" || sDeen == "d") {	

		if (bCaesar) {
			caesar_deciph();
			return 0;
		}
		else if(bAZ) {
			a1z26_deciph();
			return 0;
		}
		else if(bAffine) {
			affine_deciph();
			return 0;
		}
		else {
			std::cout << "Invalid method" << std::endl;
			return 3;
		}
	}
}
