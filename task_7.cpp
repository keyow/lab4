#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char sep) {
    std::vector<std::string> result = {""};
    int i = 0;

    for(auto symbol : str) {
        if (symbol == sep) {
            result.push_back("");
            i += 1;
        }
        else {
            result[i] += symbol;
        }
    }

    return result;
}