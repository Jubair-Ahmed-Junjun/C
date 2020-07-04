#include<stdio.h>
main()
{
  int data;
  printf("enter value -1,1 or 0\n");
  scanf("%d",&data);
  switch(data)
  {
  case -1:
  printf("negative");
  break;
  case 0:
  printf("zero");
  break;
  case 1:
  printf("positive");
  break;
  default:
  printf("wrong value");
}
return 0;
}
