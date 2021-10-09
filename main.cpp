#include <vector>
#include <random>
#include <iostream>
#include <string>
#include "lab4_functions.h"

void first_part() {
    int n;
    std::pair<float, float> minMax_p;
    std::vector<float> arr = {};
    std::vector<float> arr_copy = {};


    std::cout << "<<< PART ONE (tasks 1 - 4) >>>" << std::endl;
    std::cout << "Enter array size:";
    std::cin >> n;

    array_generator_float(arr, arr_copy, n);
    print_f(arr);
    minMax_p = minMax(arr);

    std::cout << "1. Mean value: " << mean(arr) << std::endl;
    std::cout << "2. Minimum: " << minMax_p.first << "\n" << "   Maximum: " << minMax_p.second << std::endl;
    std::cout << "3. Index of maximum: " << argmax(arr) << std::endl;

    sort(arr_copy);
    std::cout << "4. Descending sorted array:" << std::endl;
    print_f(arr_copy);
}

void second_part() {
    int n;
    int removed_element;
    std::vector<int> arr_2 = {};

    std::cout << "\n\n<<< PART TWO (task 5) >>>" << std::endl;
    std::cout << "Enter array size:";
    std::cin >> n;

    array_generator_int(arr_2, n);
    print_i(arr_2);

    if(remove_first_negative_element(arr_2, removed_element)) {
        std::cout << "5. First negative element was removed. Removed element: " << removed_element << std::endl;
    }
    else {
        std::cout << "5. Array does not contain any negative elements." << std::endl;
    }
}

void third_part() {
    std::string str;
    std::string old_string;
    std::string new_string;
    std::string concatenated;
    std::vector<std::string> splited;
    std::vector<std::string> strings;
    char divider;
    int n;

    std::cout << "\n\n<<< PART THREE (task 6) >>>" << std::endl;

    std::cout << "Enter string:";
    std::getline(std::cin, str);
    std::cout << "Enter what string you want to change:";
    std::getline(std::cin, old_string);
    std::cout << "Enter string you want to put:";
    std::getline(std::cin, new_string);
    std::cout << "Result:" << replace(str, old_string, new_string) << std::endl;
    std::cout << std::endl;

    std::cout << "Enter symbol you want to choose as a divider:";
    std::cin >> divider;
    splited = split(str, divider);
    std::cout << "Divided string: " << std::endl;
    for (auto a : splited) std::cout << "'" << a << "'" << std::endl;

    std::cout << "Enter size of string array:";
    std::cin >> n;
    std::cout << "Enter " << n << " strings:" << std::endl;
    for(int i = 0; i < n; i++) {
        strings.push_back("");
        std::cin >> strings[i];
    }
    concatenated = join(strings, " ");
    std::cout << "Concatenated string: " << concatenated << std::endl;
}

int main() {
    third_part(); // 6, 7, 8


    return 0;
}
