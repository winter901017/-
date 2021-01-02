#include <stdio.h>

int main(){
  int start=0,end=0;
  while(scanf("%d%d",&start,&end)!=EOF){
    if(start>end){
      int tmp=0;
      tmp=start;
      start=end;
      end=tmp;
    };
    int flag=0;
    for(int i=start;i<=end;i++){
      int digits=0;
      int tmp=i;
      int count=0;
      do{
        tmp/=10;
        digits++;
      }while(tmp!=0);
      tmp=i;
      do{
        int add=1;
        for(int j=0;j<digits;j++){
          add*=(tmp%10);
        }
        count+=add;
        tmp/=10;
      }while(tmp!=0);
      if(i==count){
        printf("%d ",i);
        flag=1;
      };
    };
    if(flag==0)printf("none");
  };
  return 0;
};
