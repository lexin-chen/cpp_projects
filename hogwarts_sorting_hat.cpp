// Purpose: A program that sorts the user into a Hogwarts house based on a quiz.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
  std::vector<std::string> hogwarts = {"Gryffindor", "Hufflepuff", "Ravenclaw",
  "Slytherin"};
  std::cout << "Sorting Hat Quiz!\n";
  int answer1;
  int answer2;
  int answer3;
  int answer4;
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n";
  std::cin >> answer1;
  if (answer1 == 1) {
    hufflepuff += 1;
  }
  else if (answer1 == 2) {
    slytherin += 1;
  }
  else if (answer1 == 3) {
    ravenclaw += 1;
  }
  else if (answer1 == 4) {
    gryffindor += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q2) Dawn or Dusk?\n\n";
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n";
  std::cin >> answer2;
  if (answer2 == 1) {
    gryffindor += 1;
    ravenclaw += 1;
  }
  else if (answer2 == 2) {
    hufflepuff += 1;
    slytherin += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n";
  std::cin >> answer3;
  if (answer3 == 1) {
    slytherin += 1;
  }
  else if (answer3 == 2) {
    hufflepuff += 1;
  }
  else if (answer3 == 3) {
    ravenclaw += 1;
  }
  else if (answer3 == 4) {
    gryffindor += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q4) Which road tempts you most?\n\n";
  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n";
  std::cin >> answer4;
  if (answer4 == 1) {
    hufflepuff += 1;
  }
  else if (answer4 == 2) {
    slytherin += 1;
  }
  else if (answer4 == 3) {
    gryffindor += 1;
  }
  else if (answer4 == 4) {
    ravenclaw += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  std::vector<int> house_scores = {gryffindor, hufflepuff, ravenclaw, slytherin};
  int max = 0;
  std::string house;
  for (int i = 0; i < house_scores.size(); i++) {
    if (house_scores[i] > max) {
      max = house_scores[i];
      house = hogwarts[i];
    }
  }
  std::cout << "Your house is " << house << "!\n";
}