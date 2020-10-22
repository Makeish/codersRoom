#include <bits/stdc++.h>

using namespace std ;

int maxSumSubarray(int a[] , int n)   // Brute Force
{ 
    int result = INT_MIN ;
    
    for(int i = 0 ; i < n ; ++i) {
        int maxi = INT_MIN , sum = 0 ; 
        for(int j = i ; j < n ; ++j) {
            sum += a[j] ;
            maxi = max(maxi , sum) ;
        }
        result = max(result , maxi) ; 
    }
    
    return result ;
}

int maxSumSubarrayEffi(int a[] , int n)     // Efficient Approach 
{
    int sum = INT_MIN, curr_sum = 0 ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        curr_sum += a[i] ;
        
        sum = max(sum , curr_sum) ;
        
        if(curr_sum < 0) curr_sum = 0 ; 
    }
    
    return sum ; 
}

void solve(int a[] , int n)
{
    int ans1 = maxSumSubarray(a , n) ;
    
    int ans2 = maxSumSubarrayEffi(a , n) ;
    
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