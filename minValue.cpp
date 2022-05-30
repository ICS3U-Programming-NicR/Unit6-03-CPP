// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on:April 25 2022
// This program makes random numbers and finds the smallest

#include <iostream>
#include <array>
#include <random>

const int MAX_NUM = 100;
const int MIN_NUM = 0;
const int MAX_ARRAY_SIZE = 10;

template<size_t N>
int smallestNumberCalculator(std::array<int, N> listOfNumbers) {
    // this functions figures out the largest number

    int smallestNumber = listOfNumbers[0];

    for (int numInArray : listOfNumbers) {
        if (numInArray < smallestNumber) {
            smallestNumber = numInArray;
        }
    }

    return smallestNumber;
}


main() {
    // this function uses an array

    std::array<int, MAX_ARRAY_SIZE> randomNumbers;
    int singleRandomNumber;
    int smallestNumber;

    // input
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_real_distribution<float> dist(MIN_NUM, MAX_NUM);
        randomNumbers[i] = dist(mt);
        singleRandomNumber = randomNumbers[i];
        std::cout << "The random number " << i + 1 << " is "
                  << singleRandomNumber << std::endl;
    }
    // call functions
    smallestNumber = smallestNumberCalculator(randomNumbers);
    // output
    std::cout << "The smallest number is: " << smallestNumber;
}
