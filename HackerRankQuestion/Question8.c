#include <stdio.h>
#include <stdlib.h>

int main() {
    char deneme[20];
    scanf("%s", &deneme);
    for (int i = 0; i < 20; i++)
    {
        if (deneme[i] == ':')
        {
            char minutes[] = {"44"};
            // if (deneme[(i-2)])
            // {
                
            // }
            printf("iki nokta geldi %d", (atoi(minutes)));
            break;
        }
    }
    



    return 0;
}