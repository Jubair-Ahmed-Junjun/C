#include<stdio.h>
main()
{
  char choice;
  switch(choice)
  {
  case 'S:
  check_spelling();
  break;
  case 'C:
  correct_errors();
  break;
  case 'D:
  display_errors();
  break;
  default:
  printf("not a valid option");
}
return 0;
}
