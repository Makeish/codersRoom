#include <bits/stdc++.h>

using namespace std ;

void print(int a[] , int n)
{
    for(int i = 0 ; i < n ; ++i) {
        cout << a[i] << " " ; 
    }

    cout << "\n" ; 
}

int insertionSort(int a[] , int n)
{
    int ans = 0 ;

    for(int i = 1 ; i < n ; ++i) {
        
        int key = a[i] , j = i - 1 , cnt = 0 ;

        while(j >= 0 and a[j] > key) {

            a[j+1] = a[j] ;

            j-- ;

            cnt++ ; 
        }

        a[j+1] = key ; 

        ans += cnt ; 
    }

    return ans ;
}

int main()
{
    int n ; 

    cin >> n ; 

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    cout << insertionSort(a , n) ;

    return 0 ; 
}