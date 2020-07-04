#include<stdio.h>
main()
{
   int num;
   printf("enter the value num");
   scanf("%d",&num);
   switch(num)
   {
     case 1:
     printf("you have entered value 1\n");
     break;
     case 2:
     printf("you have entered value 2\n");
     break;
     case 3:
     printf("you have entered value 3\n");
     break;
     default:
     printf("input value is other 1,2,3");
     return 0;
   }
}
