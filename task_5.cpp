#pragma once
#include <vector>
#include <iostream>

bool remove_first_negative_element(std::vector<int>& vec, int& removed_element) {
    if (!vec.empty()) {
        for (auto it = vec.begin(); it != vec.end(); it++) {
            if (*it < 0) {
                removed_element = *it;
                vec.erase(it);
                return true;
            }
        }
        removed_element = 0;
        return false;
    }
    else return false;
}

