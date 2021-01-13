#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    char a[1000];
    cin>>a;
    if(islower(a[0]))
    {
        a[0]=toupper(a[0]);
        cout<<a;
    }else
    cout<<a;
    return 0;
}    