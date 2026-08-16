#include "dashboard.h"
#include <sstream>

std::string Dashboard::buildReport(bool isLoggedIn, const ProfileManager& profile) const {
    std::ostringstream out;
    out << "=== Dashboard ===\n";
    out << "Status: " << (isLoggedIn ? "Logged in" : "Logged out") << "\n";

    if (isLoggedIn) {
        out << "Profile: " << profile.getSummary() << "\n";
    }

    return out.str();
}