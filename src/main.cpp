#include <iostream>
using namespace std;

#include "login.h"
#include "profile.h"
#include "dashboard.h"
#include "settings.h"

int main() {
    LoginManager login;
    ProfileManager profile;
    Dashboard dashboard;
    Settings settings;

    login.registerUser("alice", "password123");

    bool authenticated = login.authenticate("alice", "password123");

    profile.updateProfile(
        "Alice",
        "alice@example.com",
        "CSE student interested in software development."
    );

    settings.setTheme("dark");
    settings.setLanguage("English");

    std::cout << dashboard.buildReport(authenticated, profile);
    std::cout << settings.describe() << std::endl;

    return 0;

    
}