#include<stdio.h>
#include<conio.h>
void main()
{
  int year;
  printf("please enter year");
  scanf("%d",year);
  if("year%==0")
  printf("leap year");
  else if(year%4==0&&year%100!=0)
  printf("leap year");
  else
  printf("not leap year");
  return 0;
}
