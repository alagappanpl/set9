#include<stdio.h>
#include<math.h>
int main()
{
int a,n,k;
printf("\nEnter a Number : ");
scanf("%d",&n);
printf("\nEnter its power : ");
scanf("%d",&k);
a=pow(n,k);
printf("\n%d",a);
return 0;
}
