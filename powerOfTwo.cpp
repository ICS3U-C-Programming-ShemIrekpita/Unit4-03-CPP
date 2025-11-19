// Created by: Shem
// Created on: 11/18/2025
// This program displays squares up to a positive number
// and then prints a cute smiling cat at the end.
// Copyright 2025 Shem
#include <iostream>
#include <limits>
#include <string>

int main() {
    int user_number;
    std::cout << "Enter a positive number: ";
    std::cin >> user_number;
    // Check if input failed (non-numeric input)
    if (std::cin.fail() || user_number < 0) {
        std::cout << "Invalid input! "
                << "Please enter a valid positive integer."
                << std::endl;
    }
    // Display squares
    for (int counter = 0; counter <= user_number; counter++) {
        int power_of_two = counter * counter;
        std::cout << counter << "^2 = " << power_of_two << std::endl;
    }
    // Print the smiling cat once at the end
    std::cout << "Thank you for playing" << std::endl;
    std::cout << " /\\_/\\  " << std::endl;
    std::cout << "( ^_^ )" << std::endl;
    std::cout << " > ^ < " << std::endl;
}
