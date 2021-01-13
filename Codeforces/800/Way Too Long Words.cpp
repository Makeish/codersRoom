#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,k;
    cin>>n;
    while(n--)
    {
        char a[100];
        cin>>a;
        k=strlen(a);
        if(k<=10)
        {
            for(i=0;a[i]!='\0';i++)
            cout<<a[i];
            cout<<"\n";
        }
        else
        {
            cout<<a[0]<<k-2<<a[k-1]<<"\n";
        }
    }
    return 0;
}