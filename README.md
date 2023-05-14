# C++ Beginners Cool Projects

## Table of Contents
- [Logical Operators](#logical-operators)
  - [Magic 8 Ball](#magic-8-ball)
  - [Hogwarts Sorting Hat](#hogwarts-sorting-hat)

## Logical Operators
Below are some real-world projects that use logical operators. Logical operators are used to combine two or more conditions. The logical operators are `&&` (and), `||` (or), and `!` (not).

### Magic 8 Ball
A program that simulates a magic 8 ball. The user asks a yes or no question and the program responds with a random answer.

<u><b>Step by Step Outline</b></u>
1. Import the `ctime` library
2. Create a list of possible answers.
3. Print a welcome message.
4. Start a while loop that runs until the user enters `quit`.
    a. Ask the user to enter a question.
    b. Store the user's question in a variable.
    c. if the user enters `quit`, exit the program.
    d. Generate a random number between 0 and the length of the list of possible answers.
    e. Print the answer at the index of the random number.
5. Loop back to step 4 or exit the program if the user enters `quit`.

[Source Code](magic8_ball.cpp)

### Hogwarts Sorting Hat
A program that sorts the user into a Hogwarts house. The user is asked a series of questions and the program sorts the user into a house based on their answers.

<u><b>Step by Step Outline</b></u>
1. Import the `ctime` library and the `string` library.
2. Create a list of possible houses (Gryffindor, Hufflepuff, Ravenclaw, and Slytherin).
3. Print a welcome message.
4. Store the answers to the questions as an integer variable.
5. Store points for each house as an integer variable.
6. Print the first question and store the user's answer.
7. If the user answers 1, add 1 point to Gryffindor. If the user answers 2, add 1 point to Hufflepuff. If the user answers 3, add 1 point to Ravenclaw. If the user answers 4, add 1 point to Slytherin. If the user answers anything else, print an invalid answer message.
8. Repeat steps 6 and 7 for the remaining questions.
9. Store the houses and their points in a list of integer.
10. Find the index of the maximum value in the list of points.
11. Print the house at the index of the maximum value.

[Source Code](hogwarts_sorting_hat.cpp)

