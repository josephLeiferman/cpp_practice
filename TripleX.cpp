#include <iostream>

int main()
{
    // Dispaly welcome messages to the terminal
    std::cout << "You are a secret agent breaking into a secure server room..." << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl << std::endl;

    const int CodeA = 2;
    const int CodeB = 3;
    const int CodeC = 4;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;


    int PlayerGuess;

    return 0;
}