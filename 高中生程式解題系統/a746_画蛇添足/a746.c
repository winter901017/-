#include <stdio.h>
/*
楚有祠者，赐其舍人巵酒。舍人相谓曰：“数人饮之不足，一人饮之有馀，请画地为蛇，先成者饮酒。”一人蛇先成，引酒且饮之，乃左手持巵，右手画蛇曰：“吾能为之足。”未成，一人之蛇成，夺其巵曰：“蛇固无足，子安能为之足？”遂饮其酒。为蛇足者，终亡其酒。

话说那位先画出了蛇却没喝到酒的人，想一雪前耻！所以他找到了天才的你，请你帮他编个程式打败其他人。

他给你一块用围栏围起的，边长为n的正方形地（已经分为n*n个边长为1的小正方形），如下图所示：

地上按顺序已经画了m个点（在地（x,y）上），请你编个程式，将这些点依次连起来。

不过，这回他会不会再画蛇添足，就由不得我们了= =|||。
*/
int main(){
  int out_print[510][510]={};
  int square_long,data_num;
  for(;scanf("%d %d",&square_long,&data_num) == 2;){
    int draw_x1,draw_y1;
    scanf("%d %d",&draw_x1,&draw_y1);
    int i;
    for(i=1;i<data_num;i++){
      int draw_x2,draw_y2;
      scanf("%d %d",&draw_x2,&draw_y2);
      while( (draw_x1 != draw_x2) ||(draw_y1 != draw_y2)){
        out_print[draw_y1][draw_x1]=1;
        if(draw_x1<draw_x2)draw_x1++;
        if(draw_y1<draw_y2)draw_y1++;
        if(draw_x1>draw_x2)draw_x1--;
        if(draw_y1>draw_y2)draw_y1--;
      };
        out_print[draw_y1][draw_x1]=1;
    };

    for(i=0;i<=square_long+1;i++){
      printf("-");
    };
    int j;
    printf("\n");
    for(j=1;j<=square_long;j++){
      printf("|");
      for(i=1;i<=square_long;i++){
        if(out_print[i][j]==1){
          printf("*");
        }else{
          printf(" ");
        };
      };
        printf("|\n");
    };
      for(i=0;i<=square_long+1;i++){
      printf("-");
    };
      printf("\n");
  };

return 0;
};
