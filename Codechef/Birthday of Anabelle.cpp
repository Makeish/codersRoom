#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

string solve()
{
    int n ;
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
    }
    
    sort(a , a + n) ;
    
    int i = 0 , j = n - 1 ;
    
    while(i < j) {
        
        if(a[i] + a[j] == 2000) {
            return "Accepted\n" ;
        }
        else if(a[i] + a[j] < 2000) {
            i++ ;
        }
        else {
            j-- ; 
        }
    }
    
    return "Rejected\n" ; 
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        cout << solve() ;
    }
    return 0 ; 
}