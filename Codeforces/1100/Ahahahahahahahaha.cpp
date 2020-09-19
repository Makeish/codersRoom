#include <bits/stdc++.h>
#define ll long long 

using namespace std ;

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , cnt1 = 0 , cnt2 = 0 ; 
        
        cin >> n ;
        
        int a[n] , sum = 0 ;
        
        for(int i = 0 ; i < n ; ++i) {
            
            cin >> a[i] ;
            
            if(a[i] == 0) {
                cnt1++ ;
            }
            else{
                cnt2++ ; 
            }
            
            if(i & 1)
            sum -= a[i] ;
            else
            sum += a[i] ; 
            
        }
        
    if(sum != 0) {

        if(cnt2 <= n/2) {
            
            cout << n - cnt2 << "\n" ;
            
            for(int i = 0 ; i < n - cnt2 ; ++i) {
                cout << "0 " ;
            }
            
        }
        else if(cnt1 < n/2) {
            
            if(cnt1 & 1) {
                
                cout << n - cnt1 - 1 << "\n" ;
                
                for(int i = 0 ; i < n - cnt1 - 1 ; ++i) {
                    cout << "1 " ;
                }
            }
            else {
                
                cout << n - cnt1 << "\n" ;
                
                for(int i = 0 ; i < n - cnt1 ; ++i) {
                    cout << "1 " ;
                }
                
            }
        }
    
        
    }
    else {
        
        cout << n << "\n" ;
        
        for(int i = 0 ; i < n  ; ++i) {
            cout << a[i] << " " ;
        }
        
    }
        
        cout << "\n" ; 
    }
    return 0 ;
}