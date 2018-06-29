#include <stdio.h>

int main()
{
  int x;
  double z,y1,y2,y4,y6,y10;
  y1=100000*0.1;
  y2=y1+100000*0.075;
  y4=y2+100000*0.05;
  y6=y4+100000*0.03;
  y10=y6+400000*0.015;
  printf("请输入利润x:\n");
  scanf("%d",&x);
  if (x<=100000)
     z=x*0.1;
  else if (x<=200000)
     z=y1+(x-100000)*0.075;
  else if (x<=400000)
     z=y2+(x-200000)*0.05;
  else if (x<=600000)
     z=y4+(x-400000)*0.03;
  else if (x<=1000000)
     z=y6+(x-600000)*0.015;
  else
     z=y10+(x-1000000)*0.01;
  printf("奖金是: %0.f元\n",z);
  return 0;
 }
