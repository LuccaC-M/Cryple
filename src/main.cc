// BEGIN OF INCLUDES
#include <iostream>
#include <string>
#include "cmd.h"
#include "caesar.h"
#include "A1Z26.h"
#include "affine.h"
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

    std::string type_of_cipher = argv[2];
    std::string de_or_encrypt = argv[1];

    cmd::options(type_of_cipher);

	if (de_or_encrypt == "encryption" || de_or_encrypt == "e") {	
		
        if (bCaesar) {
            caesar::ciph();
            return 0;
		}
        else if(bAZ) {
            az::ciph();
            return 0;
		}
        else if(bAffine) {
            affine::ciph();
            return 0;
		}
        else {
            std::cout << "Invalid method" << std::endl;
            return 3;
		}
	}
	else if (de_or_encrypt == "decryption" || de_or_encrypt == "d") {	

		if (bCaesar) {
			caesar::deciph();
			return 0;
		}
		else if(bAZ) {
			az::deciph();
			return 0;
		}
		else if(bAffine) {
            affine::deciph();
			return 0;
		}
		else {
			std::cout << "Invalid method" << std::endl;
			return 3;
		}
	}
}
