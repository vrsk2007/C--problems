#include <stdio.h>

int main() {
    int M;
    scanf("%d",&M);
    int hours = M/60;
    int minutes = M%60;
    printf("%d Hours %d Minutes",hours,minutes);    
    return 0;
}