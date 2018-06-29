#include<stdio.h>
int main()
{
  int a[3][3],sum=0;
  int i,j;
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
	{
      printf("第%d行第%d列的数据为：",i+1,j+1);
	  scanf("%3d",&a[i][j]);
	}
    for(i=0;i<3;i++)
	sum=sum+a[i][i];
	printf("对角线元素之和为%6d\n",sum);
}