#include <stdio.h>

int main(){
  int num1=0,num2=0;
  while(scanf("%d%d",&num1,&num2)!=EOF){//輸入兩個數

      int sum=0;
      for(int i=num1;i<=10000000;i++){//10000000
        sum+=i;
        if(sum>num2){
          printf("%d\n",i-num1+1);
          break;
        };
      };
  };

  return 0;
};
