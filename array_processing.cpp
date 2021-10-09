#pragma once

#include <vector>
#include <ctime>
#include <iostream>
#include <iomanip>

void array_generator_float(std::vector<float>& arr, std::vector<float>& arr_copy, int n) {
    if (n < 0) {
        std::cerr << "Array length can't be negative! Exiting..." << std::endl;
        exit(-1);
    }

    int rand_val = 0;
    std::srand(std::time(nullptr));

    for (int i = 0; i < n; i++) {
        rand_val = std::rand();
        if (rand() % 2 == 0) {
            rand_val = rand_val / 10;
        }
        arr.push_back(rand_val);
        arr_copy.push_back(rand_val);
    }
}

void array_generator_int(std::vector<int>& arr, int n) {
    if (n < 0) {
        std::cerr << "Array length can't be negative! Exiting..." << std::endl;
        exit(-1);
    }

    std::srand(std::time(nullptr));

    for (int i = 0; i < n; i++) {
        arr.push_back(std::rand() % 101 - 15);
    }
}

void print_f(std::vector<float>& arr) {
    if (!arr.empty()) {
        std::cout << "----------------" << std::endl;
        std::cout << std::setw(5) << "Index" << " | " << std::setw(7) << "Element" << std::endl;

        for (int i = 0; i < arr.size(); i++) {
            std::cout << std::setw(5) << i << " | " << std::setw(7) << arr[i] << std::endl;
        }
        std::cout << "----------------" << std::endl;
    }
}

void print_i(std::vector<int>& arr) {
    if (!arr.empty()) {
        std::cout << "----------------" << std::endl;
        std::cout << std::setw(5) << "Index" << " | " << std::setw(7) << "Element" << std::endl;

        for (int i = 0; i < arr.size(); i++) {
            std::cout << std::setw(5) << i << " | " << std::setw(7) << arr[i] << std::endl;
        }
        std::cout << "----------------" << std::endl;
    }
    else std::cout << "[DEBUG] Array is empty" << "\n\n";
}
