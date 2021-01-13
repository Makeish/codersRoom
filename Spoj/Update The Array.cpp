#include <bits/stdc++.h>
#define ll long long

using namespace std ;

void solve(int a[] , int n , int l , int r , int val)
{
    a[l] += val ;
    
    a[r + 1] -= val ;
}

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , q ; 
        
        cin >> n >> q ; 
        
        int a[n + 1] = {};
        
        while(q--) {
            
            int l , r , val ;
            
            cin >> l >> r >> val ;
            
            solve(a , n , l , r, val) ;
            
        }
        
        for(int i = 1 ; i < n ; ++i) a[i] += a[i - 1] ; 
        
        int query ; 
        
        cin >> query ;
        
        while(query--) {
            
            int input ; 
            
            cin >> input ; 
            
            cout << a[input] << "\n" ; 
        }
    }

    return 0 ; 
}