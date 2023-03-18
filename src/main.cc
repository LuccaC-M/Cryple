#include <iostream>
#include <string>
#include <cstring>

#include "cmd.h"
#include "caesar.h"
#include "A1Z26.h"
#include "affine.h"
#include "piglatin.h"

#define MAX 2

int main(const int argc, const char *argv[]) {

	if (argc < 2) {
		cmd::print_help();
		return 1;
	} 
    if (!std::strcmp(argv[1], "--help") || !std::strcmp(argv[1], "-h")) {
		cmd::print_help();
		return 0;
	}


    int option = cmd::options((std::string) argv[2]);

	if (std::strcmp(argv[1], "e")) {	
        switch(option) {
            case 1:
                caesar::ciph();
                break;
            case 2:
                az::ciph();
                break;
            case 3:
                affine::ciph();
                break;
            case 4:
                std::cout << "help!";
                pl::ciph();
                break;
            default:
                std::cout << "Invalid option\n"; 
                break;
        }
	}
	else if (std::strcmp(argv[1], "d")) {	

        switch(option) {
            case 1:
                caesar::deciph();
                break;
            case 2:
                az::deciph();
                break;
            case 3:
                affine::deciph();
                break;
            case 4:
               // TODO pl::deciph();
                break;
            default:
                std::cout << "Invalid option\n"; 
                break;
        }
	}
}
