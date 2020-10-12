#include <bits/stdc++.h>

using namespace std ;

void reverse(int b[] , int start = 0 , int end = 31)
{
    while(start < end) {
        swap(b[start++] , b[end--]) ; 
    }
}

int main()
{
    int testcases = 1 ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int a , b[32] = {} , j = 31 , i = 0 ;
        
        long long ans = 0 ; 
        
        cin >> a ;

        while(a) {
            b[j--] = (a % 2) ;
            a /= 2 ;
        }
        
        j = 31 ;
        
        reverse(b) ;
        
        while(i != 32) {
            ans += pow(2 , i++) * b[j--] ;
        }
        
        cout << ans << "\n" ; 
        
    }
    return 0 ;
}