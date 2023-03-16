#include "piglatin.h"

namespace pl {
    bool isvowel(char c) {
        // TODO
        return true;
    } 
    
    void ciph() {
        std::string text, segment;
        std::cout << "Input text: ";
        std::getline(std::cin, text);
        std::stringstream text_stream(text);
        std::vector<std::string> text_vector;

        while (std::getline(text_stream, segment, ' ')) {
            text_vector.push_back(segment);
        }

        int len = text_vector.size();

        for (int i = 0; i < len; i++) {
            if (isalpha(text_vector[i][0])) {
                if (isvowel(text_vector[i][0])) {
                    text_vector[i] += "ay";
                } else {
                    text = text_vector[i].substr(0,1) + "ay";
                    text_vector[i].erase(0,1);
                    text_vector[i] += text;
                }
            }
            std::cout <<text_vector[i] << "";
        }
    }
}
