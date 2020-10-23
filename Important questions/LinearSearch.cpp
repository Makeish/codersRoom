#include <bits/stdc++.h>

using namespace std ;

int linearSearch(int a[] , int n , int x) // Iterative approach
{
    for(int i = 0 ; i < n ; ++i) {
        if(a[i] == x) return i ;
    }
    
    return -1 ;
}

int recursiveLinearSearch(int a[] , int index , int n , int x) // RecursiveApproach
{
    if(index == n) {
        return -1 ;
    }
    
    if(a[index] == x) {
        return index ; 
    }
    
    return recursiveLinearSearch(a , index + 1 , n ,  x) ; 
}

int main()
{
    int test ; cin >> test ; 
    
    while(test--) {
        
        int n , x ; 
    
        cin >> n >> x ; 
    
        int a[n] ;
    
        for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
        int ans1 = linearSearch(a , n , x) ;
    
        int ans2 = recursiveLinearSearch(a , 0 , n , x) ;
    
        cout << ans1 << " " << ans2 << "\n" ;
    
    }
    
    return 0 ;
}