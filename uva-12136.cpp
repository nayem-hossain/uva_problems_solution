#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int N;
    int s1, e1,s2, e2;
    int h1,m1,h2,m2,h_1,m_1,h_2,m_2;
    int count=1;

    cin>>N;

    while(N--)
    {

       scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
        s1=h1*60+m1;
        e1=h2*60+m2;

        scanf("%d:%d %d:%d",&h_1,&m_1,&h_2,&m_2);
         s2=h_1*60+m_1;
         e2=h_2*60+m_2;

        printf("Case %d: ",count++);

        if(  (e2<s1)||(e1<s2)  )
            {
                cout<< "Hits Meeting\n";
            }
        else
            cout<<"Mrs Meeting\n";
    }

}
