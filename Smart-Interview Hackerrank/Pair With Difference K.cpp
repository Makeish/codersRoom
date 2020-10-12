#include <bits/stdc++.h>

using namespace std ;

string search(int a[] , int k , int n)
{
     for(int i = 0 ; i < n ; ++i) {
         if(binary_search(a+i+1 , a + n , k + a[i])) return "true" ;
     } 
    
    return "false" ;
}

int main()
{
    int testcases = 1 ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , k ; 
        
        cin >> n >> k ; 
        
        int a[n] ;
        
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }
        
        sort(a , a + n) ;
        
        cout << search(a , k , n) << "\n" ; 

    }
    return 0 ;
}