#include <iostream>
#include <string>
#include <cctype>

void affine_ciph() {
    
    std::string sText, sCipher;
    int iKey1 = 0, iKey2 = 0;

    do {
        std::cout << "Input key 1 > ";
        std::cin >> iKey1;
        std::cout << "Input key 2 > ";
        std::cin >> iKey2;
    } while(iKey1 < 1 && iKey2 < 1);
    
    std::cout << "Enter text > ";
    std::cin.ignore();
    std::getline(std::cin, sText);
    
    for (int i = 0; i <= sText.length(); i++) {

        if (isalpha(sText[i]) && isupper(sText[i])) {
            sCipher = sCipher + (char) ((iKey1 * (sText[i] - 'A')  + iKey2) % 26 + 'A');
        }
        else if (isalpha(sText[i])) {
            sCipher = sCipher + (char) ((iKey1 * (sText[i] - 'a')  + iKey2) % 26 + 'a');
        }
        else {
            sCipher = sCipher + sText[i];
        }
    }
    std::cout << sCipher << std::endl;
}
void affine_deciph() {
    
    std::string sText, sDecipher;
    int iKey1 = 0, iKey2 = 0;

    do {
        std::cout << "Input key 1 > ";
        std::cin >> iKey1;
        std::cout << "Input key 2 > ";
        std::cin >> iKey2;
    } while(iKey1 < 1 && iKey2 < 1);
    
    std::cout << "Enter text > ";
    std::cin.ignore();
    std::getline(std::cin, sText);
    
    for (int i = 0; i <= sText.length(); i++) {

        if (isalpha(sText[i]) && isupper(sText[i])) {
            sDecipher = sDecipher + (char) (((sText[i] - 'A') / iKey1 - iKey2) % 26 + 'A');
        }
        // FIXME: Do not printing right output
        else if (isalpha(sText[i])) {
            sDecipher = sDecipher + (char) (((sText[i] - 'a') / iKey1 - iKey2) % 26 + 'a');
        }
        else {
            sDecipher = sDecipher + sText[i];
        }
    }
    std::cout << sDecipher << std::endl;
}
