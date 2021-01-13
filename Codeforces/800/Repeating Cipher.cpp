#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    int j=0;
    for(int i=1;i<=n;i=i+j)
    {
        cout<<a[i];
        j++;
    }
    return 0;
}