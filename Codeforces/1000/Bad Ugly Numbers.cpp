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
       
            int t ;
            cin >> t ;
            while(t--)
            {
                int n ;
                cin >> n ;
                if(n == 1)
                cout << "-1\n";
                else
                {
                for(int i = 1 ; i <= n-2 ; i++)
                cout << "5";
                cout << "5";
                cout << "4\n";
                }
            }
    return 0;
}