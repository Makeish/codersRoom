#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int mini = INT_MAX , second_min ;
    
    int n ; 
    
    cin >> n ;
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> a[i] ;
        
    }
    
    for(int i = 0 ; i < n ; ++i) {
        
        if(a[i] < mini) {
            second_min = mini ; 
            mini = a[i] ;
        }
        else if(a[i] > mini and a[i] < second_min) {
            second_min = a[i] ;
        }
    }
    
    cout << mini + second_min << "\n" ; 
    
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