#!/bin/sh

xset r rate 250 100
xsetroot -solid black
xset s 600
wmname LG3D &
xprop -root -f _NET_WM_NAME 32a -set _NET_WM_NAME LG3D
AWT_TOOLKIT=MToolkit; export AWT_TOOLKIT
/usr/local/bin/slstatus &
/usr/bin/xautolock -secure -time 5 -locker slock &
exec /usr/local/bin/dwm
