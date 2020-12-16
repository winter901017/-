#include <stdio.h>

int main(){

  char n;
  char data[99]={0};
  int count=0;
  while((n=getchar())!=EOF){
    data[count]=n;
    count++;
  };

  for(int i=0;i<10;i++){
    printf("%c",data[i] );
  };

  return 0;
};
