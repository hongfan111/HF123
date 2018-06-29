#include <stdio.h>
int main ()
{
	int i,j,k,l;
	printf("水仙花数是：");
	for (l=100;l<1000;l++)
	{
		i=l/100;
		j=l/10-i*10;
		k=l%10;
		if (l==i*i*i+j*j*j+k*k*k)
			printf("%d ",l);
	}
	printf("\n");
	return 0;
}