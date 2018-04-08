		 #include<stdio.h>
		 #include<conio.h>
		 int sqr(int);
		 void main()
		 {
		 int f,n;
		 clrscr();
		 printf("enter theof n");
		 scanf("%d",&n);
		 f=sqr(n);
		 printf("the square of the number is%d",f);
		 getch();
		 }
		 int sqr(int a)
		 {
		 int c;
		 if(a>0)
		 c=a*a;
		 return(c);
		 }


