#include <stdio.h>
int main()
{int a,b,c;
printf("请输入变量a：\n");
scanf("%d",&a);
printf("请输入变量b：\n");
scanf("%d",&b);
c=b;
b=a;
a=c;
printf("交换后：");
printf("a=%d\n",a);
printf("b=%d\n",b);
}