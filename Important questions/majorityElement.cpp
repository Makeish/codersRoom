#include <bits/stdc++.h>

using namespace std ;

int majortiyElement(int a[] , int n)  // Brute Force
{
    int ans = 0 ;
    
    for(int i = 0 ; i < n - 1 ; ++i) {
        
        int cnt = 1 ;
        
        for(int j = i + 1 ; j < n ; ++j) {
            if(a[i] == a[j]) cnt++ ;
        }
        
        if(cnt > n/2) return i ;
    }
    
    return -1 ;
}

bool majorityElementEffiExists(int a[] , int n , int res)
{
    int cnt = 0 ; 
    
    for(int i = 0 ; i < n ; ++i) {
        if(a[i] == a[res]) cnt++ ;
    }
    
    if(cnt > n / 2) return true ;
    
    return false ; 
}

int majorityElementEffi(int a[] , int n) // Efficient Approach
{
    int res = 0 , count = 1 ;
    
    for(int i = 0 ; i < n ; ++i) {
        if(a[i] == a[res])
        count++ ;
        else
        count-- ;
        
        if(count == 0) {
            res = i ;
            count = 1 ;
        }
    }
    
    bool ans = majorityElementEffiExists(a , n , res) ;
    
    if(ans) return res ;
    return -1 ; 
}


void solve(int a[] , int n)
{
    int ans1 = majortiyElement(a , n) ;
    
    int ans2 = majorityElementEffi(a , n) ;
    
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