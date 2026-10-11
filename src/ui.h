#pragma once

#include "theme.h"
#include <vector>

// Draw the theme browser
void DrawThemeBrowser(const std::vector<Theme>& themes,
                      int selectedIndex,
                      int currentPage);

// Draw the theme preview overlay
void DrawThemePreview(const Theme& theme);

// Draw a simple status message
void DrawStatus(const char* message);

// Init / shutdown
bool UI_Init();
void UI_Shutdown();
