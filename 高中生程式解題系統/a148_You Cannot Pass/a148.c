#include <stdio.h>

int main(){
  int n=0;
  while(scanf("%d",&n)!=EOF){
      float sum=0;
    for(int i=0;i<n;i++){
      int tmp=0;
      scanf("%d",&tmp);
      sum+=tmp;
    };
    sum/=n;
    if(sum>59){
      printf("no\n");
    }else{
      printf("yes\n");
    };
  };


  return 0;
}
