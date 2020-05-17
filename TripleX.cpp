#include <iostream>

void PrintIntroduction(int difficulty) 
{
    std::cout << "\nYou are a secret agent breaking into a level " << difficulty << " secure server room...\n";
    std::cout << "You need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int difficulty) 
{
    PrintIntroduction(difficulty);
    
    const int CodeA = 2;
    const int CodeB = 3;
    const int CodeC = 4;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;
    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if players guess is correct
    if(GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "\nYou're in!\n";
        return true;
    } else {
        std::cout << "\nYou've been caught, run!\n";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    while(LevelDifficulty <= 10) 
    {
    
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    return 0;
}