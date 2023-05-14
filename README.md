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

### Charades
A program that plays a game of charades. The user is given a word and they have to act it out. The user will input if they guessed the word correctly or not and the program will give them a new word. The game ends when the user enters `quit` or the deck of words runs out.

<u><b>Step by Step Outline</b></u>
1. Import the `ctime` library and the `string` library.
2. Create a list of words.
3. Print a welcome message.
4. Store round number as an integer variable.
5. Store score as an integer variable.
6. Start a while loop that runs until the user enters `quit` or the deck of words runs out.
    a. Generate a random number between 0 and the length of the list of words.
    b. Add 1 to the round number.
    c. Print the round number and the word at the index of the random number.
    d. Ask the user if they guessed the word correctly.
    e. Store the user's answer in a variable.
    f. If the user enters `quit`, exit the program.
    g. If the user enters `right`, add 1 to the score.
    h. If the user enters `wrong`, minus 1 from the score.
    i. If the user enters `pass`, do nothing.
    j. If the user enters `quit`, exit the program and print final score.
    k. If the user enters anything else, print an invalid answer message.
    l. Remove the word from the list of words.
    m. If the list of words is empty, exit the program and print final score.
