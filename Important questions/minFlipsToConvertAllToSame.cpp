#include <bits/stdc++.h>

using namespace std ;

void solve(int a[] , int n)
{
   for(int i = 1 ; i < n ; ++i) {
       if(a[i] != a[i - 1]) {
           if(a[i] != a[0]) cout << "From " << i << " to " ; 
           else cout << i - 1 << "\n" ; 
        }
   }
   
   if(a[n - 1] != a[0]) {
       cout << n - 1 << "\n" ; 
   }
}


int main()
{
    int n ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
    }
    
    solve(a , n) ;
    
    return 0 ;
}