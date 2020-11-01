#include <bits/stdc++.h>

using namespace std ;

void merge(int a[] , int low , int mid , int high)
{
    int n1 = mid - low + 1 , n2 = high - mid ;
    
    int l[n1] , r[n2] ;
    
    for(int i = 0 ; i < n1 ; ++i) {
        l[i] = a[low + i] ; 
    }
    
    for(int i = 0 ; i < n2 ; ++i) {
        r[i] = a[mid + 1 + i] ; 
    }
    
    int i = 0 , j = 0 , k = low ;
    
    while(i < n1 and j < n2) {
        
        if(l[i] <= r[j]) a[k++] = l[i++] ;
        else a[k++] = r[j++] ; 
    }
    
    while(i < n1) a[k++] = l[i++] ;
    
    while(j < n2) a[k++] = r[j++] ; 
    
}

void mergeSort(int a[] , int low , int high)
{
    if(low < high) {
        
        int mid = low + (high - low) / 2 ;
        
        mergeSort(a , low , mid) ;
        
        mergeSort(a , mid + 1 , high) ; 
        
        merge(a , low , mid , high) ; 
    }
}

int main()
{
    int test ; 
    
    cin >> test ;
    
    while(test--) {
        
        int n ; 
    
        cin >> n ; 
    
        int a[n] ; 
    
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ; 
        }
        
        mergeSort(a , 0 , n - 1) ;  
        
        for(int i = 0 ; i < n ; ++i) {
            cout << a[i] << " " ; 
        }
        
        cout << "\n" ; 
    }
    
    return 0 ;
}