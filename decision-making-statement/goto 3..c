#include<stdio.h>
main()
{
  int totalmarks;
  printf("\n enter your subject marks\n");
  scanf("%d",&totalmarks);
  if(totalmarks>=50)
  {
      goto pass;
  }
  pass:
      printf("\n congretulation");
      fail:
          printf("better luck next time");
          return 0;
}

