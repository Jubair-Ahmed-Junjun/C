#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n1,n2,n,m;
    while(scanf("%lld %lld", &n, &m) != EOF){
            n1 = 1;
            n2 = 1;
        for(int i = n;i>0;--i){
            n1*= n;
            n--;
        }
        for(int i = m;i>0;--i){
            n2*=m;
            m--;
        }
        printf("%lld\n",n1+n2);
    }
    return 0;
}

