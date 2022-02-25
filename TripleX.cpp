#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty) {
    std::cout << "Hello, World!";
    std::cout << std::endl;
    std::cout << "My journey of C++ starts from here";
    std::cout << std::endl;
    std::cout << "Let's talk about the game" << std::endl;

    std::cout << "You are a secret agent breaking into a level..." << Difficulty << std::endl;
    std::cout << "Enter the correct code to continue\n\n";


}

bool PlayGame(int Difficulty) {

    PrintIntroduction(Difficulty);

    
    //Expression Statements
    /*
    This is a multi-
    line comment
    */

    const int CodeA = rand() % Difficulty + Difficulty; 
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;
    //CodeA = 20;
    int CodeSum = CodeA + CodeB + CodeC; 
    int CodeProduct = CodeA * CodeB * CodeC;

    //Declaration Statements
    std::cout << "+ There are 3 numbers in the code..." << std::endl;
    std::cout << "+ The codes add up-to " << CodeSum;
    std::cout << "\n+ The codes multiply to give " << CodeProduct << std::endl; 

    //Expression Statements
    int GuessA;
    int GuessB;
    int GuessC;

    std::cin >> GuessA >> GuessB >> GuessC;
    //std::cin >> GuessB;
    //std::cin >> GuessC;
    std::cout << "You Entered: " << GuessA << GuessB << GuessC;

    int SumofGuess = GuessA + GuessB + GuessC;
    int ProductofGuess = GuessA * GuessB * GuessC;
    std::cout << "\nThe Sum of Guessing Numbers: " << SumofGuess << std::endl;
    std::cout << "The Product of Guessing Numbers: " << ProductofGuess << std::endl;

    if(CodeSum == SumofGuess && CodeProduct == ProductofGuess) {
        std::cout << "You Win!";
        return true; 
    }else {
        std::cout << "You Lose!";
        return false; 

    }


}


int main()
{
    srand(time(NULL));
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    while(LevelDifficulty <= MaxDifficulty) {

        


        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //Clears any error
        std::cin.ignore(); //Discards the Buffer
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        

    }
    std::cout << "Congratulations Agent! You have successfully completed the mission. Now get out of there!";


    return 0;    //Return Statement
}