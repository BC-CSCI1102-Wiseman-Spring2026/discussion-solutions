#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Welcome to Rock, Paper, Scissors!" << endl;

    srand(time(NULL));

    while (true) {
        string user_choice;
        cout << endl << "What's your choice (rock, paper, scissors, quit)? ";
        cin  >> user_choice;

        string ai_choice;
        int r = rand() % 3;
        if (r == 0) {
            ai_choice = "rock";
        } else if (r == 1) {
            ai_choice = "paper";
        } else {
            ai_choice = "scissors";
        }

        string result;
        if (user_choice == ai_choice) {
            result = "Tie!";
        } else if ((user_choice == "rock" && ai_choice == "paper") ||
                   (user_choice == "paper" && ai_choice == "scissors") ||
                   (user_choice == "scissors" && ai_choice == "rock")) {
            result = "You lose!";
        } else if ((user_choice == "rock" && ai_choice == "scissors") ||
                   (user_choice == "paper" && ai_choice == "rock") ||
                   (user_choice == "scissors" && ai_choice == "paper")) {
            result = "You win!";
        } else if (user_choice == "quit") {
            break;
        } else {
            cout << "Invalid choice!" << endl;
            continue;
        }

        cout << "AI chose " << ai_choice << endl;
        cout << result << endl;
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
