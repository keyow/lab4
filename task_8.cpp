#include <string>
#include <vector>

std::string join(const std::vector<std::string>& strings, const std::string& sep) {
    std::string result = "";
    for (int i = 0; i < strings.size(); i++) {
        result += strings[i];
        if (i != strings.size()) {
            result += sep;
        }
    }

    return result;
}

