// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: September 2019
// This program runs the "Number Guessing Game"

#include <iostream>

int main() {
    // This function runs the "Number Guessing Game"
    const int CORRECT_NUMBER = 5;
    int guess;

    // Input
    std::cout << "Try and guess a number between 0 and 9 (integer): " <<
    std::endl;
    std::cin >> guess;
    std::cout << "" << std::endl;

    // Process
    if (guess == CORRECT_NUMBER) {
        // output
        std::cout << "You are correct!!! " << std::endl;
    }
}
