#include <iostream>
#include <string>
#include <cctype>

void a1z26_ciph() {
//  Variables
    std::string sText, sCipher, sKey;
    int iTemp;

    std::cout << "Enter text > ";
    std::cin.ignore();
    std::getline(std::cin, sText);

//  for loop to define the cipher text    
    for (int i = 0; i < sText.length(); i++) {
        
        if (isalpha(sText[i]) && isupper(sText[i])) {

            iTemp = sText[i] - 'A' + 1;
                              //passing iTemp to a string
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
//  printing out Cipher text    
    std::cout << sCipher << std::endl;
}   

