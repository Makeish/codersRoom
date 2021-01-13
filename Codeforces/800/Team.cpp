#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,p[1000],q[1000],r[1000];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>p[i]>>q[i]>>r[i];
        int d=0;
    for(i=1;i<=n;i++)
    {
        int cnt=0;
        if(p[i]==1)
        cnt++;
        if(q[i]==1)
        cnt++;
        if(r[i]==1)
        cnt++;
        if(cnt>=2)
        d++;
    }
    cout<<d;
    return 0;
}