#include<iostream>
using namespace std;
int main()
{
    int t,e1,e2,e3,cnt=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       cin>>e1>>e2>>e3;
       cout<<"Case"<<" "<<cnt++<<":"<<" ";
       if((e1>e2&&e1<e3)||(e1<e2&&e1>e3))
        {
            cout<<e1<<endl;
        }
        else if((e2>e1&&e2<e3)||(e2<e1&&e2>e3))
        {
            cout<<e2<<endl;
        }
        else
        {
            cout<<e3<<endl;
        }

    }
    return 0;
}
