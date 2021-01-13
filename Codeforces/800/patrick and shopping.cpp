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
        int a , b , c ;
        cin >> a >> b >> c ;
        int p[4];
        p[0] = a+b+c;
        p[1] = 2*a + 2*b ;
        p[2] = 2*a + 2*c;
        p[3] = 2*b + 2*c ;
        cout << *min_element(p,p+4);
    return 0;
}