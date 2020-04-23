#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int have,n,k;
    while(cin>>n>>k)
    {
        have=n;
        while(n>=k)
        {
            have= have+n/k;
            n=(n/k)+(n%k);
        }
        printf("%d\n",have);
    }
    return 0;
}
