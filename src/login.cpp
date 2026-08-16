#include "login.h"

void LoginManager::registerUser(const std::string& username, const std::string& password) {
    if (password.empty()) {
        return;
    }

    users[username] = password;
}

bool LoginManager::authenticate(const std::string& username, const std::string& password) const {
    auto it = users.find(username);
    return it != users.end() && it->second == password;
}