#include <vector>

std::pair<float, float> minMax(const std::vector<float>& arr) {
    if (!arr.empty()) {
        float min = arr[0];
        float max = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > max) max = arr[i];
            if (arr[i] < min) min = arr[i];
        }

        return std::pair<float, float>(min, max);
    }
    else {
        return std::pair<float, float>(std::numeric_limits<float>::min(), std::numeric_limits<float>::max());
    }
}
