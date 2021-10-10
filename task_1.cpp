#include <vector>
#include <iostream>

float mean(const std::vector<float>& arr) {
    if (!arr.empty()) {
        float result = 0.0F;
        for (int i = 0; i < arr.size(); i++) {
            result += arr[i];
        }

        return result / arr.size();
    }
    else return 0;
}
