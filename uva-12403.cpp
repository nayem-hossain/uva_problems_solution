#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main()
{
    int T,K,check;
    long long int total_money=0;
    char d[20];

    cin>>T;

    for(int i=1; i<=T; i++)
    {
        cin>>d;

        check=strcmp(d,"donate");

        if(check==0)
        {
          cin>>K;
          total_money=total_money+K;
        }
        else
           cout<<total_money<<endl;

    }
 return 0;
}
