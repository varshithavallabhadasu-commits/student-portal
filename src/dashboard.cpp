#include "dashboard.h"
#include <sstream>
#include <ctime>

std::string Dashboard::buildReport(bool isLoggedIn, const ProfileManager& profile) const {
    std::ostringstream out;
    out << "=== Dashboard ===\n";
    out << "Status: " << (isLoggedIn ? "Logged in" : "Logged out") << "\n";

    std::time_t now = std::time(nullptr);
    out << "Generated at: " << std::ctime(&now);

    if (isLoggedIn) {
    out << "Profile: " << profile.getSummary() << "\n";
} else {
    out << "Please log in to view your profile.\n";
}

    return out.str();
}