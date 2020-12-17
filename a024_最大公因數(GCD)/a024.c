#include <stdio.h>
int main(){
  int a=0,b=0;
  int value=0;
  while(scanf("%d%d",&a,&b)!=EOF){
    do{
      if(a<b){
        int tmp;
        tmp=a;
        a=b;
        b=tmp;
      };
      if(a%b==0){
        value=b;
      };
      a=a%b;
    }while((a!=0)&&(b!=0));
    printf("%d\n",value);
  };
  return 0;
};
