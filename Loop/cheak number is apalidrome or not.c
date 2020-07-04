#include<stdio.h>
main()
{
    int dummy,n,rev=0,x;
    printf("enter the value of a number\n");
    scanf("%d",&n);
    dummy=0;
    while(n>0)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    if(dummy==rev)
        printf("the given number is %d is a palindrome\n",rev);
    else
        printf("the given number is %d is not a palindrome\n",rev);
}
