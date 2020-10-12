#include <bits/stdc++.h>

using namespace std ;

string search(int a[] , int k , int n)
{
     int start = 0 , end = n - 1 ;
    
    while(start < end) {
        
        if(a[start] + a[end] == k) {
            return "True" ;
        }
        else if(a[start] + a[end] < k) {
            start++ ;
        }
        else {
            end-- ;
        }
    }
    
    return "False" ; 
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