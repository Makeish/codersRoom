#include <bits/stdc++.h>

using namespace std ;

int maxOddEvenSubarray(int a[] , int n)   // Brute Force
{ 
    int result = INT_MIN ;
    
    for(int i = 0 ; i < n ; ++i) {
        int cnt = 1 ;
        for(int j = i + 1 ; j < n ; ++j) {
            if(a[j] % 2 != a[j - 1] % 2) cnt++;
            else break ;
        }
        result = max(result , cnt) ; 
    }
    
    return result ;
}

int maxOddEvenarrayEffi(int a[] , int n)     // Efficient Approach 
{
    int result = 1 , cnt = 1 ;
    
    for(int i = 1 ; i < n ; ++i) {
        if(a[i] % 2 != a[i - 1] % 2) {
            cnt++ ;
        }
        else {
            result = max(result , cnt) ; 
            cnt = 1 ; 
        }
    }
    
    return max(result , cnt) ; 
}

void solve(int a[] , int n)
{
    int ans1 = maxOddEvenSubarray(a , n) ;
    
    int ans2 = maxOddEvenarrayEffi(a , n) ;
    
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