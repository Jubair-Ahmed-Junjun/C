#include<stdio.h>
main()
{
  int a,b,c;
  printf("enter the value of 3 numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
  printf("%d\n",a);
  else if(b>a && b>c)
  printf("%d\n",b);
  else if(c>a && c>b)
  printf("%d\n",c);
  else
  printf("equal");
  return 0;

}
