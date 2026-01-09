#include <stdio.h>
#include <stdlib.h>

inline int powerOfTwoOrThree(int n, int p){
    if (p == 3)
    {
        return n*n*n;
    } else if(p == 2){
        return n*n;
    }
}

int main(){
    int number = 0;
    printf("Matris uzunlugunu giriniz: ");
    scanf("%d", &number);
    int array[number][number];
    
    for (int i = 0; i < number; i++)
    {
    }
    

    return 0;
}