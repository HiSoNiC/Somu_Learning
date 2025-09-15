# 🖥️ GNU Screen Cheat Sheet

`screen` helps you manage multiple terminal sessions within a single
window. It's like having tabs inside the terminal 🚀

------------------------------------------------------------------------

## ❓ Why Screen?

-   Run multiple shell sessions in one terminal\
-   Detach & reattach to sessions (even after logout)\
-   Keep processes running in background

------------------------------------------------------------------------

## ⚡ Basic Commands

-   `screen -S <name> -t <name>` → Start a new screen session with a
    name 🏷️\
-   `screen -ls` → List all running screen sessions 📋\
-   `screen -d <name>` → Detach from a session 🔌\
-   `screen -r <name>` → Reattach to a session 🔗\
-   `screen -dr <name>` → Detach others and reattach 🔄\
-   `exit` → Quit the current screen ❌\
-   `screen -S <name> -X quit` → Kill a session 💀

------------------------------------------------------------------------

## ⚙️ Screen Configuration

Configuration file: `~/.screenrc` 📝

### 🔧 What You Can Customize

  Feature            Description
  ------------------ -------------------------------
  - Window titles      Set default names for windows
  - Status line        Show host, time, window info
  - Key bindings       Change default shortcuts
  - Shell behavior     Choose default shell
  - Logging            Automatically log output
  - Environment vars   Use `setenv`

------------------------------------------------------------------------

## 📜 Example `.screenrc`

### 🔄 Scrollback & Shell

``` bash
defscrollback 10000
shell -$SHELL
```

### 🎨 Hardstatus Line (Fancy Status Bar)

``` bash
hardstatus alwayslastline
hardstatus string "%{= kR}╭─ %{= kW}NETDEV %{= kR}─╮ %{= kG}%w %{= kR}│ %{= kB}User: SOMASUNDARAM %{= kR}│ %{= kY}Host:%H %{= kR}│ %{= kC}Dir:%~ %{= kR}│ %{= kM}%Y-%m-%d %c %{= kR}╰─"
```

------------------------------------------------------------------------

## 💡 Customization Ideas

-   ✅ Unicode box-drawing characters for a clean UI\
-   🪟 Window list (`%w`) centered & highlighted\
-   💻 Show host, load, directory, date/time clearly\
-   🔢 Use `%n %t` for window number & title\
-   🪫 Use `%?` for conditionals (e.g., battery/SSH info)\
-   ⏳ Display uptime: `%U`\
-   🏷️ Show active window title: `%t`

------------------------------------------------------------------------

## 🎨 Color Codes

  Code   Description
  ------ -------------------------------------
  - `kR`  | Black text on **red** background
  - `kW`  | Black text on **white** background
  - `kG`  | Black text on **green** background
  - `kB`  | Black text on **blue** background
  - `kY`  | Black text on **yellow** background
  - `kC`  | Black text on **cyan** background

------------------------------------------------------------------------
