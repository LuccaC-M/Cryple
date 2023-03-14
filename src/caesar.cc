#include "caesar.h"

#define CAESAR_MAXKEY 26

namespace caesar{
    void ciph() {

        std::string text, cipher_text;
        int key;

        do {
            std::cout << "Enter key > ";
            std::cin >> key;
        } while(key < 0 || key > CAESAR_MAXKEY);
        
        std::cout << "Enter text > ";
        std::cin.ignore();
        std::getline(std::cin, text);
        cipher_text = text;
        
        for (int i = 0; i < text.length(); i++) {

            if (isalpha(text[i]) && isupper(text[i])) {
                cipher_text[i] = (text[i] - 'A' + key) % 26 + 'A';
            }
            else if (isalpha(text[i]))
            {
                cipher_text[i] = (text[i] - 'a' + key) % 26 + 'a';
            }
        }
        std::cout << cipher_text << std::endl;
    }
    void deciph() {

        std::string text, deciphered_text;
        int key = 0;

        do {
            std::cout << "Enter key > ";
            std::cin >> key;

        } while(key <= 0 || key >= CAESAR_MAXKEY);
        
        std::cout << key;
        
        std::cout << "Enter text > ";
        std::cin.ignore();
        std::getline(std::cin, text);
        deciphered_text = text;
        
        for (int i = 0; i < text.length(); i++) {

            if (isalpha(text[i]) && isupper(text[i])) {
                deciphered_text[i] = (text[i] - 'A' - key + 26) % 26 + 'A';
            }
            else if (isalpha(text[i]))
            {
                deciphered_text[i] = (text[i] - 'a' - key + 26) % 26 + 'a';
            }
        }
        std::cout << deciphered_text << std::endl;
    }
}
