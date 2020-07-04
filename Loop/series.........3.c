#include<stdio.h>
main()
{
  int i,n,sum=0;
  printf("enter the value of n\n");
  scanf("%d",&n);
  while(i<=n)
  {
    sum=sum+i;
    i=i+1;
  }
  printf("total of series of %d",sum);
  rturn 0;

}
