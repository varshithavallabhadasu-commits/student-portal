#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>

class Settings {
public:
    void toggleNotifications();
    void setTheme(const std::string& newTheme);
    std::string describe() const;

private:
    bool notificationsEnabled = true;
    std::string theme = "light";
};

#endif