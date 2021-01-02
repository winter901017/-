#include <stdio.h>

int main(){
    int n=0;
    while((scanf("%d",&n))!=EOF){
      int num[1001]={0};
      for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
      };
      for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(num[j]>num[j+1]){
              int tmp=0;
              tmp=num[j+1];
              num[j+1]=num[j];
              num[j]=tmp;
            };
        };
      };
      for(int i=0;i<n;i++){
        printf("%d ",num[i]);
      };
      printf("\n");
    };
    return 0;
};
