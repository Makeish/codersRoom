#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int cnt1=0,cnt2=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]=='n')
        cnt1++;
        else if(a[i]=='z')
        cnt2++;
    }
    while(cnt1--)
    {
    printf("1 ");
    }
    while(cnt2--)
    {
    printf("0 ");
    }
    return 0;
}