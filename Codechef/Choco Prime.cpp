#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

bool prime[100001] ;

bool ispali(int n)
{
    int p = n , s = 0 ;
    
    while(p != 0) {
        s = s * 10 + (p % 10) ;
        p /= 10 ; 
    }
    
    if(s == n) return true ;
    else return false ;
}

void solve()
{
    memset(prime , true , sizeof(prime)) ;
    
    prime[1] = false ;
    
    for(int i = 2 ; i * i <= 100000 ; ++i) {
        
        if(prime[i]) {
            
            for(int j = i * i ; j <= 100000 ; j += i) {
                prime[j] = false ;
            }
            
        }
       
    }
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    solve() ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n ; 
        
        cin >> n ; 
        
        if(ispali(n) and prime[n]) {
            cout << "Yes\n" ; 
        }
        else {
            cout << "No\n" ; 
        }
    }
    return 0 ; 
}