#include <stdio.h>

int main(){
  int input=0;
  while(scanf("%d",&input)!=EOF){
    int covert[99];
    int countbit=0;
    do{
        if(input%2==0){
          covert[countbit]=0;
        }else{
          covert[countbit]=1;
        };
        input/=2;
        countbit++;
    }while(input!=0);
    for(int i=countbit-1;i>=0;i--){
      printf("%d",covert[i]);
    };
    for(int i=countbit-1;i>=0;i--){
    };
      printf("\n");
  };
  return 0;
};
