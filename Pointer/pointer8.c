#include <stdlib.h>
#include <stdio.h>

int main() {
    char name[20] = {'d', 'e', 'n', 'e', 'm', 'e'};
    char *test;

    test = name;
    printf("%c", *(test+2));

    return 0;
}