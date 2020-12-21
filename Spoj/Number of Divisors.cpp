#include <bits/stdc++.h>

using namespace std ;

int main()
{
    ios_base :: sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    
    int t ; 
    
    cin >> t ;
    
    while(t--) {
    
        long long int a , b ; 
        
        cin >> a >> b ; 
        
        long long int ans = __gcd(a , b) ;
        
        int count = 0 ;
        
        for(int i = 1 ; i * i <= ans ; ++i) {
            if(ans % i == 0) {
                if(ans/i != i) {
                    count += 2 ;
                }
                else {
                    count += 1 ;
                }
            }
        }
        
        cout << count << "\n" ; 
    }
    return 0 ;
}