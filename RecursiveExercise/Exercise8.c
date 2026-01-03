#include <stdlib.h>
#include <stdio.h>

int powerOfTwo(int n){
    int res;
    if (n == 0)
    {
        res = 1;
    } else {

        res = 2*powerOfTwo(n-1);
    }
    printf("\n%d", res);
    return res;
}

int main(){
    int number = 0;
    printf("Enter a Number: "); 
    scanf("%d", &number);
    powerOfTwo(number);
    return 0;
}