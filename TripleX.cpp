#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty) 
{
    std::cout << "\nYou are a secret agent breaking into a level " << Difficulty << " secure server room...\n";
    std::cout << "You need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty) 
{
    PrintIntroduction(Difficulty);
    
    const int CodeA = (rand() % Difficulty) + Difficulty;
    const int CodeB = (rand() % Difficulty) + Difficulty;
    const int CodeC = (rand() % Difficulty) + Difficulty;

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
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "\nYou're in! Move on to the next door.\n";
        return true;
    } else {
        std::cout << "\nYou've been caught, run!\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // create new random seed
    int LevelDifficulty = 1;
    // Play game until maximum difficulty is reached
    while (LevelDifficulty <= 10) 
    {
    
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        } else 
        {
            --LevelDifficulty;
        }
        
    }
    std::cout << "Congradulations you made it into the server room, hack away";
    return 0;
}