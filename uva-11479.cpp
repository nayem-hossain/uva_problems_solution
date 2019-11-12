#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int T,a,b,c,count=1;
    cin>>T;
    while(T--)
    {
        cin>>a >>b >>c ;
        printf("Case %d: ",count++);

        if(((a+b)<=c)||((a+c)<=b)||((b+c)<=a))
        {
            printf("Invalid\n");
        }

        else if((a==b)&&(b==c)&&(c==a))
        {
            printf("Equilateral\n");
        }
        else if((a==b)||(a==c)||(b==a))
        {
            printf("Isosceles\n");
        }
        else
        {
            printf("Scalene\n");
        }

    }
    return 0;
}
