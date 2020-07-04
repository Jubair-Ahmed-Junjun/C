#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  printf("enter the any letter:");
  scanf("%c",&ch);
  if(ch>='a'&&ch<='z')
  printf("capital");
  else if(ch>='a'&&ch<='z')
  printf("small");
  else
  printf("not a letter");
  return 0;
}
