#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],cnt=0;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n-1;i++)
    {
        if(a[n]!=a[i])
        cnt=cnt+a[n]-a[i];
    }
    cout<<cnt;
    return 0;
}