#!/bin/sh
bl_dev=/sys/class/backlight/intel_backlight
step=20
bl_val=`cat $bl_dev/brightness`

case $1 in
  -)
		new=$(($bl_val - $step)) 
		echo $new > $bl_dev/brightness
		;;
  +)
		new=$(($bl_val + $step)) 
		echo $new > $bl_dev/brightness
		;;
esac
