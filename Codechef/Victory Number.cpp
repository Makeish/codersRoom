#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

bool prime[1000001] ;
long long int primesum[1000001] = {};

void solveIt()
{
    memset(prime , true , sizeof(prime)) ;
    
    prime[0] = false;
    
    prime[1] = false ;

    for(int i = 2 ; i * i <= 1000000 ; ++i) {
        
        if(prime[i]) {
            
            for(int j = i * i ; j <= 1000000 ; j += i) {
                prime[j] = false ;
            }
        }
    }
    
    primesum[0] = 0 ;
    
    for(int i = 1 ; i < 1000001 ; ++i) {
        
        if(prime[i]) {
            primesum[i] = i + primesum[i - 1];
        }
        else {
            primesum[i] = primesum[i - 1] ;
        }
    }
}

void solve()
{
    int n ; 
    
    cin >> n ; 
    
    cout << primesum[n] << "\n" ;
}

int main()
{
    FastIO
    
    solveIt() ;
    
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}