#include <bits/stdc++.h>

using namespace std ;

bool prime[100000001] ;

vector <int> pre;

void solve()
{
    memset(prime , true , sizeof(prime)) ;
    
    prime[1] = false ;
    
    for(int i = 2 ; i * i <= 100000000 ; ++i) {
        if(prime[i]) {
            for(int j = i * i ; j <= 100000000 ; j += i) {
                prime[j] = false ;
            } 
        }
    }
    
    for(int i = 1 ; i <= 100000000 ; ++i) {
        if(prime[i]) {
            pre.push_back(i) ;
        }
    }
}

int main()
{
    int test ;
    
    cin >> test ; 
    
    ios_base::sync_with_stdio(false) ;
    
    cin.tie(NULL) ;
    
    cout.tie(NULL) ; 
    
    solve() ; 
    
    while(test--) {
        int q ; cin >> q ;
        cout << pre[q - 1] << "\n" ;
    }
    return 0 ; 
}