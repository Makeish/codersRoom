#include <bits/stdc++.h>

using namespace std ;

int lomutopartition(int a[] , int low , int high)
{
    int pivot = a[high] , i = low - 1 ; 
    
    for(int j = low ; j <= high - 1 ; ++j) {
        
        if(a[j] <= pivot) {
            
            i++ ;
            
            swap(a[j] , a[i]) ; 
        }
    }
    
    swap(a[i + 1] , a[high]) ; 
    
    return i + 1 ; 
}

int hoorePartition(int a[] , int low , int high)
{
    int pivot = a[low] , i = low - 1 , j = high + 1 ; 
    
    while(true) {
        
        do {
            i++ ;
        }while(a[i] < pivot) ; 
        
        do {
            j-- ;
        }while(a[j] > pivot) ; 
        
        if(i >= j) return j ;
        
        swap(a[i] , a[j]) ; 
        
    }
}

void quickSort(int a[] , int low , int high)
{
    if(low < high) {
        
        // int p = lomutopartition(a , low , high) ;
        
        // int p = hoorePartition(a , low , high) ; 
        
        quickSort(a , low , p) ;
        
        quickSort(a , p + 1 , high) ; 
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
        
        quickSort(a , 0 , n - 1) ;  
        
        for(int i = 0 ; i < n ; ++i) {
            cout << a[i] << " " ; 
        }
        
        cout << "\n" ; 
    }
    
    return 0 ;
}