#include <bits/stdc++.h>

using namespace std ;

string search(int a[] , int n , int k)
{
    for(int i = 0 ; i < n -2 ; ++i) {
        int l = i + 1 ;
        int r = n - 1 ;
        
        while(l < r) {
            if(a[l] + a[r] + a[i] == k) return "true" ;
            else if(a[l] + a[r] + a[i] < k) ++l ;
            else r-- ;
        }
    }
    return "false" ; 
}

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , k ;
        
        cin >> n >> k ;
        
        int a[n] ;
        
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }
        
        sort(a , a + n) ; 
        
        cout << search(a , n , k) << "\n" ;
    }
    return 0 ;
}