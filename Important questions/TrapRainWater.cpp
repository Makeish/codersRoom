#include <bits/stdc++.h>

using namespace std ;

int trapRainWater(int a[] , int n)  // Brute Force
{
    int ans = 0 ;
    
    for(int i = 1 ; i < n - 1 ; ++i) {
        
        int lmaxi = 0 , rmaxi = 0 ;
        
        for(int j = 0 ; j < i ; ++j) lmaxi = max(lmaxi , a[j]) ;
        for(int j = i+1 ; j < n ; ++j) rmaxi = max(rmaxi , a[j]) ;
        
        ans += max(0 , min(lmaxi , rmaxi) - a[i]) ; 
    }
    
    return ans ;
}

int trapRainWaterEffi(int a[] , int n)  //Efficient Approach
{
    int l[n] , r[n] , ans = 0 ;
    
    l[0] = a[0] , r[n - 1] = a[n - 1] ;
    
    for(int i = 1 ; i < n ; ++i) {
        l[i] = max(l[i - 1] , a[i]) ;
    }
    
    for(int i = n - 2 ; i >= 0 ; i--) {
        r[i] = max(r[i + 1] , a[i]) ; 
    }
    
    for(int i = 1 ; i < n - 1 ; ++i) {
        ans += min(l[i] , r[i]) - a[i] ; 
    }
    
    return ans ;
}

void solve(int a[] , int n)
{
    int ans1 = trapRainWater(a , n) ;
    
    int ans2 = trapRainWaterEffi(a , n) ;
    
    cout << ans1 << " " << ans2 ; 
}


int main()
{
    int n ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
    }
    
    solve(a , n) ;
    
    return 0 ;
}