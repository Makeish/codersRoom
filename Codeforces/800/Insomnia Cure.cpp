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
        int k , l , m , n , d , cnt = 0 ;
        cin >> k >> l >> m >> n >> d ;
        for(int i = 1 ; i <=d ; i++)
        {
            if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            cnt++;
        }
        cout << cnt ;
        return 0;
}