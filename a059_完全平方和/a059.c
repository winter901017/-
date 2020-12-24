#include <stdio.h>
int main(){
  int n=0;
while(scanf("%d",&n)!=EOF){
  int sum[100]={0};
  for(int i=0;i<n;i++){
    int start=0,end=0;
    scanf("%d",&start);
    scanf("%d",&end);
    for(int j=start;j<=end;j++){
      for(int x=0;x<j;x++){
        if(j==1){
          sum[i]+=j;
        };
        if((x*x)==j){
          sum[i]+=j;
        };
      };
    };
  };
  for(int i=1;i<=n;i++){
    printf("Case %d: %d\n",i,sum[i-1]);
  };
};
  return 0;
};
