#include <bits/stdc++.h>

using namespace std ;

// If you want to do it in O(1) space make function void ans 
// replace ans pushback with cout statement.

vector < int > solve(int a[] , int n , int b[] , int m)
{
    int start1 = 0 , start2 = 0 ;
    
    vector < int > ans ;
    
    while(start1 < n and start2 < m) {
        
        if(a[start1] < b[start2]) {
            start1++ ;
        }
        else if(a[start1] == b[start2]){
            
            ans.push_back(a[start1]) ;
            
            start1++ ;
            
            start2++ ;
        }
        else {
            start2++ ;
        }
        
        while(start1 > 0 and a[start1] == a[start1 - 1]) start1++ ;
        while(start2 > 0 and b[start2] == b[start2 - 1]) start2++ ; 
    }
    
    return ans ;
}

int main()
{
    int n , m ; 
    
    cin >> n >> m ; 
    
    int a[n], b[m] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    for(int i = 0 ; i < m ; ++i) cin >> b[i] ;
    
    vector < int > c = solve(a , n , b , m) ;
    
    for(auto x:c) cout << x << " " ; 
    
    return 0 ;
}