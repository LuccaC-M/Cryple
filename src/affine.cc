#include "affine.h"

namespace affine {
    void ciph() {
        
        std::string text, cipher_text;
        int key_1 = 0, key_2 = 0;

        do {
            std::cout << "Input key 1 > ";
            std::cin >> key_1;
            std::cout << "Input key 2 > ";
            std::cin >> key_2;
        } while(key_1 < 1 && key_2 < 1);
        
        std::cout << "Enter text > ";
        std::cin.ignore();
        std::getline(std::cin, text);
        
        for (int i = 0; i <= text.length(); i++) {

            if (isalpha(text[i]) && isupper(text[i])) {
                cipher_text = cipher_text + (char) ((key_1 * (text[i] - 'A')  + key_2) % 26 + 'A');
            }
            else if (isalpha(text[i])) {
                cipher_text = cipher_text + (char) ((key_1 * (text[i] - 'a')  + key_2) % 26 + 'a');
            }
            else {
                cipher_text = cipher_text + text[i];
            }
        }
        std::cout << cipher_text << std::endl;
    }
    void deciph() {
        
        std::string text = "", deciphered_text = "";
        int key_1 = 0, key_2 = 0, key_1_inv = 0;

        do {
            std::cout << "Input key 1 > ";
            std::cin >> key_1;
            std::cout << "Input key 2 > ";
            std::cin >> key_2;
        } while(key_1 < 1 && key_2 < 1);
    
        if (key_1 % 2 == 0 || key_1 == 13) {
            std::cout << "Cannot decrypt since a isn't coprime of m\n";
            return;
        }
        
        //Find a^-1 (the modular multiplicative inverse of a)
        for (int i = 0; i < 26; i++)
        {
            if ((key_1 * i % 26) == 1)
            {
                key_1_inv = i;
            }
        }
        
        std::cout << "Enter text > ";
        std::cin.ignore();
        std::getline(std::cin, text);
        
        for (int i = 0; i <= text.length(); i++) {

            if (isalpha(text[i]) && isupper(text[i])) {
                deciphered_text = deciphered_text + (char) ((text[i] +'A' - key_2) * key_1_inv % 26 + 'A'); 
            }
            else if (isalpha(text[i])) {
                deciphered_text = deciphered_text + (char) ((text[i] + 'a' - key_2) * key_1_inv % 26 + 'a');
            }
            else {
                deciphered_text = deciphered_text + text[i];
            }
        }
        std::cout << deciphered_text << std::endl;
    }
}
