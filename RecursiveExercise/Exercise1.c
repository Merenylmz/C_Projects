#include <stdlib.h>
#include <stdio.h>

int summationFunction(unsigned int num){
    if (num > 0)
    {
        return num + summationFunction(num - 1); 
    } else {
        return 0;
    }
};


int main(){
    unsigned int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);
    printf("%d", summationFunction(number));

    return 0;
}