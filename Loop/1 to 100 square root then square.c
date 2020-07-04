#include<stdio.h>
main()
{
  int i;
  printf("value\t square_root\t square\n");
  for(i=0;i<=100;i=i+10)
  {
    printf("%d\t %f\t %f\n",i,sqrt(i),(i*i));
  }
  return 0;
}
