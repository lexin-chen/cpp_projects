// Magic 8 Ball program
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
  std::vector<std::string> responses = {"Yes, for sure.", "Probably yes.", "Seems like yes...", 
  "Definitely not!", "Probably not.", "I really doubt it...", 
  "Not sure, check back later!", "I really can't tell."};
  std::cout << "MAGIC 8-BALL\n";
  std::string question;
  while (true) {
    std::cout << "Ask me a yes/no question: ";
    std::cin >> question;
    if (question == "quit") {
      std::cout << "Thanks for playing!\n";
      break;
    }
    int choice = rand() % 10; 
    std::cout << "MAGIC 8-BALL SAYS: " << responses[choice] << "\n";
  }
  return 0; 
}