#include<stdio.h>
void main( )
{ int z;
  printf("请输入一个三位正整数:\n");
  scanf("%d" , &z);
  printf("反向输出数为：%d%d%d\n", z%10, z/10%10, z/100);  
      }
