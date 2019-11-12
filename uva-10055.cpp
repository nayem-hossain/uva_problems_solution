#include<iostream>
using namespace std;
int main()
{
  long long int a1,a2;
   while(cin>>a1>>a2)
   {
       if(a1>a2)
       {
           cout<<a1-a2<<endl;
       }
       else
        cout<<a2-a1<<endl;
   }
   return 0;
}
