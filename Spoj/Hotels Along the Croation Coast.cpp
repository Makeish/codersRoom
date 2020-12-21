#include <bits/stdc++.h>

using namespace std ;

int main()
{ 
    int n , m , j = 0 ; 
    
    long long int res = INT_MIN , sum = 0 ;
    
    cin >> n >> m ; 
    
    long long int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        sum += a[i] ;
        
        while(sum > m and j < i) {
            sum -= a[j] ;
            j++ ;
        }
        
        res = max(res , sum) ; 
        
    }
    
    cout << res ;
    
    return 0 ;
}