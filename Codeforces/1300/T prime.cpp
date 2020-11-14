#include <bits/stdc++.h>

using namespace std ;

int prime[1000001] ;

void solve()
{
    memset(prime , true , sizeof(prime)) ;
    
    prime[1] = false ; 
    
    for(int i = 2 ; i * i <= 1000000 ; ++i) {
        
        if(prime[i]) {
            
            for(int j = i * i  ; j <= 1000000 ; j += i) {
                
                prime[j] = false ;
            }
        }
    }
}

int main()
{
    solve() ;
    
    long long int n , input ; 
    
    cin >> n ; 
    
    while(n--) {
        
        cin >> input ;
        
        int m = sqrt(input) ; 
        
        if(prime[m] and ceil(sqrt(input)) == floor(sqrt(input))) {
            
            cout << "YES\n" ;
        }
        
        else {
            
            cout << "NO\n" ; 
        }
        
    }
    
    return 0 ;
}