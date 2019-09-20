# Click lines

A very simple example of a raw window program, with a child window control, written in native C++11 Win32, using [WinLamb](https://github.com/rodrigocfd/winlamb) library.

Lines will be drawn upon successive clicks.

![Screenshot](screenshot-75.png)

## WinLamb library

This project uses [WinLamb](https://github.com/rodrigocfd/winlamb) library in a [submodule](http://blog.joncairns.com/2011/10/how-to-use-git-submodules).

After cloning the repository, pull the submodule files by running:

    git submodule init
    git submodule update

### Showcase

The project showcases the following WinLamb features:

* raw main window;
* raw custom control window;
* mouse click events.
