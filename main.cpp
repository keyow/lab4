#include <vector>
#include <random>
#include <iostream>
#include <string>
#include "lab4_functions.h"


void task_1() {
    std::cout << "Task #1" << std::endl;

    int n;
    std::vector<float> arr = {};

    std::cout << "Enter array size:";
    std::cin >> n;

    array_generator_float(arr, n);
    print_f(arr);
    std::cout << "Mean value: " << mean(arr) << std::endl;
}


void task_2() {
    std::cout << "Task #2" << std::endl;

    int n;
    std::vector<float> arr = {};
    std::pair<float, float> minMax_p;

    std::cout << "Enter array size:";
    std::cin >> n;

    array_generator_float(arr, n);
    print_f(arr);
    minMax_p = minMax(arr);
    std::cout << "2. Minimum: " << minMax_p.first << "\n" << "   Maximum: " << minMax_p.second << std::endl;
}


void task_3() {
    std::cout << "Task #3" << std::endl;

    int n;
    std::vector<float> arr = {};

    std::cout << "Enter array size:";
    std::cin >> n;

    array_generator_float(arr, n);
    print_f(arr);
    std::cout << "Index of maximum: " << argmax(arr) << std::endl;
}


void task_4() {
    std::cout << "Task #4" << std::endl;

    int n;
    std::vector<float> arr = {};

    std::cout << "Enter array size:";
    std::cin >> n;

    array_generator_float(arr, n);
    sort(arr);
    print_f(arr);
    std::cout << "\nDescending sorted array:" << std::endl;
    print_f(arr);
}


void task_5() {
    std::cout << "Task #5" << std::endl;

    int n;
    int removed_element;
    std::vector<int> arr = {};

    std::cout << "Enter array size:";
    std::cin >> n;

    array_generator_int(arr, n);
    print_i(arr);

    if(remove_first_negative_element(arr, removed_element)) {
        std::cout << "First negative element was removed. Removed element: " << removed_element << std::endl;
    }
    else {
        std::cout << "Array does not contain any negative elements." << std::endl;
    }
}


void task_6() {
    std::cout << "Task #6" << std::endl;

    std::string str;
    std::string old_string;
    std::string new_string;

    std::cout << "Enter string:";
    std::getline(std::cin, str);
    std::cout << "Enter what string you want to change:";
    std::getline(std::cin, old_string);
    std::cout << "Enter string you want to put:";
    std::getline(std::cin, new_string);

    str = replace(str, old_string, new_string);
    std::cout << "Result:" << str << std::endl;
}


void task_7() {
    std::cout << "Task #7" << std::endl;

    std::string str;
    std::vector<std::string> splited;
    char divider;

    std::cout << "Enter string:";
    std::getline(std::cin, str);

    std::cout << "Enter symbol you want to choose as a divider:";
    std::cin >> divider;
    splited = split(str, divider);

    std::cout << "Divided string: " << std::endl;
    for (auto a : splited) {
        if(!a.empty()) std::cout << a << std::endl;
    }
}


void task_8() {
    std::string concatenated;
    std::vector<std::string> strings;
    int n;

    std::cout << "Enter size of string array:";
    std::cin >> n;
    if (n < 0) {
        std::cerr << "Can't get negative number of strings! Exiting...";
        exit(-1);
    }
    std::cout << "Enter " << n << " strings:" << std::endl;

    for(int i = 0; i < n; i++) {
        strings.push_back("");
        std::cin >> strings[i];
    }
    concatenated = join(strings, " ");
    std::cout << "Concatenated string: " << concatenated << std::endl;
}

int main() {
    int task_number;
    std::cout << "Enter task number (1 - 8): ";
    std::cin >> task_number;
    std::cin.get();

    switch(task_number) {
        case 1: task_1(); break;
        case 2: task_2(); break;
        case 3: task_3(); break;
        case 4: task_4(); break;
        case 5: task_5(); break;
        case 6: task_6(); break;
        case 7: task_7(); break;
        case 8: task_8(); break;
        default: std::cout << "No such task!" << std::endl;
    }

    system("pause");
    return 0;
}
