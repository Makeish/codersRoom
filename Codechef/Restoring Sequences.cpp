#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;


long long int prime[1299710] ;

vector < int > A ;

void solveIt() 
{
    memset(prime , true , sizeof(prime)) ;
    
    prime[0] = false ;
    prime[1] = false ;
    
    for(int i = 2 ; i*i <= 1299710 ; ++i) {
        if(prime[i]) {
            for(int j = i*i ; j <= 1299710 ;  j+=i) {
                prime[j] = false ; 
            }
        }
    }
    
    for(int i = 2 ; i <= 1299710; ++i) {
        if(prime[i]) {
            A.push_back(i) ; 
        }
    }
}
void solve()
{
    int n ; 
    
    cin >> n ; 
    
    while(n--) {
        
        int input ; 
        
        cin >> input ;
        
        cout << A[input - 1] << " " ;  
    }
    
    cout << "\n" ; 
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