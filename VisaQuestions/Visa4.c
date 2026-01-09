#include <stdio.h>
#include <stdlib.h>

int main(){
    int number1, number2;
    printf("ilk araligi giriniz: ");
    scanf("%d", &number1);
    printf("\nikinci araligi giriniz: ");
    scanf("%d", &number2);

    for (int i = number1; i <= number2; i++)
    {
        int sum = 0;
        int prev = i;
        while (prev>0)
        {
            int digit = prev%10;
            sum += digit;
            prev /=10;
        }
        if (i % sum == 0)
        {
            printf("\n%d bir harshad sayidir.", i); 
            sum = 0;
        }
    }
    
    return 0;
}