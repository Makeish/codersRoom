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
        int queries;
        cin >> queries ;
        int p[queries] , q[queries] ;
        for(int i =  1 ; i  <= queries ; i++)
        cin >> p[i] >> q[i];
        int cnt = 0;
        for(int i = 1 ; i <= queries ; i++)
        {
            for(int j = 1 ; j <= queries ; j++)
            {
                if(p[i] == q[j])
                cnt++;
            }
        }
        cout << cnt;
}