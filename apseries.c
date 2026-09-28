#include <stdio.h>

int main() {
  int a,d,N;
  scanf("%d %d %d",&a,&d,&N);
  for(int i =1;i<=N;i++){
    printf("%d ",a+(i-1)*d);
  }

    return 0;
}