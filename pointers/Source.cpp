#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
    std::string rtext = "";
    for (int i = 0; i < text.size(); i++) {
        char c = text[i];
        rtext += c;
    }
    if (text != rtext) {
        return false;
    }
    else {
        return true;
    }

}

int main() {

    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";

}