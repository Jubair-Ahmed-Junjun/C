#include<stdio.h>
main()
{
  char grade='B';
  switch(grade)
  {
  case 'A':
  printf("excellent");
  break;
  case 'B':
  case 'C':
  printf("well done");
  case 'D':
  printf("you pass");
  break;
  case 'F':
  printf("better try again");
  break;
  default:
  printf("invalid grade");
}
printf("your grade is %c");
printf("\n\n");
return 0;
}
