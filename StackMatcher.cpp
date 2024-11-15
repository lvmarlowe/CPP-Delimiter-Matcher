/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 4: Assignment
    21 Sept 2024
    This implementation file defines the methods
    for the StackMatcher class, which checks for
    matching delimiters in a string input. It requires
    StackMatcher.h to run.
-------------------------------------------------- */

#include "StackMatcher.h"

StackMatcher::StackMatcher() {}

StackMatcher::~StackMatcher() {}

// Function to print the error message
void StackMatcher::reportHasError(char ch) {
    cout << "Unmatched delimiter: " << ch << endl;
}

// Function to create stack and match delimiters from user's input
void StackMatcher::matchDelimiters(const string& input) {
    stack<char> s;
    bool hasError = false;

    // Iterate through the input and filter only delimiter characters
    for (char ch : input) {

        // Only consider delimiter characters
        if (ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || ch == '}') {

            // If the current character is an opening delimiter, push it to the stack
            if (ch == '(' || ch == '[' || ch == '{') {
                s.push(ch);

                // Continue to the next character
                continue; 
            }

            // If the stack is empty, report error for unmatched closing delimiter
            if (s.empty()) {
                reportHasError(ch);
                hasError = true;

                // Continue checking for more errors
                continue; 
            }

            // If the current character is a closing delimiter, check for a matching opening delimiter
            switch (ch) {
            case ')':
                if (s.top() != '(') {
                    reportHasError(ch);
                    hasError = true;
                }
                else {
                    s.pop();
                }
                break;

            case '}':
                if (s.top() != '{') {
                    reportHasError(ch);
                    hasError = true;
                }
                else {
                    s.pop();
                }
                break;

            case ']':
                if (s.top() != '[') {
                    reportHasError(ch);
                    hasError = true;
                }
                else {
                    s.pop();
                }
                break;
            }
        }
    }

    // Check for unmatched opening delimiters until the stack is empty
    while (!s.empty()) {
        reportHasError(s.top());
        s.pop();
        hasError = true;
    }

    // Only print if no errors were found
    if (!hasError) {
        cout << "No missing delimiters." << endl;
    }
}
