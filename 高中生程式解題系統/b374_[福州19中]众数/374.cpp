
#include <iostream>
using namespace std;

int main(){
  int n,num[10000],result[1000][2];
  while(cin>>n){
    int i,j;
    for(i=0;i<n;i++){
      scanf("%d",&num[i]);
    };

    for(i=0;i<(n-1);i++){     //sort
      for(j=0;j<(n-i-1);j++){
        if(num[j]>num[j+1]){
          swap(num[j],num[j+1]); //change value
        };
      };
    };

    int reapt_NUM=0; //set up 0
    for(i=0;i<n;i++){
      if(num[i]==num[i+1]){
        result[reapt_NUM][0]=num[i]; //num
        result[reapt_NUM][1]++;     //cout
      }else{
        reapt_NUM++;
      };
    }
    for(int i=0;i<n;i++){
      printf("%d",num[i]);
    };
  };

};

int swap(int a,int b)
{
  int tmp;
  tmp=a;
  a=b;
  b=tmp;
  return a,b;
}
