#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char str[99]={0};
    char n;
    int ans[99]={0};
    int count=0;
    while(gets(str)!=NULL){
    count=strlen(str);
    for(int i=0;i<count-1;i++){
      printf("%d",abs(str[i]-str[i+1]));
    };
    printf("\n");
  };
  return 0;
}
