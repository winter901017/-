#include <stdio.h>

int main(){
  int num[99]={0};
  while(scanf("%d%d%d%d",&num[0],&num[1],&num[2],&num[3]) !=EOF){
    int count=0;
    scanf("%d",&count);
    for(int i=0;i<count;i++){
      int test[4]={0},a=0,b=0;
      scanf("%d%d%d%d",&test[0],&test[1],&test[2],&test[3]);
      int flag3[10]={0};
      for(int j=0;j<4;j++){
        int flag1=0,flag2=0;
        for(int x=0;x<4;x++){
          if(num[j]==test[x]&&j==x){
            flag1=1;
            flag3[j]=1;
            test[x]=99;
            break;
          };
          if(num[j]==test[x]&&j!=x){
            flag2=1;
          };
        };
        if(flag1==1){
          a++;
          flag2=0;
        };
        if(flag2==1&&flag3[j]!=1&&flag1!=1){
          b++;
        };
        flag1=0;
        flag2=0;
      };

      printf("%dA%dB\n",a,b);
    };
  };
  return 0;
};
