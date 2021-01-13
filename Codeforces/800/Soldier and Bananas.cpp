#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int k,w;
    long long int r,s=0,i;
    cin>>k>>r>>w;
    for(i=1;i<=w;i++)
    {
        s+=i;
    }
    s=s*k;
    if(s>r)
    cout<<s-r;
    else
    cout<<"0";
    return 0;
}
    
    