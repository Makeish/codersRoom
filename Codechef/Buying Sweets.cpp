#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , k , sum = 0 , mini = INT_MAX;
    
    cin >> n >> k ;
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> a[i] ; 
        
        sum += a[i] ;
        
        mini = min(a[i] , mini) ;
    }
    
    if(sum % k == 0) cout << sum/k ;
    else {
        int pika = sum/k ;
        
        if((sum - mini) / k == pika) cout << "-1" ;
        else cout << pika ;
    }
    cout << "\n" ; 
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