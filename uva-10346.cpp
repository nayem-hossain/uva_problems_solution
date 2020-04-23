#include<iostream>
using namespace std;
int main()
{
    int n,k,maxCIGARETTES;
    while(cin>>n>>k)
    {
        maxCIGARETTES=n;
        while(n>=k)
        {
            int newCIGARETTES,remainder;
            newCIGARETTES=n/k;
            remainder=n%k;
            maxCIGARETTES=maxCIGARETTES+newCIGARETTES;
            n=newCIGARETTES+remainder;
        }

       cout<<maxCIGARETTES<<endl;
    }
    return 0;
}
