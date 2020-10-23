#include <bits/stdc++.h>

using namespace std ;

int binarySearch(int a[] , int n , int x)
{
    int low = 0 , high = n - 1 , ans = -1 ;
    
    while(low <= high) {
        
        int mid = low + (high - low )/2 ;
        
        if(a[mid] <= x) {
            if(a[mid] == x) ans = mid ;
            low = mid + 1 ;
        }
        else {
            high = mid - 1 ; 
        }
    }
    
    return ans ;
}

int recBinSearch(int a[] , int low , int high , int x)
{
    static int ans = -1 ;
    
    if(low > high) return ans ;
    
    int mid = low + (high - low) / 2 ;
    
    if(a[mid] <= x) {
        if(a[mid] == x) ans = mid ;
        return recBinSearch(a , mid + 1 , high , x) ;
    }
    return recBinSearch(a , low , mid - 1 , x) ; 
}

int main()
{
    int n , x ; 
    
    cin >> n >> x ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    cout << binarySearch(a , n , x)  << " " ;
    cout << recBinSearch(a , 0 , n - 1 , x) ;
    
    return 0 ;
}