#include <stdio.h>
#include <stdlib.h>


int main(){
    for (int i = 65; i <= 101; i++)
    {
        if (i >= 69 && i<=72)
        {
            if (i == 69)
            {
                printf("\n");
            }
            char letterLower1 = (char)(i+29);
            printf("%c ", letterLower1);
        } else if (i<69){
            char letterUpper1 = (char)(i);
            printf("%c ", letterUpper1);
        } 
        else if (i>=73 && i<=76)
        {
            if (i == 73)
            {
                printf("\n");
            }
            char letterUpper2 = (char)(i-6);
            printf("%c ", letterUpper2);
        } else if (i>=77 && i<=80)
        {
            if (i == 77)
            {
                printf("\n");
            }
            char letterLower2 = (char)(i+23);
            printf("%c ", letterLower2);
        }
        else if(i>=81 && i<=84)
        {
            if (i == 81)
            {
                printf("\n");
            }
            char letterLower2 = (char)(i-12);
            printf("%c ", letterLower2);
        }
    }
    return 0;
}