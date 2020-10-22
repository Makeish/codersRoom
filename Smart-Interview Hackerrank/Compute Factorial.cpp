#include <bits/stdc++.h>

using namespace std ;

int main()
{
    ios_base :: sync_with_stdio(false) ;
    
    cin.tie(0) ;
    
    cout.tie(0) ; 
    
    long long int f[1000001] ;
    
    f[0] = 1 , f[1] = 1 ;
    
    for(int i = 2 ; i <= 1e6 ; ++i) {
        f[i] = fmod(i * f[i - 1] , 1000000007) ; 
    }
    
    int testcases ; cin >> testcases ; 
    
    while(testcases--) {
        
        int n ; cin >> n ; 
        
        cout << f[n] << "\n" ; 
    }
    return 0 ;
}