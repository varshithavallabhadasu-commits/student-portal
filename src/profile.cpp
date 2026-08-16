#include "profile.h"

void ProfileManager::updateProfile(const std::string& n, const std::string& e, const std::string& b) {
    name = n;
    email = e;

    if (b.size() <= 300) {
        bio = b;
    }
}

std::string ProfileManager::getSummary() const {
    return name + " <" + email + "> — " + bio;
}