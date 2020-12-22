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
            int n , x , i;
            cin >> n >> x ;
            int a[n] ;
            for(int i = 0 ; i < n ; i++)
            cin >> a[i] ;
            sort(a,a+n);
            for(i = 1 ; ; i++){
                if(binary_search(a,a+n,i)){
                    if(x == 0 ||  x!= 0)
                    continue;
                }
                else{
                    if(x > 0)
                    x--;
                    else
                    break;
                }
            }
            cout << i-1 << "\n";
        }
    return 0;
}