#include <iostream>
#include <string>
#include <cctype>
#include "cmd.hh"

bool bCaesar = false, bAffine = false, bAZ = false;

void cmd_options(std::string sCmd) {
    
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