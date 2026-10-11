#include <xtl.h>
#include "config.h"
#include "theme.h"
#include "ui.h"

// ============================================================
//  GhostGirl Themes — Main Entry Point
// ============================================================

int main() {
    if (!UI_Init()) return 1;
    EnsureThemesDirectory();

    // ---- Load themes ----
    std::vector<Theme> themes = LoadThemes();
    if (themes.empty()) {
        DrawStatus("No themes found.");
        UI_Shutdown();
        return 1;
    }

    int selectedIndex = 0;
    int currentPage   = 0;
    bool running      = true;
    bool previewing   = false;

    // ---- Main loop ----
    while (running) {
        if (previewing) {
            DrawThemePreview(themes[selectedIndex]);
        } else {
            DrawThemeBrowser(themes, selectedIndex, currentPage);
        }

        XINPUT_STATE state;
        ZeroMemory(&state, sizeof(state));

        if (XInputGetState(0, &state) == ERROR_SUCCESS) {
            WORD buttons = state.Gamepad.wButtons;

            // Navigate list (only when not previewing)
            if (!previewing) {
                if (buttons & XINPUT_GAMEPAD_DPAD_DOWN) {
                    selectedIndex++;
                    if (selectedIndex >= (int)themes.size())
                        selectedIndex = 0;
                    Sleep(INPUT_DEBOUNCE_MS);
                }
                if (buttons & XINPUT_GAMEPAD_DPAD_UP) {
                    selectedIndex--;
                    if (selectedIndex < 0)
                        selectedIndex = (int)themes.size() - 1;
                    Sleep(INPUT_DEBOUNCE_MS);
                }

                // Preview
                if (buttons & XINPUT_GAMEPAD_A) {
                    previewing = true;
                    Sleep(INPUT_DEBOUNCE_MS + 50);
                }

                // Apply
                if (buttons & XINPUT_GAMEPAD_X) {
                    DrawStatus("Applying theme...");
                    ApplyTheme(themes[selectedIndex]);
                    Sleep(300);
                }

                // Revert
                if (buttons & XINPUT_GAMEPAD_Y) {
                    DrawStatus("Reverting to default...");
                    RevertTheme();
                    Sleep(300);
                }

                // Exit
                if (buttons & XINPUT_GAMEPAD_START) {
                    running = false;
                }
            } else {
                // Exit preview
                if (buttons & XINPUT_GAMEPAD_B) {
                    previewing = false;
                    Sleep(INPUT_DEBOUNCE_MS + 50);
                }
            }
        }

        Sleep(UPDATE_INTERVAL_MS);
    }

    DrawStatus("Exiting...");
    UI_Shutdown();
    return 0;
}
