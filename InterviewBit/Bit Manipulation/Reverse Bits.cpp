#include <bits/stdc++.h>

unsigned int Solution::reverse(unsigned int n) {
    int a[32] = {}, b[32] ;
    
    int j = 31 ; 
    
    while(n != 0) {
        a[j--] = n % 2 ;
        n = n/2 ;
    }
    
    j = 31 ; 
    
    std::reverse(a , a + 32) ;
    
    unsigned int ans = 0 , i = 0 ;
    
    while(j >= 0) {
        ans += pow(2 , i)*(a[j]%2) ;
        i++ ;
        j-- ; 
    }
    
    return ans ;
}
