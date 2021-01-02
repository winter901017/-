#include <stdio.h>
#include <string.h>

int main (){
  int n=0;
  while(scanf("%d",&n)!=EOF){//輸入N
    char num[100]={0};
    for(int i=0;i<n;i++){ //輸入N個數字
      int sum=1; //乘法 起始數字要是1
      scanf("%s",num); //抓取一行字串
      int j=0;
      do{
        sum*=num[j]-48; //ascii 轉一般數字，乘上每個數字
        j++;
      }while(num[j]!='\0');//當偵測到最後一個字串的後面則跳出
      printf("%d\n",sum);// 輸出答案換行
    };

  };
  return 0;
}
