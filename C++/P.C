#include<stdio.h>
#include<conio.h>
void main()
{
int intr,c,sp,num,r;
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
}

