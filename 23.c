#include <string.h>


int palindroma (char s[]) {
    int i = 0;
    int n = strlen(s) - 1;
    while (s[i] == s[n] && s[i] != '\0') { i++; n--; }
    return (s[i] == '\0');
}