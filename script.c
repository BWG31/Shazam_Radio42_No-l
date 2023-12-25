#include "shazam.h"

static int  Xmas_Chill(char **script)
{
    char c = 0;
    slow_type(script[6]);
    printf("%s", script[7]);
    while ((c = getchar()) != '1' && c != '2')
        continue;
    if (c == '1')
        print_present(script[14], XMAS_VULF, XMAS_VULF_LINK);
    else if (c == '2')
        print_present(script[14], XMAS_CHILL, XMAS_CHILL_LINK);
    return (0);
}
static int  Xmas_Energetic(char **script)
{
    char c = 0;
    slow_type(script[8]);
    printf("%s", script[9]);
    while ((c = getchar()) != '1' && c != '2')
        continue;
    if (c == '1')
        print_present(script[14], XMAS_ENERGETIC, XMAS_ENERGETIC_LINK);
    else if (c == '2')
        print_present(script[14], XMAS_METAL, XMAS_METAL_LINK);
    return (0);
}

static int  Xmas(char **script)
{
    char c = 0;
    slow_type(script[4]);
    printf("%s", script[5]);
    while ((c = getchar()) != '1' && c != '2')
        continue;
    if (c == '1')
        return(Xmas_Chill(script));
    else if (c == '2')
        return(Xmas_Energetic(script));
    return (0);
}
static int  normal_Chill(char **script)
{
    char c = 0;
    slow_type(script[10]);
    printf("%s", script[11]);
    while ((c = getchar()) != '1' && c != '2')
        continue;
    if (c == '1')
        print_present(script[14], NORMAL_JAZZ, NORMAL_JAZZ_LINK);
    else if (c == '2')
        print_present(script[14], NORMAL_COUNTRY, NORMAL_COUNTRY_LINK);
    return (0);
}
static int  normal_Energetic(char **script)
{
    char c = 0;
    slow_type(script[12]);
    printf("%s", script[13]);
    while ((c = getchar()) != '1' && c != '2')
        continue;
    if (c == '1')
        print_present(script[14], NORMAL_METAL, NORMAL_METAL_LINK);
    else if (c == '2')
        print_present(script[14], NORMAL_ENERGETIC, NORMAL_ENERGETIC_LINK);
    return (0);
}

static int  normal(char **script)
{
    char c = 0;
    slow_type(script[4]);
    printf("%s", script[5]);
    while ((c = getchar()) != '1' && c != '2')
        continue;
    if (c == '1')
        return(normal_Chill(script));
    else if (c == '2')
        return(normal_Energetic(script));
    return (0);
}

int shazam(char **script, char language)
{
    char c = 0;
    slow_type(script[0]);
    dot_dot_dot();
    print_christmas();
    sleep(1);
    print_shazam(language);
    sleep(1);
    slow_type(script[1]);
    write(1, "\n", 1);
    dot_dot_dot();
    printf("%s\n", script[15]);
    dot_dot_dot();
    slow_type(script[2]);
    printf("%s", script[3]);
    while ((c = getchar()) != '1' && c != '2')
        continue;
    if (c == '1')
        return(Xmas(script));
    return(normal(script));
}
