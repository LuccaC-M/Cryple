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
    std::cout << (option == 4);

	if (std::strcmp(argv[1], "e")) {	
        if (option == 1)
            caesar::ciph();
        else if (option == 2)
            az::ciph();
        else if (option == 3)
            affine::ciph();
        else if (option == 4)
            pl::ciph();
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
