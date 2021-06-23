#include <iostream>
using namespace std;

int main(){

  int num;
  cin >> num;
  int i;
  for(i=0;i<num;i++){
    int col,row;//行列
    cin >> col>>row;
    int table[col*row];
    int count1=0;
    int j,f;

    for(j=0;j<col;j++){
      for(f=0;f<row;f++){
        int tmp;
        cin>>tmp;
        table[count1]=tmp;
        count1++;
      };
    };

    int count2,flag=1;
    f=col*row-1;
    for(j=0;j<col*row;j++){
      if(table[j] != table[f] )flag=0;
      f--;
    };

    if(flag==0){
      cout<< "keep defending" <<endl;
    }else{
      cout<< "go forward" <<endl;
    };
  };
  return 0;
};
