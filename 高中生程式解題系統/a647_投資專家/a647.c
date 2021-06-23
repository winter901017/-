#include <stdio.h>

int main(){
  int n=0;
  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++){
    int m,p;//m是投資金額 p是目前價值
    scanf("%d %d",&m,&p);
    float ans=0;
    ans=((float)p-(float)m)/(float)m;//要計算兩數的差距然後 除與投資的價格可以得知盈虧
    ans*=100; //趴數換算顯示的樣子
    if(ans>0){
    ans+=0.00001;
    }else if(ans<0){
    ans-=0.00001;
    };
    printf("%.2f%%",ans);
    if(ans>=10.00||ans<-7.00){
      printf(" dispose");
    }else{
      printf(" keep");
    };
      printf("\n");
  }
  return 0;
};
