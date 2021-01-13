#include <bits/stdc++.h>
#define number_of_testcases int t ; cin >> t ; while(t--)
#define ll long long 
#define MOD 1000000007
using namespace std;


double distance(int x1_coordinate , int y1_coordinate , int x2_coordinate , int y2_coordinate)
{
    return (sqrt(pow(x2_coordinate-x1_coordinate,2)+pow(y2_coordinate-y1_coordinate,2)));
}

void solve()
{
            string a , b , c;
            cin >> a >> b >> c ;
            int flag = 0;
            for(int i = 0 ; i < a.size() ; i++)
            {
                if(a[i] != c[i] and b[i] != c[i])
                {
                    puts("NO\n");
                    return ;
                }
            }
            puts("YES\n");
            return;
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        number_of_testcases
        {
            solve();
        }
    return 0;
}