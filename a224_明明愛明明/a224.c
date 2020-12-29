#include <stdio.h>
#include <string.h>
int main (){
  char str_str[1000]={0};    // 接收字元的陣列
  while(gets(str_str)!=NULL){ //當沒有字元時結束
    int  str[1000]={0};      // 轉成數值得陣列
    int count=0,str_count=0; //前面是計算變成識字後的字元,後面是計算加上符號的字元數
    int odd=0;               //計幾個基數
    str_count=strlen(str_str); //看總字串有多長
    for(int i=0;i<str_count;i++){  //去除符號 與 將 大A與小a轉換成一樣的數字
      if((str_str[i]>='a')&&(str_str[i]<='z')){ //只接收a~z
          str[count]=str_str[i]-'a';  //將ASCII換成一般的數字
          count++; //字元數量增加
      }else if((str_str[i]>='A')&&(str_str[i]<='Z')){//只接受A~Z
        str[count]=str_str[i]-'A';   //將ASCII 換成一般的數字
        count++; //字元數量增加
      };
    };
      for(int j=0;j<26;j++){ //有26個字母逐一比對
        int tmp=0;
        for(int i=0;i<count;i++){ //檢查陣列中字母有幾個
          if(str[i]==j)tmp++; //有的話就相加
        };
        if((tmp!=0)&&tmp%2==1){ //判斷字母是否是基數  但不包含沒有使用到的字母
          odd++; //是的話相加
        };
      };

    if(odd>1){ //如果要形成回文則基數數量的字母只能有1或是0
      printf("no...\n");
    }else{
      printf("yes !\n");
    };
  }
  return 0;
}
