#include <bits/stdc++.h>

using namespace std ;

void reverse(int b[] , int start = 0 , int end = 31)
{
    while(start < end) {
        swap(b[start++] , b[end--]) ; 
    }
}

int main()
{
    int testcases = 1 ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n ; 
        
        cin >> n ; 
        
        int a[n] ;
        
        map < int , int > mp ;
        
        for(int i = 0 ; i < n ; ++i) {
            
            cin >> a[i] ;
            mp[a[i]]++ ;
            
        }
        
        for(auto x:mp) if(x.second == 2) cout << x.first << " " ;
        
        cout << "\n" ;
    }
    return 0 ;
}