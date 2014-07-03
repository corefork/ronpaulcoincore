
Debian
====================
This directory contains files used to package ronpaulcoind/ronpaulcoin-qt
for Debian-based Linux systems. If you compile ronpaulcoind/ronpaulcoin-qt yourself, there are some useful files here.

## ronpaulcoin: URI support ##


ronpaulcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install ronpaulcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your ronpaulcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/ronpaulcoin128.png` to `/usr/share/pixmaps`

ronpaulcoin-qt.protocol (KDE)

