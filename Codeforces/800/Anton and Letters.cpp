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
        string a ;
       getline(cin,a);
        int cnt[26] = {};
        for(int i = 0 ; i < a.length() ; i++)
        {
            if(a[i] != '{' and a[i] != '}' and a[i] != ',' and a[i] != ' ') 
            {
                cnt[a[i] - 'a']++;
            }
        }
        int m = 0;
        for(int i = 0 ; i < 26 ; i++)
        {
            if(cnt[i] >= 1)
            m++;
        }
        cout << m ;
    return 0;
}