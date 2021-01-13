#include <bits/stdc++.h>
#define number_of_testcases int t ; cin >> t ; while(t--)
#define ll long long 
#define MOD 1000000007
using namespace std;


double distance(int x1_coordinate , int y1_coordinate , int x2_coordinate , int y2_coordinate)
{
    return (sqrt(pow(x2_coordinate-x1_coordinate,2)+pow(y2_coordinate-y1_coordinate,2)));
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n , flag , flag1;
        cin >> n ;
        int a[n];
        for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
        int p = *max_element(a+1,a+n+1);
        int q = *min_element(a+1,a+n+1);
        for(int i = 1 ; i <= n ; i++)
        {
            if(a[i] == p)
            {
                flag = i ;
                break;
            }
        }
        for(int i = n ; i >= 1 ; i--)
        {
            if(a[i] == q)
            {
                flag1 = i ;
                break;
            }
        }
        if(flag1 < flag )
        cout << flag - 1 +  n - flag1 - 1;
        else
        cout << abs(flag - 1 + n - flag1 );
    return 0;
}