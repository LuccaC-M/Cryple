#include "caesar.h"

#define CAESAR_MAXKEY 26

namespace caesar{
    void ciph() {

        std::string sText, sCipher;
        int iKey;

        do {
            std::cout << "Enter key > ";
            std::cin >> iKey;
        } while(iKey < 0 || iKey > CAESAR_MAXKEY);
        
        std::cout << "Enter text > ";
        std::cin.ignore();
        std::getline(std::cin, sText);
        sCipher = sText;
        
        for (int i = 0; i < sText.length(); i++) {

            if (isalpha(sText[i]) && isupper(sText[i])) {
                sCipher[i] = (sText[i] - 'A' + iKey) % 26 + 'A';
            }
            else if (isalpha(sText[i]))
            {
                sCipher[i] = (sText[i] - 'a' + iKey) % 26 + 'a';
            }
        }
        std::cout << sCipher << std::endl;
    }
    void deciph() {

        std::string sText, sDecipher;
        int iKey = 0;

        do {
            std::cout << "Enter key > ";
            std::cin >> iKey;

        } while(iKey <= 0 || iKey >= CAESAR_MAXKEY);
        
        std::cout << iKey;
        
        std::cout << "Enter text > ";
        std::cin.ignore();
        std::getline(std::cin, sText);
        sDecipher = sText;
        
        for (int i = 0; i < sText.length(); i++) {

            if (isalpha(sText[i]) && isupper(sText[i])) {
                sDecipher[i] = (sText[i] - 'A' - iKey + 26) % 26 + 'A';
            }
            else if (isalpha(sText[i]))
            {
                sDecipher[i] = (sText[i] - 'a' - iKey + 26) % 26 + 'a';
            }
        }
        std::cout << sDecipher << std::endl;
    }
}