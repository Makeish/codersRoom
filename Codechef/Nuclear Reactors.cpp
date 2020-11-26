#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int a , n , k , i = 0 ;
    
    cin >> a >> n >> k ;
    
    int pika[k] = {} ; 
    
    while(a > 0) {
        
        pika[0]++ ;
        
        if(pika[0] > n) {
            
            pika[0] = 0 ;
            
            pika[1]++ ; 
            
            int j = 1 ; 
            
            while(j < k and pika[j] > n) {
                pika[j] = 0 ;
                pika[j+1]++ ;
                j++ ; 
            }
        }
        a-- ; 
    }
    
    for(int i = 0 ;  i < k ; ++i) cout << pika[i] << " " ; 
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    // cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}