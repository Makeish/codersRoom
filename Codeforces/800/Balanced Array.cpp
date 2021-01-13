#include <bits/stdc++.h>
#define number_of_testcases int t ; cin >> t ; while(t--)
#define ll long long 
#define MOD 1000000007
using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        number_of_testcases
        {
            int n ; 
            cin >> n ; 
            if((n/2) & 1)
            cout << "NO\n";
            else{
                cout << "YES\n";
                int i ;
                for(i = 2 ; i <= n ; i+=2){
                    cout << i << " ";
                }
                for(i = 1 ; i < n-1 ; i+=2){
                    cout << i << " ";
                }
                cout << i+(n/2) << "\n";
            }
        }
    return 0;
}