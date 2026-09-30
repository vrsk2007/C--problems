#include <stdio.h>

int main() {
   int N,T;
   if(scanf("%d %d",&N, &T)!=2)return 0;
   int pos = 1;
   int dir = 1;
   for(int i = 0; i<T;i++){
    if(pos==N){
        dir=-1;
    }else if(pos==1){
        dir = 1;
    }
    pos+=dir;
   }
   printf("%d",pos);
    return 0;
}