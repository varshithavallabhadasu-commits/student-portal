#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include <unordered_map>

class LoginManager {
public:
    void registerUser(const std::string& username, const std::string& password);
    bool authenticate(const std::string& username, const std::string& password) const;

private:
    std::unordered_map<std::string, std::string> users;
};

#endif