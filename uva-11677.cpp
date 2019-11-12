
#include<iostream>

using namespace std;
int main()
{
    int t,h1,m1,h2,m2,H,M,minutes;

    cin>>t;    //NOT UVA-ONLINE JUGDGE ACCEPTED BECAUSE OF TAKING THE INPUT t BY THIS FORMATE
              //BESICALLY HERE WE CAN NOT TAKE t  LIKE THIS.

    for(int i=1; i<=t; i++)
    {
        cin>>h1>>m1>>h2>>m2;
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        H=h2-h1;
        M=m2-m1;
        if(M<0)
        {
            M=M+60;
            H=H-1;
        }
        if(H<0)
            H=H+24;

            minutes=H*60+M;
        cout<< minutes<<endl;
    }
    return 0;
}
