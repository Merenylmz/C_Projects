#include <stdio.h>
#include <stdlib.h>

typedef union {
    int x;
    char name[4];
}Data;


int main(){
    Data data;
    data.x = 0x44434241;

    for (int i = 0; i < 4; i++)
    {
        printf("\n%c", data.name[i]);
    }

    return 0;
}