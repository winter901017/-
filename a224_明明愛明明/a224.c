#include <stdio.h>
#include <string.h>
int main (){
  int  str[1000]={0};
  char n;
  int count=0;
  int flag=0;


    if((n>='a')&&(n<='z')){
        str[count]=n-'a';
        count++;
    }else if((n>='A')&&(n<='Z')){
      str[count]=n-'A';
      count++;
    };

  for(int i=0;i<count;i++){
    int j=count-1-i;
    if(str[i]!=str[j])flag=1;
  };
  if(flag==1){
    printf("no...");
  }else{
    printf("yes !");
  };
  return 0;
}
