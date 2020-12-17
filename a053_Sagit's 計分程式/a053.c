#include <stdio.h>

int main(){
  int num=0;
  while(scanf("%d",&num)!=EOF){
    int tmp=num;
    int score=0;
    if(num>40){
      score=100;
    }else if(num>20){
      score=(tmp-20)*1;
      score+=80;
    }else if(num>10){
      score=(tmp-10)*2;
      score+=60;
    }else if(num>0){
      score=tmp*6;
    };
    printf("%d\n",score);
  };
  return 0;
};
