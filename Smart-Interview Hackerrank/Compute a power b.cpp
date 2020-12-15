#include <bits/stdc++.h>
#define m 1000000007

using namespace std ;

long long int fastpower(long long int a , long long int b)
{
    long long int res = 1 , x = a ;
    
    while(b != 0) {
        
        if(b & 1 == 1) {
            res = (res * x)%m ;
        }
        x = (x*x)%m;
        
        b = b >> 1 ;
    }
    
    return res ;
}

int main()
{
    int testcases ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        long long int a , b ; 
        
        cin >> a >> b ; 
        
        cout << fastpower(a , b) << "\n" ;
        
    }
    return 0 ;
}