#include <bits/stdc++.h>
#define ll long long

using namespace std ;

void input(ll int a[] , int n)
{
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ; 
    }
}

void solve()
{
    int n ;
    
    cin >> n ;
    
    ll int a[n] , sum = 0 ;
    
    input(a , n) ;
    
    cout << (1ll) * accumulate(a , a + n , sum) << "\n" ; 
}

int main()
{
    ios_base :: sync_with_stdio(false) ;
    
    cin.tie(NULL) ;
    
    cout.tie(NULL) ;
    
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}