#include <stdio.h>
int main(void)
{
    int a,b,c;
    c=1;  
        for(a=1;a<=3;a++) //控制数叶层数   
        {
            for(b=1;b<=4-a;b++) //控制空格个数
                printf(" ");
            for(b=1;b<=2*a-1;b++) //控制第一棵树每层树叶个数
                printf("*");
            for(b=1;b<=(4-a)*2-1;b++)//控制两之间距离棵树
                printf(" ");
            for(b=1;b<=2*a-1;b++) //控制第二棵树每层树叶个数
                printf("*");
            printf("\n");
        }
  printf("  | |");      //第一棵树的树干
  printf("   | |\n");  //第二棵树的树干
  
  return 0;
}   
