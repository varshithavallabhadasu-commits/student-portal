#include "profile.h"

void ProfileManager::updateProfile(const std::string& n, const std::string& e, const std::string& b) {
    name = n;

    if (e.find('@') != std::string::npos) {
        email = e;
    }

    if (b.size() <= 300) {
        bio = b;
    }
}

std::string ProfileManager::getSummary() const {
    std::string displayedBio = bio.empty() ? "No bio provided" : bio;
    return name + " <" + email + "> — " + displayedBio;
}