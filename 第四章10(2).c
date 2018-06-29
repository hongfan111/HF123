#include <stdio.h>
int main()
{
  int x;
  double  z,y1,y2,y4,y6,y10;
  int  m;
  y1=100000*0.1;
  y2=y1+100000*0.075;
  y4=y2+200000*0.05;
  y6=y4+200000*0.03;
  y10=y6+400000*0.015;
  printf("请输入利润x:\n");
  scanf("%d",&x);
  m=x/100000;
  if (m>10)  m=10;
  switch(m)
  {  case 0:z=x*0.1;break;
     case 1:z=y1+(x-100000)*0.075;break;
     case 2:z=y2+(x-200000)*0.05;break;
     case 3:z=y2+(x-200000)*0.05;break;
     case 4:z=y4+(x-400000)*0.03;break;
     case 5:z=y4+(x-400000)*0.03;break;
     case 6:z=y6+(x-600000)*0.015;break;
     case 7:z=y6+(x-600000)*0.015;break;
     case 8:z=y6+(x-600000)*0.015;break;
     case 9:z=y6+(x-600000)*0.015;break;
     case 10:z=y10+(x-1000000)*0.01;
  }
   printf("奖金是: %0.f元\n",z);
   return 0;
 }
