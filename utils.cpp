#include "utils.h"
#include <algorithm>
#include <cctype>

std::string toUpper(const std::string& input) {
    std::string result = input;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

bool isValidUsername(const std::string& username) {
    if (username.empty() || username.size() > 20) return false;
    for (char c : username) {
        if (!std::isalnum(static_cast<unsigned char>(c)) && c != '_') return false;
    }
    return true;
}