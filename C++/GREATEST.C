#include<stdio.h>
#include<conio.h>
intmain()
{
 intr,c,sp,num;
 printf("Enter loop repeat number(rows): ");
 scanf("%d", &num);
 for(r=1; r<=num; r++)
 {
   for(sp=num; sp>=r; sp--)
      printf(" ");
   for(c=1; c<=r; c++)
      printf(" %d", c);
   printf("\n");
 }
 getch();
 return 0;
}

