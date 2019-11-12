#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int testcase,cont=0;
    double u,v,t,a,s;
    while(1)
    {
        cin>>testcase;
        cont=cont+1;
        if(testcase==0)
        {
            break;
        }
        else if(testcase==1)
        {
            cin>>u>>v>>t;

            s=((u+v)/2)*t;
            a=(v-u)/t;

            cout<<"Case "<<cont<<": "<<showpoint<<fixed<<setprecision(3)<<s<<" "<<a<<endl;
        }
        else if(testcase==2)
        {
            cin>>u>>v>>a;

            s=((v*v)-(u*u))/(2*a);
            t=(v-u)/a;

            cout<<"Case "<<cont<<": "<<showpoint<<fixed<<setprecision(3)<<s<<" "<<t<<endl;
        }
        else if(testcase==3)
        {
            cin>>u>>a>>s;

            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;

            cout<<"Case "<<cont<<": "<<showpoint<<fixed<<setprecision(3)<<v<<" "<<t<<endl;

        }
        else if(testcase==4)
        {
            cin>>v>>a>>s;

            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;

            cout<<"Case "<<cont<<": "<<showpoint<<fixed<<setprecision(3)<<u<<" "<<t<<endl;
        }

    }
    return 0;
}
