#include <bits/stdc++.h>

using namespace std ;

int binarySearch1(int a[] , int n , int x) // Position of first occurence of x - iterative
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


int binarySearch2(int a[] , int n , int x) // Position of last occurence of x - iterative
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

int recBinSearch1(int a[] , int low , int high , int x)  // Position of first occurence of x - recursive
{
    static int ans = -1 ;
    
    if(low > high) return ans ;
    
    int mid = low + (high - low) / 2 ;
    
    if(a[mid] >= x) {
        if(a[mid] == x) ans = mid ;
        return recBinSearch1(a , low , mid - 1 , x) ;
    }
    return recBinSearch1(a , mid + 1 , high , x) ; 
}

int recBinSearch2(int a[] , int low , int high , int x)  // Position of last occurence of x - recursive
{
    static int ans = -1 ;
    
    if(low > high) return ans ;
    
    int mid = low + (high - low) / 2 ;
    
    if(a[mid] <= x) {
        if(a[mid] == x) ans = mid ;
        return recBinSearch2(a , mid + 1 , high , x) ;
    }
    return recBinSearch2(a , low , mid - 1 , x) ; 
}

int main()
{
    int n , x ; 
    
    cin >> n >> x ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    int ans1_1 = binarySearch2(a , n , x) ;
    
    int ans1_2 =  binarySearch1(a , n , x) ;
    
    int ans1 = ans1_1 - ans1_2 + 1 ;
    
    int ans2_1 = recBinSearch2(a , 0 , n - 1 , x) ; 
    
    int ans2_2 = recBinSearch1(a , 0 , n - 1 , x) ; 
    
    int ans2 = ans2_1 - ans2_2 + 1 ;
    
    if((ans1_1 == -1 and ans1_2 == -1) or (ans2_1 == -1 and ans2_2 == -1)) {
        cout << "0 0" ;
    }
    else
    cout << ans1 << " " << ans2 ;
    
    return 0 ;
}