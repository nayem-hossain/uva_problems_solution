#include<iostream>
using namespace std;
int main()
{
    int a,b,c,asquare,bsquare,csquare;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)
        {
            break;
        }
        asquare=a*a;
        bsquare=b*b;
        csquare=c*c;
        if(asquare+bsquare==csquare||asquare+csquare==bsquare||bsquare+csquare==asquare)
        {
            cout<<"right"<<endl;
        }
        else
            cout<<"wrong"<<endl;

    }

    return 0;

}
