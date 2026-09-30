#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    if(N>=18){
        printf("Eligible to Vote for %d year(s)",N-18);
    }else{
         printf("Not Eligible, eligible after %d year(s)",18-N);
    }
    return 0;
}