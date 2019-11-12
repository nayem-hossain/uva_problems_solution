#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,k,extra=0,tax;
    double totaltax;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>k;
        if(k<=180000)
        {
            cout<<"Case "<<i<<": "<< extra<<endl;
            continue;
        }
        else if(k<=480000)
            totaltax=(k-180000)*0.1;

        else if(k<=880000)
            totaltax=(k-480000)*0.15+30000.0;

        else if(k<=1180000)
            totaltax=(k-880000)*0.20+90000.0;

        else
            totaltax=(k-1180000)*0.25+150000.0;

        if(totaltax<2000)
            totaltax=2000;

        tax=ceil(totaltax);

        cout<<"Case "<<i<<": "<<tax<<endl;
    }
    return 0;
}
