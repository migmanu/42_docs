# 42 School Berlin Projects
<p align="center">
    <img src="42_docs_header.gif" alt="animated" />
</p>

## Introduction

This repository contains all my projects from 42 Berlin School, along with some additional resources that might assist you on your journey.

All projects are included as git submodules. If you want to have them all, just clone this repository and run:

```bash
git submodule update --init
```

Feel free to reach out if you have any questions. My intra username is jmigoya-.

## Set Your Editor

### Using `neovim`
![Screenshot from 2024-04-23 12-17-28](https://github.com/migmanu/42_docs/assets/52668755/b717e048-5377-433e-801e-5b69c71fabee)

Although VS Code is available on campus, exams require you to use either `vim` or `gedit`. Therefore, it is a good idea to become familiar with `vim`. It might take some time to get used to, but it is definitely worth it in the long run.

For those who still want a modern IDE experience, there are many plugins and also `neovim` to help you achieve that.

#### Installing `neovim`

You need to have `neovim` installed on your computer. If your campus does not provide it, you can install it without `sudo` privileges by using an AppImage, as detailed [here](https://github.com/neovim/neovim/blob/master/INSTALL.md):

```bash
curl -LO https://github.com/neovim/neovim/releases/latest/download/nvim.appimage
chmod u+x nvim.appimage
./nvim.appimage
mkdir -p /opt/nvim
mv nvim.appimage /opt/nvim/nvim
```

Add the path to your `~/.bashrc` or `~/.zshrc`:

```bash
export PATH="$PATH:/opt/nvim/"
```

#### Configuring `neovim`

By default, `neovim` will look for your configuration at `~/.config/nvim`. Here, I provide my `neovim` configuration, which you can install by running:

```bash
cd ~/.config
git clone https://github.com/migmanu/nvim_42 nvim
```

Now run `nvim` and watch as `Lazy` installs the listed plugins.

My configuration uses [LazyVim](https://github.com/LazyVim/LazyVim) and is heavily based on the [starter template](http://www.lazyvim.org/installation).

Here, you have more than you need to get started. Some of the helpful commands available are:

- `space` as the leader key
- Run `:Stdheader` to get the 42 header on a file
- `leader + e` to open the files menu
- `leader ff` for file search
- `leader + sg` to search by grep
- Run `:CopilotChat` to use Copilot
- Run `:CopilotChatSocrates` for a custom prompt that helps you solve problems through the Socratic method

One of the best quality-of-life plugins installed is [harpoon](https://github.com/ThePrimeagen/harpoon). I strongly recommend checking it out. Between that and file search, you might never open the file explorer again!

*Note that this configuration is a work in progress and may still change significantly.*

