#include <stdio.h>
int main()
{
  int letter=0,digit=0,others=0;
  char c;
  printf("ÇëÊäÈë×Ö·û´®:\n");
  while((c=getchar())!='?'){
  if(c>='1'&&c<='9')
       digit++;
   else if((c>='a'&&c<='z')||c>='A'&&c<='Z')
       letter++;
   else others++;
  }
  printf("The number of letters is:%d\n",letter);
  printf("The number of digits is:%d\n",digit);
  printf("The number of other words is:%d\n",others);
return 0;
}
