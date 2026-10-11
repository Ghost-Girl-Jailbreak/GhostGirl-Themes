# Building GhostGirl Themes

## Requirements

- **Windows 10 or 11** (VM is fine)
- **Visual Studio 2010**
- **Xbox 360 XDK**
- A jailbroken Xbox 360 for testing

---

## Build Steps

1. Open `GhostThemes.sln` in Visual Studio 2010.
2. Set target platform to **Xbox 360**.
3. Choose **Debug** or **Release**.
4. Build → produces `GhostThemes.xex`.
5. Copy `GhostThemes.xex` to the console:
   - Via FTP, or
   - Via USB stick
6. Place in `Hdd:\Apps\Themes\GhostThemes.xex`.
7. Launch from your dashboard.

---

## Project Files (to be added)

- `GhostThemes.sln`
- `GhostThemes.vcxproj`
- `GhostThemes.vcxproj.filters`

---

## Notes

- Do not commit XDK files.
- Do not commit compiled `.xex` files to `src/`.
- Theme `.zip` files go in Releases, not the repo.
- Test on real hardware before releasing.

---

## First Milestone

A build that:

1. Launches without crashing
2. Enumerates the `Hdd:\GhostGirl\Themes\` folder
3. Displays at least one theme in the browser
4. Exits cleanly on **Start**

After that, wire up Apply / Revert with real file I/O.
