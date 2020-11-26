#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string a ; 
    
    cin >> a ;
    
    int cnt_s = 0 ; 
    
    for(int i = 0 ; i < a.length() ; ++i) {
        if(a[i] == '4' or a[i] == '7') cnt_s++ ;
    }
    
    cout << a.length() - cnt_s << "\n" ; 
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