#include "cmd.h"

namespace cmd {
    int options(std::string sCmd) {
    
        int iLength = sCmd.length();

        for (int i = 0; i < iLength; i++) {

            if (isalpha(sCmd[i])) {
            
                switch(sCmd[i]) {

                    case 'c':
                        return 1;
                    case 'a':
                        return 2;
                    case 'e':
                        return 3;
                    case 'p':
                        return 4;
                    default:
                        break;
                }
            }
        }
        return -500;
    }

    void print_help() {
        std::cout
            << "Usage:\n"
            << "       cryple {command} {arguments}\n"
            << "Example:\n"
            << "       cryple e -c\n"
            << "       cryple d -a\n";
    }
}
