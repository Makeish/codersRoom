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
        string a , b ;
        cin >> a >> b ;
        for(int i = 0 ; i < a.length() ; i++)
        a[i] = tolower(a[i]);
        for(int i = 0 ; i < b.length() ; i++)
        b[i] = tolower(b[i]);
        if(a.compare(b) == 0)
        cout << "0";
        else if(a.compare(b) > 0)
        cout << "1";
        else
        cout << "-1";
        return 0;
}