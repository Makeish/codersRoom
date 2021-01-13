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
        number_of_testcases
        {
            int n , m ;
            int sum = 0 ;
            cin >> n >> m ;
            int a[n];
            for(int i = 0 ; i < n ; i++)
            {
            cin >> a[i];
            sum+=a[i];
            }
            int p = min(sum,m);
            cout << p<< "\n";
        }
    return 0;
}