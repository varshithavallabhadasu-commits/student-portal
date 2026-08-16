#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <string>
#include "login.h"
#include "profile.h"

class Dashboard {
public:
    std::string buildReport(bool isLoggedIn, const ProfileManager& profile) const;
};

#endif