/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = " ______________________________\n\
/ lasciante ogne speranza, voi \\\n\
\\ ch'intrate.                  /\n\
 ------------------------------\n\
   \\         ,        ,\n\
    \\       /(        )`\n\
     \\      \\ \\___   / |\n\
            /- _  `-/  '\n\
           (/\\/ \\ \\   /\\\n\
           / /   | `    \\\n\
           O O   ) /    |\n\
           `-^--'`<     '\n\
          (_.)  _  )   /\n\
           `.___/`    /\n\
             `-----' /\n\
<----.     __ / __   \\\n\
<----|====O)))==) \\) /====\n\
<----'    `--' `.__,' \\\n\
             |        |\n\
              \\       /\n\
        ______( (_  / \\______\n\
      ,'  ,-----'   |        \\\n\
      `--{__________)        \\/";


/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-b&h-luxi mono-bold-r-normal-*-17-120-100-100-m-0-iso8859-15";
