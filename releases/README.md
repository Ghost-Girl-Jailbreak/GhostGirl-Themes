# Releases

How GhostGirl Themes releases work.

---

## What Goes in a Release

Each release attaches:

| Asset | Type | Purpose |
|---|---|---|
| `GhostThemes.xex` | App | The GhostGirl Themes client |
| `Ghost-Default.zip` | Theme pack | Default galaxy purple theme |
| `Deep-Space.zip` | Theme pack | *(example)* |
| `Neon-Nights.zip` | Theme pack | *(example)* |
| `Minimal-Mono.zip` | Theme pack | *(example)* |

The `.xex` is the app. The `.zip` files are individual themes.

---

## Why Themes Are Release Assets

Themes are **content**, not source code.

- ✅ Keeps the repo small
- ✅ GitHub Releases has dedicated storage for binaries
- ✅ Users download from one place
- ✅ Each release can bundle new theme versions

**Don't commit theme `.zip` files to the repo.** Always attach them
to a release.

---

## Release Workflow

1. Build `GhostThemes.xex` locally.
2. Package any new themes as `.zip` files.
3. Go to **Releases** → **Draft a new release**.
4. Tag it (e.g. `v1.0.0`).
5. Title it `GhostGirl Themes v1.0.0`.
6. Attach:
   - `GhostThemes.xex`
   - `Ghost-Default.zip` (and any other themes)
7. Write release notes (see template below).
8. Publish.
9. Add theme entries to the main `repo.ini`.

---

## Release Notes Template

```markdown
# 👻 GhostGirl Themes v1.0.0

## 📥 Download

**App:** `GhostThemes.xex`
**Themes:** See the assets below

## 🎨 Themes in This Release

| Theme | Category | Size |
|---|---|---|
| Ghost Default | Dark | 1.2MB |
| Deep Space | Dark | 1.5MB |
| Neon Nights | Colorful | 1.8MB |

## ✨ What's New

- Initial release
- Theme browser
- Preview mode
- Apply / revert

## 📖 Install

Install through the Project Ghost Girl app store for the best
experience. Manual install: place `GhostThemes.xex` in
`Hdd:\Apps\Themes\`.

## ⚠️ Warning

Applying a theme replaces dashboard files. The app backs up the
current theme automatically before applying a new one. Press **Y**
to revert to default at any time.

## 🔗 Links

- [Project Ghost Girl](https://github.com/Ghost-Girl-Jailbreak/Project-Ghost-Girl)
- [Discord](https://discord.gg/2YFyMqP6Te)
```

---

## Version Naming

| Release Type | Tag Example | Notes |
|---|---|---|
| App update only | `v1.0.1` | Patch — no new themes |
| New theme added | `v1.1.0` | Minor — backwards compatible |
| Breaking change | `v2.0.0` | Major |

Individual themes can also carry their own version inside
`theme.ini`, independent of the app version.

---

## Related

- [themes/README.md](../themes/README.md) — theme format
- [CHANGELOG.md](../CHANGELOG.md) — app changelog
