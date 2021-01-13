#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k=0,flag;
    string a;
    cin>>a;
    string b,c,d,e,f;
    cin>>b>>c>>d>>e>>f;
    string g=b+c+d+e+f;
    for(int i=0;g[i]!='\0';i++)
    k++;
    for(int i=0;a[i]!='\0';i++)
    {
        flag=0;
       for(int j=0;j<k;j++)
       {
           if(a[i]==g[j])
           {
               flag=1;
               break;
              
           }
       }
     if(flag==1)
       break;
    }
    if(flag==1)
    cout<<"YES";
    else
    cout<<"NO"; 
    return 0;
}