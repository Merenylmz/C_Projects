#include <stdio.h>
#include <stdlib.h>


int main(){

    for (int i = 0; i <= 5; i++)
    {
        for (int a = 5; a > i; a--)
        {
            printf("-");
        }

        for (int d = 0; d < (i+1); d++)
        {
            if (d%2 != 0 || d==1)
            {
                for (int b = 0; b <= i; b++)
                {
                    printf("*");
                }
            }
            
        }
        
        
       
        
        for (int c = 5; c > i; c--)
        {
            printf("-");
        }
        printf("\n");
    }


    // for (int i = 0; i < 10; i++)
    // {
    //     if (i%2 != 0)
    //     {
    //         for (int a = 0; a < i; a++)
    //         {
    //             printf("%d",i);
    //         }
            
    //     }
    //     printf("\n");
    // }
    
    


    return 0;
}