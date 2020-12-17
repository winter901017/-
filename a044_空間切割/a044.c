#include <stdio.h>

int main(){
  int n=0;
  while(scanf("%d",&n)!=EOF){
    n=(n*n*n+5*n+6)/6;
    printf("%d\n",n);
  };
  return 0;
};
