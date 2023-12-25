#include <stdio.h>
#include <unistd.h>
#include <time.h>

// ANSI escape codes for text colors
#define RESET	"\x1B[0m"	// Default
#define B1		"\x1B[30m"	// Black
#define R2		"\x1B[31m"	// Dark Red
#define G2		"\x1B[32m"	// Dark Green
#define R1		"\x1B[91m"	// Light Red
#define G1		"\x1B[92m"	// Light Green
#define Y1		"\x1B[93m"	// Light Yellow
#define C1		"\x1B[96m"	// Light Cyan
#define YG		"\x1B[93;42m"		// Yellow on Green
#define YRS		"\x1B[93;101m"		// Light Yellow on Red
#define RB		"\x1B[91;42;5m"		// Red Blink
#define RY		"\x1B[91;103;5m"	// Red & Yellow Blinking
#define YC		"\x1B[93;106;5m"	// Yellow & Cyan Blinking
#define CB		"\x1B[96;102;5m"	// Light Cyan on Green Blinking
#define CY		"\x1B[96;103;5m"	// Cyan & Yellow Blinking
#define BLINK   "\x1B[5m"	// Blinking

// Christmas Albums
#define XMAS_VULF		"\t    Woody Goss - A Very Vulfy Christmas (2019)    \t"
#define XMAS_VULF_LINK	"https://open.spotify.com/album/6pxAYPWQE13djRu0Gz0ET4?si=FDL2sbY9SmqIanMOhoby8A"
#define XMAS_CHILL		"\t   Dolly Parton - A Holly Dolly Christmas (2020)\t"
#define XMAS_CHILL_LINK	"https://open.spotify.com/album/0UKCFUDo5hCdAB4b6tPqQe?si=ANqFlTNcTLiiqXJGIstShQ"
#define XMAS_METAL		"\tChristopher Lee - A Heavy Metal Christmas (2012)\t"
#define XMAS_METAL_LINK	"https://open.spotify.com/album/3k7mUNhTAu4wtLe5lpUd2j?si=2UybYjrDTt6pNViWUvR_rw"
#define XMAS_ENERGETIC	"\t    Compilation - Punk Goes Christmas (2013)    \t"
#define XMAS_ENERGETIC_LINK	"https://open.spotify.com/album/63J37R8ysZjLGpXMsJhRh3?si=WUo2b1wxQu2lNKbsVfg8tQ"

// Normal Albums
#define NORMAL_JAZZ		"\t\tKat Edmonson - Way Down Low (2012)\t\t"
#define NORMAL_JAZZ_LINK	"https://open.spotify.com/album/0QYQcbZ8cNGQxH198kfycR?si=KQLolxpkSZaarFXHNserFQ"
#define NORMAL_COUNTRY	"  The Flying Burrito Brothers - The Gilded Palace of Sin (1969)  "
#define NORMAL_COUNTRY_LINK	"https://open.spotify.com/album/6VWKy5o2OcdeWa7yolazjU?si=IjqmV6wJQLSKZKGGhbe8Vg"
#define NORMAL_METAL	"\t   Iron Maiden - The Number of the Beast (1982)  \t"
#define NORMAL_METAL_LINK	"https://open.spotify.com/album/5S3gls8Kjn8KVmqlIDEBbO?si=e958HvmkS22Ses2soIxMVQ"
#define NORMAL_ENERGETIC	"\t\tCory Wong - The Striped Album (2020)\t\t"
#define NORMAL_ENERGETIC_LINK	"https://open.spotify.com/album/7BWRgbyTOEjtPyVUnTxwj8?si=2SPDauh5QaOFr-66W3pB5w"

extern char *EN_SCRIPT[16];
extern char *FR_SCRIPT[16];
extern char *ES_SCRIPT[16];
extern char *DE_SCRIPT[16];
extern char *NK_SCRIPT[16];
extern char *NOEL_42[15][41];
extern char *WELCOME[5][41];
extern char *WRAPPING[5][41];


int     shazam(char **script, char language);
void	dot_dot_dot();
void	slow_type(char *s);
void	print_present(char *msg, char *present, char *link);
void	print_shazam(char language);
void	print_christmas(void);