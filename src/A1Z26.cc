#include <iostream>
#include <string>
#include <cctype>

void a1z26_ciph() {

    std::string sText, sCipher, sKey;
    int iTemp;

    std::cout << "Enter text > ";
    std::cin.ignore();
    std::getline(std::cin, sText);

    for (int i = 0; i < sText.length(); i++) {
        
        if (isalpha(sText[i]) && isupper(sText[i])) {

            iTemp = sText[i] - 'A' + 1;
            sCipher = sCipher + std::to_string(iTemp) + " ";
        }
        else if (isalpha(sText[i]))
        {
            
            iTemp = sText[i] - 'a' + 1;
            sCipher = sCipher + std::to_string(iTemp) + " ";
        }
        else if (isspace(sText[i]) == 0) {
            sCipher = sCipher + "(" + sText[i] + ")" + " ";
        }

    }
    
    std::cout << sCipher << std::endl;
}   

