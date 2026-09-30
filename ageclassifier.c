#include <stdio.h>

int main() {
    int Age;
    scanf("%d",&Age);
    if(Age>=0 && Age<=12){
        printf("Child");
    } else if(Age>=13&&Age<=19){
        printf("Teen");
    } else if(Age>=20 && Age<=59){
        printf("Adult");
    } else if(Age>=60){
        printf("Senior Citizen");
    }
    return 0;
}