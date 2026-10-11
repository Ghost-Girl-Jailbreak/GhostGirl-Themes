#pragma once

#include <string>
#include <vector>

// Metadata for a single theme
struct Theme {
    std::string Name;
    std::string Author;
    std::string Version;
    std::string Category;
    std::string Description;
    std::string Path;          // folder path on console
    std::string PreviewImage;  // preview.png inside the folder
};

// Load all themes from THEMES_DIR
std::vector<Theme> LoadThemes();

// Parse a theme.ini file
bool ParseThemeIni(const std::string& path, Theme& outTheme);

// Apply a theme (replaces current dashboard theme)
bool ApplyTheme(const Theme& theme);

// Revert to the default theme
bool RevertTheme();

// Check if a theme is currently applied
bool IsThemeApplied(const Theme& theme);

// Ensure the THEMES_DIR folder exists
bool EnsureThemesDirectory();
