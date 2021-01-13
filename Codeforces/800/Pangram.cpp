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
        int n , flag = 0 ;
        cin >> n ;
        string a ;
        cin >> a ;
        int cnt[26]={};
        for(int i = 0 ; i < a.length() ; i++)
        {
            a[i] = tolower(a[i]);
            cnt[a[i]-'a']++;
        }
        for(int i = 0 ; i < 26 ; i++)
        {
            if(cnt[i] == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        cout << "NO";
        else
        cout << "YES";
        
        
    return 0;
}