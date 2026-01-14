#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main(int argc, char *argv[]){
    #ifdef PI
    printf("PI degiskeni tanimli");
    #else
    printf("PI degiskeni tanimsiz");
    #endif
    

    return 0;
}