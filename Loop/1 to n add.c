#include<stdio.h>
main()
{
    int i,n,sum=0;
    printf("please enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the total sum is %d",sum);
    return 0;
}
