#include <bits/stdc++.h>

using namespace std ;

int bubbleSort(int a[] , int n)
{
    int cnt = 0 ;
    
    for(int i = 0 ; i < n - 1 ; ++i) {
        for(int j = 0 ; j < n - i - 1 ; j++) {
            if(a[j] > a[j + 1]) {
                swap(a[j] , a[j + 1]) ;
                cnt++ ; 
            }
        }
    }
    
    return cnt ; 
}

int main()
{
    int testcases ; 
    
    cin >> testcases ; 
    
    while(testcases--) {
    
        int n ; 

        cin >> n ; 

        int a[n] ;

        for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

        cout << bubbleSort(a , n) << "\n" ;
    
    }

    return 0 ; 
}