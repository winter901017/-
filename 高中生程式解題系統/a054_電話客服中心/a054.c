#include <stdio.h>
#include <string.h>
int main(){
  char data[99]={0};
  while(scanf("%s",&data)!=EOF){
    int cal[99]={0};
    char output[99]={0};
    int sum=0;
    int mul=8;
    for(int i=0;i<8;i++){
      cal[i]=data[i]-48;
      cal[i]*=mul;
      sum+=cal[i];
      mul--;
      //printf("%d ",cal[i]);
    };
    cal[8]=data[8]-48;
    int op_ct=0;//output_count
    for(int i=10;i<36;i++){
      int chechsum=0;
      int tmp1=0,tmp2=0,sum_tmp=sum;
      tmp1=i/10;
      tmp2=i%10;
      sum_tmp=sum_tmp+(tmp1+tmp2*9);
      chechsum=10-(sum_tmp%10);
      if(chechsum==10)chechsum=0;
      if(chechsum==cal[8]){
        //printf(" %d",i);
        output[op_ct]=i;
        op_ct++;
        //output[op_ct]='\0';
      };
    };
    //printf(" %d",sum);
    for(int i=0;i<op_ct;i++){
      if((output[i]>9)&&(output[i]<18)){
        output[i]+=55;
      }else if(output[i]==34){
        output[i]=18+55;
      }else if((output[i]>17)&&(output[i]<23)){
        output[i]+=56;
      }else if((output[i]>22)&&(output[i]<30)){
        output[i]+=57;
      }else if(output[i]==32){
        output[i]=32+55;
      }else if(output[i]==30){
        output[i]=33+55;
      }else if(output[i]==31){
        output[i]=34+55;
      }else if(output[i]==33){
        output[i]=35+55;
      }else if(output[i]==35){
        output[i]=24+55;
      };
    };
    for(int j=op_ct;j>0;j--){
      for(int i=0;i<op_ct-1;i++){
        if(output[i]>output[i+1]){
          char tmp;
          tmp=output[i];
          output[i]=output[i+1];
          output[i+1]=tmp;
          //strcpy(tmp,output[i]);
        };
      };
    };
    for(int i=0;i<op_ct;i++){
      printf("%c",output[i]);
    };
    printf("\n");
  };
  return 0;
};
