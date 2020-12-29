#include <stdio.h>
#include <math.h>
int main(){
  int num1=0,num2=0;
  while(scanf("%d%d",&num1,&num2)!=EOF){
    int count=0;
    if(num1>num2){
      int tmp=num1;
      num1=num2;
      num2=tmp;
    };
    for(int i=num1;i<=num2;i++){
      int flag=0;
      if(i%2==0){
        
      }else{
        for(int j=2;j<sqrt(i);j++){
          if(i%j==0){
            flag=1;
            };
            continue;
        };
      };
      if(flag==0){
        count++;
      }else{
        flag=0;
      };
    };

    printf("%d\n",count);
  };
  return 0;
}
