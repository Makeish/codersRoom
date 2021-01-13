#include <bits/stdc++.h>
#define number_of_testcases int t ; cin >> t ; while(t--)
#define ll long long 
#define MOD 1000000007
using namespace std;

ll int power(int a , int n)
{
    if(n == 0 )
    return 1;
    if(n == 1)
    return a;
    ll t = pow(a,n/2);
    return t*t*pow(a,n%2);
}

double distance(int x1_coordinate , int y1_coordinate , int x2_coordinate , int y2_coordinate)
{
    return (sqrt(pow(x2_coordinate-x1_coordinate,2)+pow(y2_coordinate-y1_coordinate,2)));
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n ;
        cin >> n ;
        int c[n+1] = {};
        int p ;
        cin >> p ;
        int a[p];
        for(int i = 1 ; i <= p ; i++)
        {
        cin >> a[i];
        c[a[i]]=1;
        }
        int q , flag = 0 ;
        cin >> q ;
        int b[q];
        for(int i = 1 ; i <= q ; i++)
        {
            cin >> b[i];
            c[b[i]] = 1 ;
        }
        for(int i = 1 ; i <= n ; i++)
        {
            if(c[i] == 0)
            {
                flag = 1 ;
                break ;
            }
        }
        if(flag == 1)
        cout << "Oh, my keyboard!";
        else
        cout << "I become the guy.";
    return 0;
}