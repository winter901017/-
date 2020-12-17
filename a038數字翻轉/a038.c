#include <stdio.h>
int main(){

  int num=0;
  while(scanf("%d",&num)!=EOF){
      int count=0;
      int zero=0;
      int jump=0;
      if(num==0){
        printf("0\n");
        jump=1;
      };
    do{
      if(jump==1)break;
      if(num%10!=0)zero=1;
      if((num!=0)&&(zero!=0)){
        printf("%d",num%10);
      };
      num/=10;
      if((num==0)&&(count==1))printf("0");
      if(num==0)printf("\n");
      count++;
    }while(num!=0);
    //printf("%d",count);
  };

  return 0;
};
