#include "settings.h"

void Settings::toggleNotifications() {
    notificationsEnabled = !notificationsEnabled;
}

void Settings::setTheme(const std::string& newTheme) {
    theme = newTheme;
}

std::string Settings::describe() const {
    return "Notifications: " +
           std::string(notificationsEnabled ? "on" : "off") +
           ", Theme: " + theme;
}