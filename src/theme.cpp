#include "theme.h"
#include "config.h"

#include <xtl.h>
#include <stdio.h>
#include <sstream>
#include <algorithm>

// ============================================================
//  GhostGirl Themes — Theme Engine
// ============================================================
//
//  NOTE: Plan-only. Real file system operations and theme
//  parsing will be implemented once the XDK is available.
//
//  Xbox 360 file I/O uses CreateFile / ReadFile from <xtl.h>,
//  not std::ifstream, so file-reading helpers here will need
//  to be rewritten with XDK calls.
// ============================================================

bool EnsureThemesDirectory() {
    // ---- Real implementation (once XDK is available) ----
    // CreateDirectoryA(THEMES_DIR, NULL);
    return true;
}

std::vector<Theme> LoadThemes() {
    std::vector<Theme> themes;

    // ---- Real implementation (once XDK is available) ----
    // 1. Enumerate folders in THEMES_DIR
    // 2. For each folder, look for theme.ini
    // 3. Parse it with ParseThemeIni
    // 4. Add to themes vector

    // ---- Placeholder: one built-in theme ----
    Theme ghostDefault;
    ghostDefault.Name         = "Ghost Default";
    ghostDefault.Author       = "GhostGirl";
    ghostDefault.Version      = "1.0.0";
    ghostDefault.Category     = "Dark";
    ghostDefault.Description  = "The default galaxy purple theme.";
    ghostDefault.Path         = "Hdd:\\GhostGirl\\Themes\\Ghost Default\\";
    ghostDefault.PreviewImage = "preview.png";
    themes.push_back(ghostDefault);

    return themes;
}

bool ParseThemeIni(const std::string& path, Theme& outTheme) {
    // ---- Real implementation (once XDK is available) ----
    // Read the file at `path`, parse INI-style key=value lines,
    // fill outTheme fields.
    (void)path;
    (void)outTheme;
    return false;
}

bool ApplyTheme(const Theme& theme) {
    // ---- Real implementation (once XDK is available) ----
    // 1. Back up DASHBOARD_THEME_PATH to BACKUP_DIR
    // 2. Copy theme files from theme.Path to DASHBOARD_THEME_PATH
    // 3. Force dashboard to reload (if possible)
    (void)theme;
    return true;
}

bool RevertTheme() {
    // ---- Real implementation (once XDK is available) ----
    // 1. Check BACKUP_DIR exists
    // 2. Copy backup files back to DASHBOARD_THEME_PATH
    return true;
}

bool IsThemeApplied(const Theme& theme) {
    // Compare current dashboard theme name with theme.Name
    (void)theme;
    return false;
}
