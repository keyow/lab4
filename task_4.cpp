#include <vector>

void sort(std::vector<float>& arr) {
    float tmp;
    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
}

