#include <stdio.h>
int main()
 {
	float x ; 
	printf ("请按输入你的成绩:\n");
    scanf ("%f", &x ) ;
      if  ( x >= 90 ) 
		  printf ("A\n") ;
      else if ( x>= 80 ) 
		  printf ("B\n") ;
      else if ( x>= 70 ) 
		  printf ("C\n") ;
      else if ( x>= 60 ) 
		  printf ("D\n") ; 
      else 
		  printf ("不及格\n" ) ;
	return 0;
}
