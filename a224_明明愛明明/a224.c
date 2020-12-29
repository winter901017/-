#include <stdio.h>
#include <string.h>
int main (){
  char str_str[1000]={0};
  while(gets(str_str)!=NULL){
    int  str[1000]={0};
    int count=0,str_count=0;
    int flag=0;
    str_count=strlen(str_str);
    for(int i=0;i<str_count;i++){
      if((str_str[i]>='a')&&(str_str[i]<='z')){
          str[count]=str_str[i]-'a';
          count++;
      }else if((str_str[i]>='A')&&(str_str[i]<='Z')){
        str[count]=str_str[i]-'A';
        count++;
      };
    };
    for(int i=0;i<count;i++){
      int j=count-1-i;
      if(str[i]!=str[j])flag=1;
    };
    if(flag==1){
      printf("no...\n");
    }else{
      printf("yes !\n");
    };
  }
  return 0;
}
