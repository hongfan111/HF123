#include<stdio.h>
int main()
{
  int a[5],i,temp;
      printf("请输入五个数字:\n");
  for(i=0;i<5;i++)
	  scanf("%d",&a[i]);
      printf("原有顺序：\n");
  for(i=0;i<5;i++)
	  printf("%d  ",a[i]);
  for(i=0;i<5/2;i++)
  {
    temp=a[i];
    a[i]=a[5-i-1];
    a[5-i-1]=temp;
  }
      printf("\n调换后顺序：\n");
  for(i=0;i<5;i++)
      printf("%d  ",a[i]);
     
}




  