#include <stdio.h>
int main ()
{
	double h=100,h1=h/2;
    int n;
	for(n=2;n<=10;n++)
	{
		h=h+2*h1;
		h1=h1/2;
	}
	printf("第10次落地时共经过%f米\n",h);
	printf("第10次反弹%f米\n",h1);
	return 0;
}
