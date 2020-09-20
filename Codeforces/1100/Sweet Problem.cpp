#include <bits/stdc++.h>
#define ll long long 
     
using namespace std ;
     
int main()
{
    int testcases = 1; 
        
    cin >> testcases ;
    
    while(testcases--) {
        
        int a[3] ;
        
        cin >> a[0] >> a[1] >> a[2] ;
        
        sort(a , a + 3 , greater<int>()) ;
        
        if(a[0] >= a[1] + a[2]) {
            cout << a[1] + a[2] << "\n" ;
        }
        else {
            cout << (a[0] + a[1] + a[2]) / 2 << "\n" ; 
        }
        
    
    }
        
        return 0 ;
    }