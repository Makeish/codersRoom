#include <bits/stdc++.h>

using namespace std ;

// Binary Search Works only for Sorted data

int binarySearch(int a[] , int n , int x) // Iterative approach
{
    int low = 0 , high = n - 1 ;
    
    while(low <= high) {
        
        int mid = low + (high - low)/2 ;
        
        if(a[mid] == x) return mid ;
        else if(a[mid] > x) high = mid - 1 ;
        else low = mid + 1 ;
    }
    
    return -1 ;
}

int recursiveBinarySearch(int a[] , int low , int high , int x) // Recursive Approach
{
    if(low > high) return -1 ;
    
    int mid = low + (high - low) / 2 ;
    
    if(a[mid] == x) return mid ;
    else if(a[mid] > x) 
    return recursiveBinarySearch(a , low , mid - 1 , x) ;
    else
    return recursiveBinarySearch(a , mid + 1 , high , x) ;
}

int main()
{   
    int test ; cin >> test ; 
    
    while(test--) {
        
        int n , x ; 
    
        cin >> n >> x ; 
    
        int a[n] ;
    
        for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
        int ans1 = binarySearch(a , n , x) ;
    
        int ans2 = recursiveBinarySearch(a , 0 , n - 1 , x) ;
    
        cout << ans1 << " " << ans2 << "\n" ;
    
    }
    
    return 0 ;
}