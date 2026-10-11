#include "ui.h"
#include "config.h"
#include <stdio.h>

// ============================================================
//  GhostGirl Themes — UI Layer
// ============================================================
//
//  NOTE: Plan-only. Real rendering uses XUI or Direct3D
//  once the XDK is installed. For now, output to debug console.
// ============================================================

bool UI_Init() {
    return true;
}

void UI_Shutdown() {
    // Nothing to clean up yet.
}

void DrawThemeBrowser(const std::vector<Theme>& themes,
                      int selectedIndex,
                      int currentPage) {
    // ---- Real implementation (once XDK is available) ----
    // Grid of theme thumbnails, selected one highlighted,
    // title + author shown at bottom.

    // ---- Placeholder ----
    char buffer[256];
    sprintf_s(buffer, 256, "Themes page %d | Selected: %d | %s",
              currentPage,
              selectedIndex,
              (selectedIndex >= 0 && selectedIndex < (int)themes.size())
                  ? themes[selectedIndex].Name.c_str()
                  : "None");
    OutputDebugStringA(buffer);
    OutputDebugStringA("\n");
}

void DrawThemePreview(const Theme& theme) {
    OutputDebugStringA("Previewing: ");
    OutputDebugStringA(theme.Name.c_str());
    OutputDebugStringA("\n");
}

void DrawStatus(const char* message) {
    OutputDebugStringA(message);
    OutputDebugStringA("\n");
}
