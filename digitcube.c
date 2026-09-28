#include <stdio.h>

int main() {
   int N;
   if(scanf("%d",&N)!=1)return 0;

   if(N==0){
    printf("Yes");
    return 0; 
   }
   int  temp = N;
   int sum = 0;

   while(temp>0){
   int d = temp%10;
   int term = d*d*d;
   sum+=term;
   temp/=10;
   }

   if(sum==N){
    printf("Yes");
   }else{
    printf("No");
   }
    return 0;
}