#include <stdio.h>

int main(){
  int a,b,c,d,e,f;
  while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)){
    float m1=0,m2=0,m3=0;
    float x=0,y=0;
    m1=a*e-d*b;
    m2=c*e-f*b;
    m3=a*f-c*d;
    if(m1!=0){
      x=m2/m1;
      y=m3/m1;
      printf("x=%.2f\ny=%.2f\n",x,y);
    }else if(m1==0&&m2==0&&m3==0){
      printf("Too many\n");
    }else{
      printf("No answer\n");
    };
  };

  return 0;
};
