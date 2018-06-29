#include <stdio.h>
int main()
{
	int a,n,i=1,sn=0,tn=0;
	printf("数字a为：");
	scanf("%d",&a);
	printf("a的位数n为：");
    scanf("%d",&n);
	while (i<=n)
	{
		tn=tn+a;
		sn=sn+a;
		a=a*10;
		++i;
	}
	printf("a+aa+aaa+...=%d\n",sn);
	return 0;
}


