#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char *c[10] = {"Bir", "iki", "uc"};

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", c[i]);
    }
    free(c);
    return 0;
}