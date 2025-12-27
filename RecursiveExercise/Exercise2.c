#include <stdlib.h>
#include <stdio.h>

int multiplication(int num1, int num2){
    int result;
    
    if (num2 == 1)
    {
        result = num1;
    }
    else {
        result = num1 + multiplication(num1, num2-1);
    }
    
    return result;        
}

int main(){
    int num1 = 0, num2 = 0;
    printf("1.Sayiyi giriniz: ");
    scanf("%d", &num1);
    printf("\n2.Sayiyi giriniz: ");
    scanf("%d", &num2);
    printf("\nSonuc: %d", multiplication(num1, num2));
    return 0;
}