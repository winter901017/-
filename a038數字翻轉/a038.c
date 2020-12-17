#include <stdio.h>

int mian(){

  int num=0;
  int count=0;
  while(scanf("%d",&num)!=EOF){
    do{
      num/=10;
      count++;
    }while(num!=0);
    printf("%d",count);
  };

  return 0;
};
