#include "A1Z26.h"

namespace az{
    void ciph() {
//  Variables
        std::string sText, sCipher, sKey;
        int iTemp;

        std::cout << "Enter text > ";
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
            else {
                sCipher = sCipher + sText[i];
            }

        }
//  printing out Cipher text    
        std::cout << sCipher << std::endl;
    }
    void deciph() {
//  Variables
        std::string sText, sDecipher, sKey;
        int iTemp;

        std::cout << "Enter text > ";
        std::getline(std::cin, sText);

//  for loop to decrypt the text    
        for (int i = 0; i < sText.length(); i++) {
        

            if (isdigit(sText[i]) && !isdigit(sText[i+1])) {

                sDecipher = sDecipher + (char)(sText[i] + 48);
            }
            else if (isdigit(sText[i]) && isdigit(sText[i+1])) {
                iTemp = (((((sText[i] - 48) * 10) - 1) + (sText[i+1] - 48)) + 'a');
                sDecipher = sDecipher + (char) iTemp;
                i++;
            }
            else if (!isspace(sText[i])) {
                sDecipher = sDecipher + sText[i];
            }

        }
//  printing out Cipher text    
        std::cout << sDecipher << std::endl;
    }
}
