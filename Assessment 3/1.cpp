#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getComputerChoice() 
{
    return (rand() % 3) + 1;  
}

string determineWinner(int userChoice, int compChoice) 
{
    if (userChoice == compChoice) 
    {
        return "It's a Tie!";
    } 
    else if ((userChoice == 1 && compChoice == 3) || (userChoice == 2 && compChoice == 1) || (userChoice == 3 && compChoice == 2)) 
    {
        return "You Win!";
    } 
    else 
    {
        return "Computer Wins!";
    }
}

string choiceToString(int choice) 
{
    switch (choice) 
    {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid";
    }
}

int main() 
{
    srand(time(0));  
    string playerName;
    int rounds, userChoice, compChoice;

    cout<<"*--*--*--*--*--*--*--*--*--*--"<<endl;
    cout<<"             NAME            "<<endl;
    cout<<"*--*--*--*--*--*--*--*--*--*--"<<endl;
    cout << "Enter your name: ";
    getline(cin, playerName);

    cout<<"*--*--*--*--*--*--*--*--*--*--"<<endl;
    cout<<"             ROUNDS            "<<endl;
    cout<<"*--*--*--*--*--*--*--*--*--*--"<<endl;
    cout << "Enter number of rounds to play: ";
    cin >> rounds;

    cout<<"*--*--*--*--*--*--*--*--*--*--"<<endl;
    cout<<"             GAME            "<<endl;
    cout<<"*--*--*--*--*--*--*--*--*--*--"<<endl;
    for (int i = 1; i <= rounds; i++) 
    {
        cout << "\nThis is Round " << i << endl;
        cout << "1. Rock\n2. Paper\n3. Scissors\n";

        cout << "Select your choice (1-3): ";
        cin >> userChoice;
        
        if (userChoice < 1 || userChoice > 3) 
        {
            cout << "Invalid choice. Please enter a number between 1 and 3.\n";
            i--;  
            continue;
        }
        
        compChoice = getComputerChoice();
        
        cout << playerName << " chose: " << choiceToString(userChoice) << endl;
        cout << "Computer chose: " << choiceToString(compChoice) << endl;
        
        cout << determineWinner(userChoice, compChoice) << endl;
    }
    
    cout << "\nGame Over! Thanks for playing, " << playerName << "!\n";
    return 0;
}
