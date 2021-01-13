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
            int n , m ;
            cin >> n >> m ;
            int flag = 0;
            for(int i = 1 ; i <= n ; i++)
            {
                for(int j = 1 ; j <= m ; j++)
                {
                    if(i & 1)
                    {
                    cout <<"#";
                    }
                    else if(i % 2 == 0 and flag == 0 and j == m)
                    {
                        cout << "#";
                    }
                    else if(i % 2 == 0 and flag == 1 and j == 1)
                    {
                        cout << "#";
                    }
                    else
                    cout <<".";
                }
                if(flag == 0 and i %2 == 0)
                flag = 1;
                else if(flag == 1 and i %2 == 0)
                flag = 0;
                cout <<"\n";
            }
    return 0;
}