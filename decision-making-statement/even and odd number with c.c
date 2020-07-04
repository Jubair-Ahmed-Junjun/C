#include<stdio.h>
#include<conio.h>
void main()
{
  int number;
  printf("please enter the value of any number");
  scanf("%d",&number);
  if(number%2==0)
  printf("even");
  else
  printf("odd");
  return 0;
}
