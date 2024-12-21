#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>

int main(void)
{
    char *login;
    struct passwd *pentry;

    if((login = getlogin()) == NULL) {
        perror("getlogin");
        exit(EXIT_FAILURE);
    }
    printf("getlogin returned %s\n", login);

    if((pentry = getpwnam(login)) == NULL) {
        perror("getpwnam");
        exit(EXIT_FAILURE);
    }
    printf("gecos: %s\n", pentry->pw_gecos);
    exit(EXIT_SUCCESS);
}

