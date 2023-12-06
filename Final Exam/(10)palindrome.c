
#include <unistd.h>
#include <stdio.h>

int mystrcmp(char *src, char *dest) {
    int i = 0;
    while (src[i] == dest[i] && (src[i] != 0 || dest[i] != 0)) {
        i++;
    }
    return src[i] - dest[i];
}

int white(char car, int i) {
    if ((car >= 9 && car <= 13) || car == ' ') {
        i++;
    }
    return i;
}

int len(char *str) {
    int i = 0;
    while (str[i] != 0) {
        i++;
    }
    return i;
}

char *rev_str(char *str) {
    int c = len(str);

    while (c > 0) {
        write(1, &str[c - 1], 1);
        c--;
    }
    write(1, "\n", 1);
    return str;
}

int is_palindrome(char *str1) {
    if (mystrcmp(str1, rev_str(str1)) == 0) {
        return 1;
    }
    return 0;
}

int main()
{
    printf("%d", (is_palindrome("i topi non avevano nipoti")));
}

