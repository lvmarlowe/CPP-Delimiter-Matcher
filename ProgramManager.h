/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 4: Assignment
    21 Sept 2024
    This header file defines the ProgramManager class,
    which manages the execution of the delimiter 
    matching program. It requires StackMatcher.h to
    run.
-------------------------------------------------- */
#ifndef PROGRAMMANAGER_H
#define PROGRAMMANAGER_H

#include "StackMatcher.h"

class ProgramManager {
public:

    // Default constructor
    ProgramManager();

    // Virtual destructor
    virtual ~ProgramManager();
    void run();

private:

    // Pointer to the StackMatcher class
    StackMatcher* stackMatcher;
};

#endif // PROGRAMMANAGER_H
