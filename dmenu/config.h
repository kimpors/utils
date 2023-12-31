/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
static unsigned int border_width = 2;
static unsigned int lines = 8;

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
  "hack nerd font:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cad3f5", "#24273a" },
	[SchemeSel] = { "#24273a", "#8aadf4" },
	[SchemeOut] = { "#cad3f5", "#24273a" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
