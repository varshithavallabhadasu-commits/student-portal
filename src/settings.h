#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>

class Settings {
public:
    void toggleNotifications();
    void setTheme(const std::string& newTheme);
    void setLanguage(const std::string& newLanguage);
    std::string describe() const;

private:
    bool notificationsEnabled = true;
    std::string theme = "light"; // default light theme
    std::string language = "English";
    std::string notificationMessage = "No new notifications";
};

#endif