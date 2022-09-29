#include <iostream>
#include <string>
#include <cctype>

#define MAXKEY 25
void caesarciph() {

    std::string sText, sCipher;
    int iKey;

    do {
        std::cout << "Enter key > ";
        std::cin.ignore();
        std::cin >> iKey;
    } while(iKey < 0 || iKey > MAXKEY);
    
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