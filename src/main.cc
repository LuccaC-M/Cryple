// BEGIN OF INCLUDES
#include <iostream>
#include <string>
#include "cmd.hh"
#include "caesar.hh"
#include "A1Z26.hh"
#include "affine.hh"
// END OF INCLUDES

#define MAX 2

int main(const int argc, const char *argv[]) {

	if (argc < 2) {
		cmd::help();
		return 1;
	} else if ((std::string) argv[1] == "--help") {
		cmd::help();
		return 0;
	}

	 std::string sTypecyph = argv[2];
     std::string sDeen = argv[1];

	 cmd::options(sTypecyph);

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
