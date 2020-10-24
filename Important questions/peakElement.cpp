#include <bits/stdc++.h>

using namespace std ;

int peakElement(int a[] , int n)   // Efficient Approach
{
    int low = 0 , high = n - 1 ;
    
    while(low <= high) {
        
        int mid = low + (high - low) / 2 ;
        
        if(a[mid] >= a[mid - 1] and a[mid] >= a[mid + 1]) return a[mid] ;
        else if(a[mid - 1] >= a[mid]) high = mid - 1 ;
        else low = mid + 1 ;
    }
}

int main()
{
    int n ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    cout << peakElement(a , n) ;
    
    return 0 ; 
}