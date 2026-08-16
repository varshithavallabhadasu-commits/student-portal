#ifndef PROFILE_H
#define PROFILE_H

#include <string>

class ProfileManager {
public:
    void updateProfile(const std::string& name, const std::string& email, const std::string& bio);
    std::string getSummary() const;

private:
    std::string name;
    std::string email;
    std::string bio;
};

#endif