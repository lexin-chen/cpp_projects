#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
    std::vector <std::string> answers = {"airplane", "banana", "cat", "dog", 
    "elephant", "frog", "giraffe", "horse", "ice cream", "jellyfish", "kangaroo",
    "lion", "monkey", "nose", "octopus", "penguin", "quilt", "rainbow", "snake", 
    "tiger", "umbrella", "violin", "whale", "xylophone", "yarn", "zebra"};
    std::cout << "Welcome to the game of Charades!\n";
    int count = 0;
    int score = 0;
    while (true) {
        srand(time(NULL));
        int random = rand() % 26;
        std::string word = answers[random];
        count += 1;
        std::cout << "Round" << count << ": The word is: " << word << 
        "\n";
        std::cout << "right, wrong, pass, quit? ";
        std::string answer;
        std::cin >> answer;
        if (answer == "right") {
            score += 1;
            std::cout << "Score: " << score << "\n";
        }
        else if (answer == "wrong") {
            score -= 1;
            std::cout << "Score: " << score << "\n";
        }
        else if (answer == "pass") {
            std::cout << "Score: " << score << "\n";
        }
        else if (answer == "quit") {
            std::cout << "Final score: " << score << "\n";
            break;
        }
        else {
            std::cout << "Invalid input\n";
        }
        answers.erase(answers.begin() + random);
        if (answers.size() == 0) {
            std::cout << "Game over! Final score: " << score << "\n";
            break;
        }
    }
    return 0;
}