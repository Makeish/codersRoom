#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,a[50],cnt=0,i;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=1;i<=n;i++)
    {
        if(a[i]>=a[k] && a[i]>0)
        cnt++;
    }
    cout<<cnt;
    return 0;
}