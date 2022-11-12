#include "cmd.h"
#include <string>
#include <iostream>

bool bCaesar = false, bAffine = false, bAZ = false;

namespace cmd {
    void options(std::string sCmd) {
    
        int iLength = sCmd.length();

        for (int i = 0; i < iLength; i++) {

            if (isalpha(sCmd[i])) {
            
                switch(sCmd[i]) {

                    case 'c':
                        bCaesar = true;
                        break;
                    case 'a':
                        bAZ = true;
                        break;
                    case 'e':
                        bAffine = true;
                        break;
                }
            }
        }
    }

    void help() {
        std::cout
            << "Usage:\n"
            << "       cryple {command} {arguments}\n"
            << "Example:\n"
            << "       cryple e -c\n"
            << "       cryple d -a\n";
    }
}
