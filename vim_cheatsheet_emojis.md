# 📝 Vim Commands Cheat Sheet

Boost your productivity in Vim with these handy commands 🚀

------------------------------------------------------------------------

## ✍️ Insert Mode

-   `i` → 🖊️ Insert/edit mode\
-   `a` → ➡️ Insert next (go to insert mode after cursor)\
-   `A` → ↩️ Go to the end of the line, then insert mode

## 🧭 Navigation

-   `&` → 🔚 Move to the end of the line\
-   `gg` → ⬆️ Go to the first line\
-   `G` → ⬇️ Go to the last line

## 🔄 Modes

-   `esc` → ⌨️ Escape (normal) mode

## ✂️ Editing

-   `dd` → 🗑️ Delete the current line\
-   `3dd` → 🗑️🗑️🗑️ Delete 3 lines starting from current line\
-   `:10,15d` → 🎯 Delete specific range of lines (10 to 15)\
-   `:%d` → ❌ Delete all lines\
-   `:g/error/d` → ⚠️ Delete lines containing the word **error**\
-   `:g!/error/d` → ✅ Delete lines *not* containing the word **error**

## ⏪ Undo / Redo

-   `:u` or `u` → ↩️ Undo\
-   `Ctrl + r` → 🔁 Redo

## ⚙️ Settings

-   `:se nu` → 🔢 Set line numbers

## 💾 Save & Exit

-   `:wq` → 💾 Save and exit the file
