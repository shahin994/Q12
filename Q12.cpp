#include <iostream>

void printCharacter(int num, char ch) {
    for (int i = 0; i < num; i++) {
        std::cout << ch;
    }
    std::cout << std::endl;
}

int main() {
    int number;
    char character;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Enter a character: ";
    std::cin >> character;

    printCharacter(number, character);

    return 0;
}