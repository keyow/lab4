#include <vector>

int argmax(const std::vector<float>& arr) {
    if (!arr.empty()) {
        int max_index = 0;
        float max = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > max) {
                max = arr[i];
                max_index = i;
            }
        }

        return max_index;
    }
    else return -1;
}