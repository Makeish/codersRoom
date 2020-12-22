#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string a ;
    cin >> a;
    int flag  = 0;
    for(int i = 0 ; i < a.length() - 6 ; i++)
    {
           if(i+1 < a.length() and i+2 < a.length() << i+3 < a.length() and i+4 < a.length() and i+5 < a.length() and i+6 < a.length())
           {
           if(a[i] == '1' and a[i+1] == '1' and a[i+2] == '1' and a[i+3] == '1' and a[i+4]=='1'
           and a[i+5] == '1' and a[i+6] == '1')
           {
               flag = 1;
               break;
           }
           else if(a[i] == '0' and a[i+1] == '0' and a[i+2] == '0' and a[i+3] == '0' and a[i+4]=='0'
           and a[i+5] == '0' and a[i+6] == '0')
           {
               flag = 1;
               break;
           }
           }
           else
           break;
    }
    if(flag == 1)
    cout <<"YES";
    else
    cout <<"NO";
}