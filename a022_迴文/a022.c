#include <stdio.h>
#include <string.h>
int main(){
  char data[999]={0};
  char n;
  int count=0;
  while(scanf("%s",&data)!=EOF){
    count=strlen(data);
    int flag=0;
    int mix=0,mid=(count/2)-1,max=count-1;
    do{
      if((data[mix])!=(data[max])){
        flag=1;
      };
      max--;
      mix++;
    }while(max>mix);
    if(flag==1){
      printf("no\n");
    }else{
      printf("yes\n");
    };
  };
  return 0;
};
