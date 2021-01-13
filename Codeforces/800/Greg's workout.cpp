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
        int n;
        cin >> n ;
        int a[n];
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
        }
        int sum1 = 0,sum2 = 0,sum3 = 0 ;
        for(int i = 1 ; i <= n ; i+=3)
        sum1+=a[i];
        for(int i = 2 ; i <= n ; i+=3)
        sum2+=a[i];
        for(int i = 3 ; i <= n ; i+=3)
        sum3+=a[i];
        int b[3];
        b[0]=sum1;
        b[1]=sum2;
        b[2]=sum3;
        int p = *max_element(b,b+3);
        if(p ==  sum1)
        cout <<"chest";
        else if(p ==  sum2)
        cout <<"biceps";
        else
        cout <<"back";
    return 0;
}