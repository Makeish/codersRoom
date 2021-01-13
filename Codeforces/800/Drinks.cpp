#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    double x=0;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        x=x+(double)a[i]/100;
    }
    cout<<fixed<<setprecision(12)<<(double)x/n*100;
    return 0;
    
}