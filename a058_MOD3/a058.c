#include <stdio.h>

int main(){
  int n=0;
while(scanf("%d",&n)!=EOF){
  int output[4]={0};
  for(int i=0;i<n;i++){
    int tmp=0;
    scanf("%d",&tmp);
    if(tmp%3==0){
    output[0]++;
    };
    if(tmp%3==1){
    output[1]++;
    };
    if(tmp%3==2){
    output[2]++;
    };
  };
  for(int i=0;i<3;i++){
    printf("%d ", output[i]);
  };
  printf("\n");
};
  return 0;
};
