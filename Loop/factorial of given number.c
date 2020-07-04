#include<stdio.h>
main()
{
    int number,factorial=1,i;
    printf("enter a number  for knowing its factorial\n");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    printf("%d=%d\n",number,factorial);
}
