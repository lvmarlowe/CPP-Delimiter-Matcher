/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 4: Assignment
    21 Sept 2024
    This header file implements the ProgramManager 
    class, which manages the execution of the delimiter
    matching program. It requires StackMatcher.h to
    run.
-------------------------------------------------- */

#include "ProgramManager.h"
#include <iostream>

using namespace std;

ProgramManager::ProgramManager() {
    // Initialize the StackMatcher instance
    stackMatcher = new StackMatcher();
}

ProgramManager::~ProgramManager() {
    // Clean up
    delete stackMatcher;
}

// Function to run the program, which is accessible by Main
void ProgramManager::run() {
    string userInput;

    cout << "**********************************************" << endl;
    cout << "   Delimiter Matcher Program" << endl;
    cout << "**********************************************" << endl;

    // Loop through the menu until the user chooses to exit the program
    while (true) {
        cout << "Enter the delimiters (parentheses, brackets, or curly braces) " << endl;
        cout << "that you'd like to check. Do not use spaces." << endl;
        cout << "For example: {}[()]" << endl;
        cout << "Or press 'Q' to quit: ";
        cin >> userInput;

        // Check for quit command
        if (userInput == "q" || userInput == "Q") {
            cout << "Exiting program." << endl;
            break;
        }

        // Match the delimiters in the user's input
        stackMatcher->matchDelimiters(userInput);
        cout << "**********************************************" << endl;
    }
}
