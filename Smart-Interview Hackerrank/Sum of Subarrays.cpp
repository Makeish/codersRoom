#include <bits/stdc++.h>

using namespace std ;

int main()
{
    ios_base :: sync_with_stdio(false) ;
    
    cin.tie(0) ; cout.tie(0) ;
    int n ; 
    
    cin >> n ;
    
    long long int a[n] , pre[n];
    
    cin >> a[0] ; pre[0] = a[0] ;
    
    for(int i = 1 ; i < n ; ++i) {
        
        cin >> a[i] ;
        
        pre[i] = pre[i - 1] + a[i] ;
    
    }
    
    int q ; cin >> q ;
    
    while(q--) {
        
        int a , b ; 
        
        cin >> a >> b ; 
        
        if(a == 0) cout << pre[b] << "\n" ;
        else cout << pre[b] - pre[a - 1] << "\n" ; 
    }
    
    
    return 0 ;
}