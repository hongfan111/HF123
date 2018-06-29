#include <stdio.h>
int main()
{
	int num,indiv,ten,hundred,thousand,ten_thousand,place;
	printf("请输入一个整数（0-99999）：");
	scanf("%d",&num);
	if(num>9999)
		place = 5;
	else if(num>999)
		place = 4;
	else if(num>99)
		place = 3;
	else if(num>9)
		place = 2;
	else place =1;
	printf("位数：%d\n",place);
	printf("每一位数字为：");
	ten_thousand=num/10000;
	thousand=(int)(num-ten_thousand*10000)/1000;
	hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
	ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
	indiv=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
	switch(place)
	{case 5:printf("%d,%d,%d,%d,%d\n",ten_thousand,thousand,hundred,ten,indiv);
	        printf("反序数字为：");
			printf("%d,%d,%d,%d,%d\n",indiv,ten,hundred,thousand,ten_thousand);
			break;
	 case 4:printf("%d,%d,%d,%d\n",thousand,hundred,ten,indiv);
	        printf("反序数字为：");
			printf("%d,%d,%d,%d\n",indiv,ten,hundred,thousand);
			break;
     case 3:printf("%d,%d,%d\n",hundred,ten,indiv);
	        printf("反序数字为：");
			printf("%d,%d,%d\n",indiv,ten,hundred);
			break;
   	 case 2:printf("%d,%d\n",ten,indiv);
	        printf("反序数字为：");
			printf("%d,%d\n",indiv,ten);
			break;
	 case 1:printf("%d\n",indiv);
	        printf("反序数字为：");
			printf("%d\n",indiv);
			break;
	}
return 0;
}