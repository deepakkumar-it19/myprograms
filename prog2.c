
#include<stdio.h>
int  main()
{
 int i,fact=1,n;
 printf("enter a number for factorial:\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)

  fact=fact*i;

printf("the factorial of %d is %d",n,fact);
return 0;
}
