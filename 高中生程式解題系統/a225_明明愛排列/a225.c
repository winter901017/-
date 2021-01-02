#include <stdio.h>

int main(){
  int n=0;
  while(scanf("%d",&n)!=EOF){
    int two[1000]={0};
    int one[1000]={0};

    for(int i=0;i<n;i++){
      scanf("%d",&two[i]);
      one[i]=two[i];
      while(one[i]>10){
        one[i]=one[i]%10;
      };
    };
    for(int i=n-1;i>=0;i--){
      for(int j=0;j<i;j++){
        if(one[j]>one[j+1]){
          int tmp=0;
          tmp=one[j];
          one[j]=one[j+1];
          one[j+1]=tmp;
          tmp=two[j];
          two[j]=two[j+1];
          two[j+1]=tmp;
        };
      };
    };

    for(int i=n-1;i>=0;i--){
      for(int j=0;j<i;j++){
        if(one[j]==one[j+1]){
          if(two[j]<two[j+1]){
            int tmp=0;
            tmp=two[j];
            two[j]=two[j+1];
            two[j+1]=tmp;
          };
        };
      };
    };

    for(int i=0;i<n;i++){
      printf("%d ",two[i]);
    };
      printf("\n");
  };
  return 0;
}
