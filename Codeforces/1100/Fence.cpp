#include <bits/stdc++.h>
     
    using namespace std ;
     
    int main()
    {
        int n , k ;
        
        cin >> n >> k ;
        
        int a[n] , pre[n] ;
        
        cin >> a[0] ;
        
        pre[0] = a[0] ;
        
        for(int i = 1 ; i < n ; ++i) {
            cin >> a[i] ; 
            pre[i] = a[i] + pre[i - 1] ; 
        }
        
        int maxi = 1e9 , index = 0 , partial;
        
        for(int i = 0 ; i < n ; ++i) {
            
            if(i == 0) {
                partial = pre[i+k-1];
            }
            else if(i > 0 and i+k-1 < n){
                partial = pre[i+k-1] - pre[i-1] ;
            }
            
            if(partial < maxi) {
                maxi = partial ; 
                index = i+1 ;
            }
        }
        
        cout << index << "\n" ; 
        return 0 ; 
    }