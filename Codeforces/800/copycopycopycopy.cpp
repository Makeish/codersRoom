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
            int n ;
            cin >> n ;
            int a[n];
            map <int,int> mp;
            for(int i = 0 ; i < n ; i++)
            {
                cin >> a[i];
                mp[a[i]]++;
            }    
            cout << mp.size() << "\n";
        }
    return 0;
}