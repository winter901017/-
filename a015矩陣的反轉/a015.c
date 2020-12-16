#include <stdio.h>

int main(){
  int col=0,row=0;
  int data[100][100]={0};
  while(scanf("%d%d",&col,&row)!=EOF){
    for(int i=0;i<col;i++){
      for(int j=0;j<row;j++){
        int input=0;
        scanf("%d",&input);
        data[i][j]=input;
      };
    };
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        printf("%d ",data[j][i]);
      };
      printf("\n");
    };
  };
  return 0;
};
