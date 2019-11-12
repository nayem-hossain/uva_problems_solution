#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    double c,d;
    float C;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>c>>d;
        C=c+(5*d/9);
        cout<<"Case "<<i<<": "<<showpoint<<fixed<<setprecision(2)<<C<<endl;
    }
    return 0;
}
