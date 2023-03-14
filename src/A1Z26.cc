#include "A1Z26.h"

namespace az{
    void ciph() {
//  Variables
        std::string text, cipher_text;
        int temp;

        std::cout << "Enter text > ";
        std::getline(std::cin, text);

//  for loop to define the cipher text    
        for (int i = 0; i < text.length(); i++) {
        
            if (isalpha(text[i]) && isupper(text[i])) {

                temp = text[i] - 'A' + 1;
                //passing temp to a string
                cipher_text = cipher_text + std::to_string(temp) + " ";
            }
            else if (isalpha(text[i]))
            {
            
                temp = text[i] - 'a' + 1;
                cipher_text = cipher_text + std::to_string(temp) + " ";
            }
            else {
                cipher_text = cipher_text + text[i];
            }

        }
//  printing out Cipher text    
        std::cout << cipher_text << std::endl;
    }
    void deciph() {
//  Variables
        std::string text, deciphered_text;
        int temp;

        std::cout << "Enter text > ";
        std::getline(std::cin, text);

//  for loop to decrypt the text    
        for (int i = 0; i < text.length(); i++) {
        

            if (isdigit(text[i]) && !isdigit(text[i+1])) {

                deciphered_text = deciphered_text + (char)(text[i] + 48);
            }
            else if (isdigit(text[i]) && isdigit(text[i+1])) {
                temp = (((((text[i] - 48) * 10) - 1) + (text[i+1] - 48)) + 'a');
                deciphered_text = deciphered_text + (char) temp;
                i++;
            }
            else if (!isspace(text[i])) {
                deciphered_text = deciphered_text + text[i];
            }

        }
//  printing out Cipher text    
        std::cout << deciphered_text << std::endl;
    }
}
