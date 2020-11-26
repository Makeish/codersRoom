#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ; 
    
    cin >> n ; 
    
    int mini = INT_MAX ;
    
    for(int i = 1 ; i*i <= n ; ++i) {
        
        if(n % i == 0) {
 
                mini = min(mini , n/i - i) ; 
        }
    }
    
    cout << mini << "\n" ; 
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}