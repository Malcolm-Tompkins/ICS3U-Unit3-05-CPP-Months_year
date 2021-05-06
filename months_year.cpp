// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 6, 2021
// Determines the month in correspondance to user input

#include <iostream>

main() {
    // Function that checks the correspondance

    int user_number;
    // User input
    std::cout << "Enter a number 1-12 to correspond to a month\n";
    std::cout << "Input your number: ";
    std::cin >> user_number;
    std::cout << "\n";
    // Process / Output
    switch (user_number) {
        case 1:
        std::cout << "January";
        break;
        case 2:
        std::cout << "Febuary";
        break;
        case 3:
        std::cout << "March";
        break;
        case 4:
        std::cout << "April";
        break;
        case 5:
        std::cout << "May, my birthday month!";
        break;
        case 6:
        std::cout << "June";
        break;
        case 7:
        std::cout << "July";
        break;
        case 8:
        std::cout << "August";
        break;
        case 9:
        std::cout << "September";
        break;
        case 10:
        std::cout << "October";
        break;
        case 11:
        std::cout << "November";
        break;
        case 12:
        std::cout << "December";
        break;
        default:
        std::cout << "\nAn error has occured\n";
        std::cout << "Make sure input is a number between 1 and 12";
    }
}
