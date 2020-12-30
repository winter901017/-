#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char str[99]={0};
    char n;
    int count=0;
    while(gets(str)!=NULL){ //判斷是否為EOF
    count=strlen(str);      //string 判斷如果是abc則會算出3
    for(int i=0;i<count-1;i++){ //如果有5個字母要比較4次
      printf("%d",abs(str[i]-str[i+1]));//從1開始到5,比較i與i+1相差多少
    };
    printf("\n"); //換行
  };
  return 0;
}
