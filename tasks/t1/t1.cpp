#include <iostream>
#include <string>

void reverseString(const std::string& str, int index) {
    if (index < 0)
        return;
    std::cout << str[index];
    reverseString(str, index - 1);
}

int main() {
    std::string input = "tiger0123";
    std::cout << "Reversed string: ";
    reverseString(input, input.length() - 1);
    std::cout << std::endl;
    return 0;
}