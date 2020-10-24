#include <bits/stdc++.h>

using namespace std ;

void print(int a[] , int n)
{
    for(int i = 0 ; i < n ; ++i) {
        cout << a[i] << " " ; 
    }

    cout << "\n" ; 
}

void insertionSort(int a[] , int n)
{
    for(int i = 1 ; i < n ; ++i) {
        
        int key = a[i] , j = i - 1 ;

        while(j >= 0 and a[j] > key) {

            a[j+1] = a[j] ;

            j-- ;
        }

        a[j+1] = key ; 

        print(a , n) ; 
    }
}

int main()
{
    int n ; 

    cin >> n ; 

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    insertionSort(a , n) ;

    return 0 ; 
}