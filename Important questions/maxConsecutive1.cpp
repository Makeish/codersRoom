#include <bits/stdc++.h>

using namespace std ;

int maxConsecutive1(int a[] , int n)   // Brute Force
{ 
    int result = INT_MIN ;
    
    for(int i = 0 ; i < n ; ++i) {
        int cnt = 0 ;
        for(int j = i ; j < n ; ++j) {
            if(a[j] == 1) cnt++;
            else break ;
        }
        result = max(result , cnt) ; 
    }
    
    return result ;
}

int maxConsecutive1Effi(int a[] , int n)     // Efficient Approach 
{
    int result = 0 , cnt = 0 ;
    
    for(int i = 0 ; i < n ; ++i) {
        if(a[i] == 1) {
            cnt++ ;
        }
        else {
            result = max(result , cnt) ; 
            cnt = 0 ; 
        }
    }
    
    return max(result , cnt) ; 
}

void solve(int a[] , int n)
{
    int ans1 = maxConsecutive1(a , n) ;
    
    int ans2 = maxConsecutive1Effi(a , n) ;
    
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