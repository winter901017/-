#include <stdio.h>

int main(){

  char n;
  char data[99]={0};
  int output[99]={0};
  int count=0;
  int ans=0;
  while((n=getchar())!=EOF){
    data[count]=n;
    count++;
    if(count==10){
      ans=0;
      int tmp1=0,tmp2=0;
      output[0]=data[0]-55;
      if((output[0]>=19)&&(output[0]<=23)){
        output[0]-=1;
      }
      else if((output[0]>=25)&&(output[0]<=31)){
        output[0]-=2;
      }else if(output[0]==18){
        output[0]=34;
      }else if(output[0]==24){
        output[0]=35;
      }else if(output[0]==33){
        output[0]=30;
      }else if(output[0]==34){
        output[0]=31;
      }else if(output[0]==35){
        output[0]=33;
      };

      for(int i=1;i<10;i++){
        output[i]=data[i]- 48;
      };
      tmp1=output[0]%10; //個位
      tmp2=output[0]/10; //十位
      output[0]= tmp1*9+tmp2;
      ans+=output[0];
      ans+=output[9];
      int xxy=1;
      for(int i=8;i>0;i--){
        output[xxy]*=i;
        ans+=output[xxy];
        xxy++;
      };
      if(ans%10==0){
        printf("real\n");
        //printf("%d\n",ans);
      }else{
        printf("fake\n");
        //printf("%d\n",ans);
      };
      count=0;


/*
      for(int i=0;i<10;i++){
        printf("%d ",data[i] );
      };
        printf("\n");
      for(int i=0;i<10;i++){
        printf("%d ",output[i] );
      };
      printf("\n");
        printf("%d",ans);
      printf("\n");
      */
      getchar();
    };
  };
/*
  for(int i=0;i<10;i++){
    printf("%d ",data[i] );
  };
    printf("\n");
  for(int i=0;i<10;i++){
    printf("%d ",output[i] );
  };
  */
  //printf("%d",ans);
  return 0;
};
