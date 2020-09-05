//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.scripts/memory.sh",		5,			0},
	{"", "~/.scripts/volume.sh",		0,			10},
	{"", "~/.scripts/brightness.sh",	0,			11},
	{"", "~/.scripts/battery.sh",		30,			0},
	{"", "~/.scripts/temp.sh",		5,			0},
	{"", "~/.scripts/date.sh",		1,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
