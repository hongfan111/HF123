#include<stdio.h>
void main( )

{ float  a, b, c, big ;
  printf("请输入变量a:\n");
  scanf("%f" , &a);
  printf("请输入变量b:\n");
  scanf("%f" , &b);
  printf("请输入变量c:\n");
  scanf("%f" , &c);
  big=a ;
  if (b>big) big=b;
  if (c>big) big=c;

  printf("最大数是: %.2f\n", big); 
      }
