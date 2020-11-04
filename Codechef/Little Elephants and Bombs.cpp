#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{   
    int n , cnt = 0 ;
    
    cin >> n ; 
    
    string a ; cin >> a ;
    
    for(int i = 0 ; i < a.length() ; ++i) {
        if(a[i] == '1' or (i - 1 >= 0 and a[i - 1] == '1') or (i + 1 < n and a[i + 1] == '1')) {
            cnt++ ;
        }
    }
    
    cout << n - cnt << "\n" ;
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