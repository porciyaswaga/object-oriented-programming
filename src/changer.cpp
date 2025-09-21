#include "../include/changer.h"
#include <string>
#include <iostream>

std::string changer(std::string text, int n, char oldValue, char newValue){
    std::string new_text;
    int size_text = text.size();
    if (n == 0 || n < 0 || n > size_text) {
        return text;
    } else {
        int counter = 0;
        for (int i = 0; i < size_text; ++i) {
            char letter = text[i];
            if (letter != oldValue) {
                new_text += letter;
        } else if (letter == oldValue) {
            counter += 1;
            if (counter % n == 0) {
                new_text += newValue;
            } else if ( counter % n != 0) {
                new_text += oldValue;
            }
        }
    }
}
return new_text;
}
