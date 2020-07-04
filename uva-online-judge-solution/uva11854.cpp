#include<stdio.h>
int main()
{
    long int a,b,c;
    while(scanf("%ld%ld%ld",&a,&b,&c)==3){
        if(a==0 || b==0 || c== 0)
            break;
        if(a<=0 && b<=0 && c<=0)
            printf("wrong\n");
            else if(a*a+b*b==c*c)
            printf("right\n");
            else if (a*a+c*c == b*b)
            printf("right\n");
            else if(c*c+b*b == a*a)
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}

















/*#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f;
    while(scanf("%lld%lld%lld",&a,&b,&c)==3){
        d=a*a;
        e=b*b;
        f=c*c;
        if(a!=0 || b!=0 || c!=0){
        if(f==e+d)
            printf("right\n");
        else if(d==e+f)
        printf("right\n");
        else if(e==d+f)
            printf("right\n");
        else
            printf("wrong");
}
}
return 0;
}*/





















