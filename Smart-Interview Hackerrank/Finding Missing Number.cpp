#include <bits/stdc++.h>

using namespace std ;

void input(int a[] , int n)
{
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ; 
    }
}

void solve()
{
    int n ;
    
    cin >> n ;
    
    int a[n] ; 
    
    input(a , n) ;
    
    int ans = accumulate(a , a + n , 0) ;
    
    cout << ( ( (n + 2) * (n + 1) ) / 2) - ans << "\n" ; 
}

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}