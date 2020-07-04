#include<stdio.h>
main()
{
  char ch;
  ch=getchar();
  if(isalpha(ch)>1)
  {
   printf("your character is an alphabet\n");
  }
  else
  printf("your character is not a alphabet");
  return 0;
}
