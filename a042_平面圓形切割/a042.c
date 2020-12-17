#include <stdio.h>

int main(){
  int n=0;
  while(scanf("%d",&n)){
    n=2*n+n-1;
    printf("%d",n);
  };
  return 0;
};
