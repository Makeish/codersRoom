#include <bits/stdc++.h>

using namespace std ;

// Hint : You could simply print from reverse else you can use swap method like I did 

void reverseArray(int a[] , int n)
{
    int start = 0 , end = n - 1 ;

    while(start < end) {
        swap(a[start++] , a[end--]) ; 
    }
}


void solve()
{
    int n ; 

    cin >> n ; 

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
    }

    reverseArray(a , n) ;

    for(int i = 0 ; i < n ; ++i) {
        cout << a[i] << " " ;
    }
}

int main()
{
    int testcases = 1 ; 
    
    // cin >> testcases ;
    
    while(testcases--) {
        
        solve() ;
    }
    return 0 ;
}