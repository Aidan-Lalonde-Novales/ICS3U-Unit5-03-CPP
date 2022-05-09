// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-05-08
// This program converts a level to its corresponding percentage.

#include <iostream>
#include <string>

int conversion(std::string level) {
    // this function this function converts a level to percentage
    int percentage;

    // process
    if (level == "4+") {
        percentage = 97;
    } else if (level == "4") {
        percentage = 91;
    } else if (level == "4-") {
        percentage = 83;
    } else if (level == "3+") {
        percentage = 78;
    } else if (level == "3") {
        percentage = 75;
    } else if (level == "3-") {
        percentage = 71;
    } else if (level == "2+") {
        percentage = 68;
    } else if (level == "2") {
        percentage = 65;
    } else if (level == "2-") {
        percentage = 61;
    } else if (level == "1+") {
        percentage = 58;
    } else if (level == "1") {
        percentage = 55;
    } else if (level == "1-") {
        percentage = 51;
    } else if (level == "R") {
        percentage = 30;
    } else {
        percentage = -1;
    }

    return percentage;
}

int main() {
    // this function gets input, calls a function, gives output
    std::string level;
    int percentage;

    // input
    std::cout << "Enter a level to see it’s corresponding percentage: ";
    std::cin >> level;

    percentage = conversion(level);

    if (percentage == -1) {
        std::cout << "\nThat level is invalid. Please Re-Run." << std::endl;
    } else {
        std::cout << "\nLevel " << level << " corresponds to " << percentage <<
        "%." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
