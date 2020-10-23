#include <bits/stdc++.h>

using namespace std ;

int binarySearch(int a[] , int n , int x)
{
    int low = 0 , high = n - 1 , ans = -1 ;
    
    while(low <= high) {
        
        int mid = low + (high - low )/2 ;
        
        if(a[mid] >= x) {
            if(a[mid] == x) ans = mid ;
            high = mid - 1 ;
        }
        else {
            low = mid + 1 ; 
        }
    }
    
    return ans ;
}

int recBinSearch(int a[] , int low , int high , int x)
{
    static int ans = -1 ;
    
    if(low > high) return ans ;
    
    int mid = low + (high - low) / 2 ;
    
    if(a[mid] >= x) {
        if(a[mid] == x) ans = mid ;
        return recBinSearch(a , low , mid - 1 , x) ;
    }
    return recBinSearch(a , mid + 1 , high , x) ; 
}

int main()
{
    int n , x ; 
    
    cin >> n >> x ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    int ans1 = binarySearch(a , n , x)  ;
    int ans2 = recBinSearch(a , 0 , n - 1 , x) ;
    
    if(ans1 == -1 or ans2 == -1) { //One comparision is enough
        cout << "0 0" ;
    }
    else {
        cout << ans1 << " " << ans2 ;
    }
    
    return 0 ;
}