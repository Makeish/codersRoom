#include <bits/stdc++.h>

using namespace std ;

int cubesearch(long long int n)
{
    char sign ;
    
    if(n < 0) sign = '-' ;
    else sign = '+' ;
    
    n = abs(n) ;
    
    long long int low = 1 , high = n ;
    
    while(low <= high)
    {
        long long int mid = low + (high - low)/2 ; 
        
        if(mid == ((n/mid)/mid)) {
            
            if(sign == '-')
                return -mid ; 
            else
                return mid ;
        }
        else if(mid > ((n/mid)/mid)) high = mid - 1 ;
        
        else low = mid + 1 ;
    }
    
    return 0 ; 
}

int main()
{
    int testcases ; 
    
    cin >> testcases ; 
    
    while(testcases--) {
        
        long long int n ; 
    
        cin >> n ; 
    
        cout << cubesearch(n) << "\n" ;
    }
    
    return 0 ;
}