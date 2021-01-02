#include <stdio.h>

int main(){

    int n=0;
  while(scanf("%d",&n)!=EOF){
    long long unsigned num1=0,num2=0;
    for(int i=0;i<=n;i++){
      num1=num1+i;
      num2=num1+num2;
    };
    printf("%lu ",num1);
    printf("%lu\n",num2);
  };
  return 0;
};
