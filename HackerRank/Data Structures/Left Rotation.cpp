#include <bits/stdc++.h>

using namespace std ;

// Reversal Algorithm

void input(int a[] , int n)
{
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
    }
}

void Swap(int a[] , int start , int end)
{
    while(start < end)
    {
        swap(a[start++] , a[end--]) ;
    }
}

void reverse(int a[] , int n , int d)
{
    Swap(a , 0 , d - 1) ; 
    Swap(a , d , n - 1) ;
    Swap(a , 0 , n - 1) ; 
}

void output(int a[] , int n) 
{
    for(int i = 0 ; i < n ; ++i) {
        cout << a[i] << " ";
    }
}

void solve()
{
    int n , d ; 

    cin >> n >> d ;

    int a[n] ;

    input(a , n) ; 

    reverse(a , n , d) ; 

    output(a , n) ; 
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