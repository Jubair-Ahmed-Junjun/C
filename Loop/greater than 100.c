#include<stdio.h>
main()
{
  int i,number,counter=0;
  for(i=1;i<=5;i++)
  {
    printf("please enter the value of number");
    scanf("%d",&number);
    if(number>100)
    {
      counter=counter+1;
    }
  }
  printf("the value of number is greater than 100 is %d",counter);
  return 0;
}
