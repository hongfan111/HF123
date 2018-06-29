#include<stdio.h>
int main()
{
 int a[11]={10,20,30,40,50,60,70,80,90,100};
 int temp1,temp2,insert,end,i,j;
 printf("原有数据:\n");
 for(i=0;i<10;i++)
 printf("%d  ",a[i]);
 printf("\n");
 printf("插入数据:\n");
 scanf("%d",&insert);
 end=a[9];
 if(insert>end)
	 a[10]=insert;
 else
 {
  for(i=0;i<10;i++)
  {
   if(a[i]>insert)
   {
	 temp1=a[i];
     a[i]=insert;
     for(j=i+1;j<11;j++)
	 {
	  temp2=a[j];
      a[j]=temp1;
      temp1=temp2;
	 }
     break;
   }
  }
 }
 printf("重新排序后数据:\n");
 for(i=0;i<11;i++)
 printf("%d  ",a[i]);
 printf("\n");
}


