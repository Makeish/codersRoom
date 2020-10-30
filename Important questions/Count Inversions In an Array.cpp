#include <bits/stdc++.h>

using namespace std ;

long long int merge(int a[] , int low , int mid , int high)
{
    int n1 = mid - low + 1 , n2 = high - mid ;
    
    long long int ans = 0 ;
    
    int p[n1] , q[n2] ;
    
    for(int i = 0 ; i < n1 ; ++i) {
        p[i] = a[low + i] ;
    }
    
    for(int i = 0 ; i < n2 ; ++i) {
        q[i] = a[mid + 1 + i] ;
    }
    
    int i = 0 , j = 0 , k = low ;
    
    while(i < n1 and j < n2) {
        
        if(p[i] <= q[j]) {
            a[k++] = p[i++] ;
        }
        else {
            a[k++] = q[j++] ;
            ans += n1 - i ; 
        }
    }
    
    while(i < n1) {
        a[k++] = p[i++] ;
    }
    
    while(j < n2) {
        a[k++] = q[j++] ; 
    }
    
    return ans ;
}

long long int mergeSort(int a[] , int low , int high)
{
    long long int res = 0 ;
    
    if(low < high) {
        
        int mid = low + (high - low) /  2 ; 
        
        res += mergeSort(a , low , mid) ;
        res += mergeSort(a , mid + 1 , high) ;
        res += merge(a , low , mid , high) ;
    }
    
    return res ;
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

        cout << (1ll)*mergeSort(a , 0 , n - 1) << "\n" ; 

    }
    return 0 ;
}