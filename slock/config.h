/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#073642",   /* during input */
	[FAILED] = "#dc322f",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "Enter user password to unlock";

/* text color */
static const char * text_color = "#eee8d5";

/* text size (must be a valid size) */
static const char * font_name = "lucidasanstypewriter-18";
