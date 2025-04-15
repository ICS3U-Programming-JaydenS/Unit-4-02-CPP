// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: April 6, 2024
// This program calculates the factorial product of the user`s number

#include <iostream>
#include <string>
int main() {
    int counter = 0;
    int factorialAnswer = 1;
    std::string userNum;

    // get the user number
    std::cout << "Enter a whole number: ";
    std ::cin >> userNum;
    try {
        // Converts user num to integer
        int userNumAsInt = stoi(userNum);
        float userNumAsFloat = std::stof(userNum);

        // Checks if user num is a decimal
        if (userNumAsInt != userNumAsFloat) {
            std::cout << userNumAsFloat << " is not a integer!";

            // Checks if user num is negative
        } else if (userNumAsInt < 0) {
            std::cout << userNumAsInt << " is not an integer";

            // Checks if user num is a 0
        } else if (userNumAsInt == 0) {
            std::cout << userNumAsInt << "! = 1";

            // If none of those code calculates factorial
        } else {
            do {
                counter++;
                factorialAnswer = factorialAnswer * counter;
                std::cout << "Tracking " << counter
                << " times through the loop.\n";
            } while (counter < userNumAsInt);

            std::cout << userNum << "! = " << factorialAnswer << std::endl;
        }

    // What happens if it is not a integer or float
    } catch (std::invalid_argument) {
        std::cout << userNum << " is not a valid integer.\n";
    }
}

