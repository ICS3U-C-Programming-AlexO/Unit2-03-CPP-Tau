// Copyright (c) 2026 Alex OBrien All rights reserved
// .
// Created by: Alex OBrien
// Date: Sept 24, 2026
// This program asks the user for radius of circle and
// then displays the circumference using tau
#include <iostream>

int main() {
    // declair constants
    const float TAU = 6.28;

    // declair variables
    float radius, circumference;

    // get radius from user
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = TAU * radius;

    // display the circumference to user
    std::cout << "/n";
    std::cout << "Circumference = " << circumference << " mm" << std::endl;
}