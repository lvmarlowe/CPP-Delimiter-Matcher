/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 4: Assignment
    21 Sept 2024
    This header file defines the StackMatcher class,
    which checks for matching delimiters in the user's
    input.
-------------------------------------------------- */

#ifndef STACKMATCHER_H
#define STACKMATCHER_H

#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Forward declaration
class ProgramManager;

class StackMatcher {

public:
    // Default construcor
    StackMatcher();

    // Virtual destructor
    virtual ~StackMatcher();

private:

    // Allows ProgramManager to access
    friend class ProgramManager;

    void matchDelimiters(const string& input);
    void reportHasError(char ch);
};

#endif // STACKMATCHER_H
