#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases , i = 1; 
    
    cin >> testcases ; 
    
    while(i <= testcases) {
        
        cout << "Test Case #" << i << ":\n" ;
        int n ; 
        
        cin >> n ; 
        
        int a[n][n] ; 
        
        for(int i = 0 ; i < n ; ++i) {
            for(int j = 0 ; j < n ; ++j) {
                cin >> a[i][j] ; 
            }
        }
        
        for(int i = 0 ; i < n ; ++i) {
            for(int j = i ; j < n ; ++j) {
                swap(a[i][j] , a[j][i]) ; 
            }
        }
        
        for(int i = 0 ; i < n ; ++i) {
            
            int start = 0 , end = n - 1 ;
                
            while(start <= end) {
                swap(a[i][start++] , a[i][end--]) ;
            }
        }
        
        for(int i = 0 ; i < n ; ++i) {
            for(int j = 0 ; j < n ; ++j) {
                cout << a[i][j] << " "; 
            }
            cout << "\n" ; 
        }
        i++ ; 
    }
    return 0 ; 
}