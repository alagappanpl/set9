#include<stdio.h>
int main(void) 
{
  int n,sum=0,i;
  printf(" ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
      sum=sum+i;
  }
  printf("%d",sum);
  return 0;
}
