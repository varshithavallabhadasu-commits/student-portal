#include "login.h"
#include "utils.h"

#include <algorithm>
#include <cctype>

namespace {
std::string trimUsername(const std::string& username) {
    auto start = std::find_if(
        username.begin(),
        username.end(),
        [](unsigned char ch) {
            return !std::isspace(ch);
        });

    auto end = std::find_if(
        username.rbegin(),
        username.rend(),
        [](unsigned char ch) {
            return !std::isspace(ch);
        }).base();

    if (start >= end) {
        return "";
    }

    return std::string(start, end);
}
}

void LoginManager::registerUser(const std::string& username, const std::string& password) {
    if (password.empty()) {
        return;
    }

    std::string cleanedUsername = trimUsername(username);

    if (cleanedUsername.empty()) {
        return;
    }

    users[toUpper(cleanedUsername)] = password;
}

bool LoginManager::authenticate(const std::string& username, const std::string& password) const {
    std::string cleanedUsername = trimUsername(username);

    if (cleanedUsername.empty()) {
        return false;
    }

    auto it = users.find(toUpper(cleanedUsername));
    return it != users.end() && it->second == password;
}