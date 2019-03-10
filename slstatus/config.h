/* See LICENSE file for copyright and license details. */

/* how often to update the statusbar (min value == 1) */
#define UPDATE_INTERVAL 1

/* text to show if no value can be retrieved */
#define UNKNOWN_STR     "n/a"

/* statusbar
- battery_perc (battery percentage) [argument: battery name]
- battery_state (battery charging state) [argument: battery name]
- battery (combines battery_perc and battery_state) [argument: battery name]
- cpu_perc (cpu usage in percent) [argument: NULL]
- datetime (date and time) [argument: format]
- disk_free (disk usage in percent) [argument: mountpoint]
- disk_perc (disk usage in percent) [argument: mountpoint]
- disk_total (disk usage in percent) [argument: mountpoint]
- disk_used (disk usage in percent) [argument: mountpoint]
- entropy (available entropy) [argument: NULL]
- gid (gid of current user) [argument: NULL]
- hostname [argument: NULL]
- ip (ip address) [argument: interface]
- load_avg (load average) [argument: NULL]
- ram_free (ram usage in percent) [argument: NULL]
- ram_perc (ram usage in percent) [argument: NULL]
- ram_total (ram usage in percent) [argument: NULL]
- ram_used (ram usage in percent) [argument: NULL]
- run_command (run custom shell command) [argument: command]
- temp (temperature in degrees) [argument: temperature file]
- uid (uid of current user) [argument: NULL]
- uptime (uptime) [argument: NULL]
- username (username of current user) [argument: NULL]
- vol_perc (alsa volume and mute status in percent) [argument: soundcard]
- wifi_perc (wifi signal in percent) [argument: wifi card interface name]
- wifi_essid (wifi essid) [argument: wifi card interface name]
- wifi_stat (combines wifi_perc and wifi_stat) [argument: wifi cards interface name] */
static const struct arg args[] = {
	/* function	format			argument */
	{ cpu_perc, "[CPU %s]|",  NULL },
	{ ram_perc, "[Mem %s]|",  NULL },
	{ battery, "[Bat%s]|", "BAT0" },
	{ wifi_stat, "[ESSID:%s]|", "wlan0" },
	{ ip, "[wlan0:%s]|", "wlan0" },
	{ ip, "[eth0:%s]|", "eth0" },
	{ ip, "[tun0:%s]|", "tun0" },
	{ datetime, "[%s]",       "%F(w%V) %T" },
};
