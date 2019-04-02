#include<stdio.h>
main()
{
 int i,c=0,b=1,a=0,n;
 printf("enter a number");
 scanf("%d",&n);
 printf("fibbnacci series");
 for(i=1;i<=n;i++)
 {
	printf("%d",c);
  	c=a+b;
	b=a;
	a=c;
 }
}
