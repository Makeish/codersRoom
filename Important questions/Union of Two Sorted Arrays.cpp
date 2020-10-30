#include <bits/stdc++.h>

using namespace std ;

void solve(int a[] , int n , int b[] , int m)
{
    int start1 = 0 , start2 = 0 ;
    
    while(start1 < n and start2 < m) {
        
        if(a[start1] < b[start2]) {
            cout << a[start1] << " " ; 
            start1++ ;
        }
        else if(a[start1] == b[start2]){
            
            cout << a[start1] << " " ; 
            
            start1++ ;
            
            start2++ ;
        }
        else {
            cout << b[start2] << " " ; 
            start2++ ;
        }
        
        while(start1 > 0 and a[start1] == a[start1 - 1]) start1++ ;
        while(start2 > 0 and b[start2] == b[start2 - 1]) start2++ ; 
    }
    
    while(start1 < n ) {
        
        if(a[start1] != a[start1 - 1]) 
        cout << a[start1] << " " ;
        
        start1++ ;
    }
    
    while(start2 < m ) {
        
        if(b[start2] != b[start2 - 1]) 
        cout <<b[start2] << " " ;
        
        start2++ ;
    
    }
    
}

int main()
{
    int n , m ; 
    
    cin >> n >> m ; 
    
    int a[n], b[m] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    for(int i = 0 ; i < m ; ++i) cin >> b[i] ;
    
    solve(a , n , b , m) ;
    
    return 0 ;
}