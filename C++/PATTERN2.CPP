#include <stdio.h>
#include<conio.h>
void main()
{
   int row, c, n;

   printf("Enter the number of rows in pyramid of stars you wish to see ");
   scanf("%d",&n);

   for ( row = 1 ; row <= n ; row++ )
   {

      for ( c = 1 ; c <=row ; c++ )
      {
	 printf("*");
	 c++;
       }
      printf("\n");
   }

   getch();
}
