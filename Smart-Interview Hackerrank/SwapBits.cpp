#include <bits/stdc++.h>

using namespace std ;

int to_decimal(int a[])
{
    int ans = 0 , j = 31 , i = 0 ;
    
    while(j >= 0) {
        ans += pow(2 , i)*(a[j]%2) ;
        j--;i++; 
    }
    
    return ans ;
}


void swap(int a[])
{
    for(int i = 0 ; i < 32 ; i+=2) {
        swap(a[i] , a[i+1]) ; 
    }    
}

int solve(int n)
{
    int a[32] = {} , j = 31 ;
    
    while(n) {
        
        a[j--] = n % 2 ;
        
        n >>= 1 ;
        
    }
    
    swap(a) ;
    
    return to_decimal(a) ;
    
}

int main()
{
    ios_base::sync_with_stdio(false) ;
    
    cin.tie(0) ; 
    
    cout.tie(0) ;
    
    int testcases ; 
    
    cin >> testcases ; 
    
    while(testcases--) {
        
        int n ; 
        
        cin >> n ; 
        
        cout << solve(n) << "\n" ; 
    }
    return 0 ;
}