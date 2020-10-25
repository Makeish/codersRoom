#include <bits/stdc++.h>

using namespace std ;

int bubbleSort(int a[] , int n)
{
    int cnt = 0 ;

    for(int i = 0 ; i < n ; ++i) {

        for(int j = 0 ;j < n - 1 ; ++j) {

            if(a[j] > a[j + 1]) {
                
                swap(a[j] , a[j+1]) ;
               
                ++cnt ;

            }
        }
    }

    return cnt ;
}
int main()
{
    int n ; 

    cin >> n ; 

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    int ans = bubbleSort(a , n) ;

    cout <<  "Array is sorted in " << ans << " swaps.\n" ;
    
    cout << "First Element: " << a[0] << "\n" ;
    
    cout << "Last Element: " << a[n - 1] ;

    return 0 ;
}