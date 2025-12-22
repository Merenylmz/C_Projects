#include <stdlib.h>
#include <stdio.h>


int main() {


    // * ----> pointer tanımlamak için konulan işarettir 
    // & ----> bu ise adresin neresi olduğunu belli eder
    // int number = 10;
    // int *p;

    // p = &number;

    // printf("%d\n", p);
    // printf("%d\n", *p);

    int *number2;
    int n;
    n = 20;
    number2 = &n;

    printf("%d\n", number2);
    printf("%d\n", *number2);
    printf("%d\n", &number2);
    printf("%d\n", n);
    printf("%d\n", &n);
    
    return 0;
}