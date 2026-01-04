#include <stdlib.h>
#include <stdio.h>

struct Time
{
    int second;
    int minute;
    int hour;
};

void difference(struct Time t1, struct Time t2, struct Time *differ){
    if (t1.hour < t2.hour)
    {
        
    }
    
}

int main(){
    struct Time time, t1, t2, dfr;

    printf("Baslangic Zamani(saat, dakika, saniye): ");
    scanf("%d%d%d", &t1.hour, &t1.minute, &t1.second);

    printf("\nBitis Zamani(saat, dakika, saniye): ");
    scanf("%d%d%d", &t2.hour, &t2.minute, &t2.second);

    difference(t1, t2, &dfr);
    return 0;
}