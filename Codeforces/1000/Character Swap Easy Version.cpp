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
            string a , b ;
            cin >> a >> b ;
            int cnt = 0 ;
            char d,e,f,g ;
            for(int i = 0 ; i <a.length() ; i++){
                if(a[i] != b[i]){
                    cnt++;
                    if(cnt == 1){
                    d = a[i];
                    e = b[i];
                    }
                    else if(cnt == 2)
                    {
                        f = a[i];
                        g = b[i];
                    }
                }
                if(cnt > 2)
                break;
            }
            
            if(cnt == 1 || cnt > 2)
            cout << "NO\n";
            else{
                if(d == f and e == g)
                cout << "YES\n";
                else
                cout << "NO\n";
            }
        }
    return 0;
}