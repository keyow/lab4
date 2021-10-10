#include <string>
#include <iostream>

using namespace std;

std::string replace(const std::string& str, const std::string& old, const std::string& new_string) {
    std::string result = "";
    std::string buffer = "";
    int ri = 0;
    for (auto symbol : str) {
        buffer += symbol;
        if (symbol == old[ri]) {
            ri += 1;
            if(ri == old.length()) {
                result += new_string;
                buffer.clear();
                ri = 0;
            }
        }
        else {
            result += buffer;
            buffer.clear();
            ri = 0;
        }
    }

    if (!buffer.empty()) result += buffer;

    return result;
}