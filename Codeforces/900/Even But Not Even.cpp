#include <bits/stdc++.h>
#define number_of_testcases int t ; cin >> t ; while(t--)
#define ll long long 
#define MOD 1000000007
using namespace std;
 
ll int power(int a , int n)
{
    if(n == 0 )
    return 1;
    if(n == 1)
    return a;
    ll t = pow(a,n/2);
    return t*t*pow(a,n%2);
}
 
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
            int n , cnt  = 0 , flag = 0 ;
            cin >> n ;
            string a ;
            cin >> a ;
            char p[2];
            int j = 0 ;
            for(int i = 0 ; i < a.length() ; i++)
            {
                if(a[i] & 1)
                {
                    p[j]=a[i];
                    cnt++;
                    j++;
                }
                if(cnt == 2)
                {
                    flag = 1 ;
                    break;
                }
            }
            if(flag == 1)
            cout <<p[0]<<p[1]<< "\n";
            else 
            cout <<"-1\n";
        }
    return 0;
}