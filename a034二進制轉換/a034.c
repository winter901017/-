#include <stdio.h>

int main(){
  int input=0;
  while(scanf("%d",&input)!=EOF){
    do{
        if(input%2==0){
          printf("0");
        }else{
          printf("1");
        };
        input/=2;
    }while(input!=0);
  };
  return 0;
};
