#include <stdio.h>

int main(){
  for(int num;scanf("%d",&num)!=EOF;){
    if(num<0){
    printf("%d",0- num );
    }else{
    printf("%d",num);
    };
  };
  return 0;
};
