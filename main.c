#include "shazam.h"

void slow_type(char *s)
{
    while (*s)
    {
        write(1, s++, 1);
        usleep(1000 * 50);
    }
}

void dot_dot_dot()
{
    for (int i = 0; i < 3; i++)
    {
        usleep(1000 * 500);
        write(1, ".", 1);
    }
    printf("\n");
}

void print_christmas(void)
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 41; j++)
        {
            printf("%s██" RESET, NOEL_42[i][j]);
        }
        printf("\n");
    }
}
void print_shazam(char language)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 41; j++)
        {
            if (i == 2)
                if (j == 20)
                {
                    if (language == 'e')
                        printf("\t%s\t" RESET, "Shazam ⚡ bgolding wishes you a Merry Christmas!");
                    else if (language == 'f')
                        printf("\t  %s  \t" RESET, "Shazam ⚡ bgolding te souhaite un Joyeux Noël!");
                    else if (language == 's')
                        printf("\t %s \t" RESET, "Shazam ⚡ bgolding te desea una Feliz Navidad!");
                    else if (language == 'd')
                        printf("  %s " RESET, "Shazam ⚡ bgolding wünscht dir ein frohes Weihnachtsfest!");
                    else if (language == 'n')
                        printf("\t     %s     \t" RESET, "Shazam ⚡ bgolding ønsker deg en god jul!");
                }
                else if (j > 5 && j < 36)
                    printf("");
                else
                    printf("%s██" RESET, WELCOME[i][j]);
            else
                printf("%s██" RESET, WELCOME[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void print_present(char *msg, char *present, char *link)
{
    slow_type(msg);
    write(1, "\n", 1);
    dot_dot_dot();
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 41; j++)
        {
            if (i == 2)
                if (j == 20)
                    printf("\t%s\t" RESET, present);
                else if (j > 0 && j < 40)
                    printf("");
                else
                    printf("%s██" RESET, WRAPPING[i][j]);
            else
                printf("%s██" RESET, WRAPPING[i][j]);
        }
        printf("\n");
    }
    printf("\nLink: %s\n\n", link);
}

int run_script()
{
    int c = 0;
    char **script = NULL;
    
    slow_type("Select language:\n");
    printf("1) English\n");
    printf("2) Français\n");
    printf("3) Español\n");
    printf("4) Deutsch\n");
    printf("5) Norsk\n");
    while ((c = getchar()) != '1' && !(c >= '2' && c <= '5'))
        continue;
    if (c == '2')
        return(shazam(FR_SCRIPT, 'f'));
    else if (c == '3')
        return(shazam(ES_SCRIPT, 's'));
    else if (c == '4')
        return(shazam(DE_SCRIPT, 'd'));
    else if (c == '5')
        return(shazam(NK_SCRIPT, 'n'));
    return(shazam(EN_SCRIPT, 'e'));
}

int main(void)
{
    run_script();
    return (0);
}
