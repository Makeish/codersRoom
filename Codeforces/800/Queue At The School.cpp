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
        int p , b ;
         string a  ;
        cin >> p >> b >> a;
        while(b--)
        {
        for(int i = 0 ; i < a.length() ; )
        {
           if(a[i] == 'B' and a[i+1] == 'G')
           {
             a[i] = 'G';
             a[i+1]='B';  
             i+=2;
           }
           else
           i++;
        }
        }
        cout << a ;
        return 0;
}