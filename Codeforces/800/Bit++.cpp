#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k=0,i;
    cin>>n;
    string str[150];
    for(i=1;i<=n;i++)
    {
        cin>>str[i];
    }
     for(i=1;i<=n;i++)
    {
        if(str[i]=="X++" || str[i]=="++X")
        k++;
        else
        k--;
    }
    cout<<k;
    return 0;
}