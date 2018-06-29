#include <stdio.h>
int main()
{
	int m,n,a,b,temp,p;
	printf("请输入第一个正整数m：");
	scanf("%d",&m);
	printf("请输入第二个正整数n：");
	scanf("%d",&n);
	if(m<n)
	{
		temp=m;
	    m=n;
	    n=temp;
	}
    p=m*n;
    while(n!=0)
	{
        a=m%n;
		m=n;
		n=a;
	}
	printf("它们的最大公约数为：%d\n",m);
    printf("它们的最小公倍数为：%d\n",p/m);
	return 0;
}