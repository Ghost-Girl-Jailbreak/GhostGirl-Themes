# Themes

Theme packs for GhostGirl Themes.

> ⚠️ **Theme files are not stored in this repo.** They are
> distributed as release assets on the
> [Releases page](../../releases). This folder only documents
> the theme format.

---

## Where Themes Live

Themes are attached to GitHub Releases as `.zip` assets.

Example release:

```
GhostGirl Themes v1.0.0
├── GhostThemes.xex           ← the app
├── Ghost-Default.zip         ← a theme
├── Deep-Space.zip            ← a theme
└── Neon-Nights.zip           ← a theme
```

Users download theme packs from the Releases page or install them
directly through the app store.

---

## Theme Pack Structure

Each theme is a `.zip` containing:

```
ThemeName.zip
└── ThemeName/
    ├── theme.ini        ← metadata
    ├── preview.png      ← 256x256 thumbnail
    └── (theme files)    ← the actual dashboard files
```

When extracted on the console, it goes to:

```
Hdd:\GhostGirl\Themes\ThemeName\
```

---

## `theme.ini` Format

```ini
[Theme]
Name=Ghost Default
Author=GhostGirl
Version=1.0.0
Category=Dark
Description=The default galaxy purple theme.
Preview=preview.png
```

### Fields

| Field | Required | Description |
|---|---|---|
| Name | ✅ | Display name |
| Author | ✅ | Who made the theme |
| Version | ✅ | Semantic version |
| Category | ❌ | Dark / Light / Minimal / Colorful |
| Description | ❌ | Short blurb |
| Preview | ❌ | Preview image filename |

---

## Categories

| Category | Description |
|---|---|
| **Dark** | Dark backgrounds, low brightness |
| **Light** | Light backgrounds, bright |
| **Minimal** | Simple, few elements |
| **Colorful** | Vibrant colors, loud |

---

## Publishing a Theme

Themes are published as **release assets**, not committed to the repo.

1. Build the theme folder locally.
2. Zip it: `zip -r ThemeName.zip ThemeName/`
3. Create or edit a GitHub Release.
4. Attach the `.zip` as a release asset.
5. Add the theme to the manifest (see below).

---

## Manifest Entry

Each theme gets an entry in the main Project Ghost Girl `repo.ini`:

```ini
[Theme-GhostDefault]
Title=Ghost Default Theme
Author=GhostGirl
Version=1.0.0
Size=1.2MB
Category=Theme
Description=The default galaxy purple dashboard theme.
DownloadURL=https://github.com/Ghost-Girl-Jailbreak/GhostGirl-Themes/releases/download/v1.0.0/Ghost-Default.zip
InstallPath=Hdd:\GhostGirl\Themes\Ghost Default\
Status=Active
Requires=1.0.0
Checksum=
```

Note the `DownloadURL` points to a **release asset**, not a raw file.

---

## Submitting a Theme

> 🚧 **Theme submissions are not open yet.**

Once open, submit a theme via an issue on the main repo. Themes must:

- Be your own work (or properly licensed)
- Not contain copyrighted images
- Work on real hardware
- Include a preview image

---

## Built-In Themes

| Theme | Author | Status |
|---|---|---|
| Ghost Default | GhostGirl | 🚧 Planned |
| Deep Space | — | 🚧 Planned |
| Neon Nights | — | 🚧 Planned |
| Minimal Mono | — | 🚧 Planned |
