#include <stdio.h>

int main(){
    long long int n=0;
    while(scanf("%lld",&n)!=EOF){ //輸入十進制
      if(n==0)break;
      long long int b[1000]={0}; //放十轉二進制的數字
      int count=0;
      do{
        b[count]=n%2;  //取餘數 10轉2
        n/=2;
        count++;
      }while(n>0);
      int add=0; //計數進位次數
      count=0;
      do{
        if(count==0)b[count]+=1; //一開始的加一
        if(b[count]>1){ //如果需要進位
          b[count]=0;   //將數歸零
          b[count+1]+=1;//進位
          add++;        //進位次數+1
        }
        count++;        //位元向後移
      }while(b[count]==2); //當不用進位時則離開
      printf("%d\n",add);
    };
  return 0;
}
