# Student Portal

## Description
A lightweight student portal demo used to practice Git workflows: login, profile, dashboard, and settings modules.

## Prerequisites
- A C++17-compatible compiler (g++ or clang++)
- Git

## Setup
1. Clone the repo: `git clone <repo-url>`
2. Enter the folder: `cd student-portal`

## Build & Run
```bash
g++ -std=c++17 -o portal src/*.cpp
./portal
```

## Project Structure
- main.cpp — entry point
- login.cpp/.h — authentication module
- profile.cpp/.h — user profile module
- dashboard.cpp/.h — dashboard summary module
- settings.cpp/.h — user settings module
