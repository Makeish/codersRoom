#include <bits/stdc++.h>

using namespace std ;

void solve()
{
    int a[6][6] ;

    for(int i = 0 ; i < 6 ; ++i) {
        for(int j = 0 ; j < 6 ; ++j) {
            cin >> a[i][j] ;
        }
    }
    int maxSum = -1e5 ;

    for(int i = 1 ; i < 5 ; ++i) {
        for(int j = 1 ; j < 5 ; ++j) {
            maxSum = max(maxSum , a[i][j]+a[i-1][j+1]+a[i+1][j+1]+a[i-1][j]+a[i+1][j]+a                                    [i-1][j-1]+a[i+1][j-1]) ;
        }
    }

    cout << maxSum ; 
}

int main()
{
    int testcases = 1 ; 
    
    // cin >> testcases ;
    
    while(testcases--) {
        
        solve() ;
    }
    return 0 ;
}
