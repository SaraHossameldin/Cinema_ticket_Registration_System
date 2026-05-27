# 🎬 Cinema Ticket Registration System

A desktop GUI application built with **C++ and Qt** that handles user registration and login for a cinema ticketing platform.

---

## Features

- **Login** — Authenticate with a username and password; shows an error label on failed attempts
- **Register** — Create a new account with:
  - Username & password (with confirmation and duplicate-check)
  - Date of birth (day, month, year) — minimum age of 12 required
  - Gender selection (Male / Female)
  - Account type (User / Admin)
  - Preferred movie genres (Action, Comedy, Romance, Drama, Horror, Other)
- **Welcome Screen** — Greets the logged-in user by name and age, with a sign-out button that returns to the Login screen
- **In-memory user store** — Pre-loaded with 4 sample accounts; new registrations are added at runtime

---

## Project Structure

```
CinemaProject/
├── main.cpp               # App entry point — launches LoginWindow
├── Users.h / Users.cpp    # Global in-memory user arrays (usernames, passwords, ages)
├── loginwindow.h/cpp/ui   # Login screen
├── registerwindow.h/cpp/ui# Registration screen
├── welcomewindow.h/cpp/ui # Post-login welcome screen
└── CinemaProject.pro      # Qt project file
```

---

## Default Test Accounts

| Username | Password | Age |
|----------|----------|-----|
| admin    | admin    | 20  |
| test     | 1234     | 21  |
| user1    | 1101     | 22  |
| user2    | 1102     | 23  |

---

## Requirements

- Qt 6.7+ (uses Qt Widgets)
- C++17 or later
- Qt Creator (recommended IDE)

---

## How to Run

1. Open `CinemaProject.pro` in **Qt Creator**
2. Select a Kit (e.g. Qt 6.7 for your OS)
3. Click **Build** then **Run**

> **Note:** The welcome screen loads a cinema image from a hardcoded local path. Update the path in `welcomewindow.cpp` to point to an image on your machine:
> ```cpp
> QPixmap pix("path/to/your/image.jpeg");
> ```

---

## Authors

- **Omar Rabeh**
- **Sara Hossam**
