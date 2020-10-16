#include <bits/stdc++.h>

using namespace std ;

void moveZeroesToEnd(int a[] , int n)   // Brute Force
{
    for(int i = 0 ; i < n - 1; ++i) {
        
        if(a[i] == 0) {         
            
            int j = i+1 ;
            
            while(j < n-1 and a[j] == 0) ++j ;
            
            swap(a[i] , a[j]) ;
            
        }
        
    }
}

void moveZeroesToEnd1(int a[] , int n) //Efficient Approach
{
    int count = 0 ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        if(a[i] != 0) {
            swap(a[i] , a[count]) ;
            count++ ;
        }
        
    }
}

int main()
{
    int size ; 
    
    cout << "Enter size of Array:" ;
    
    cin >> size ;
    
    int a[size] ;   // Input array
    
    cout << "Enter the array elements:" ;
    
    for(int i = 0 ; i < size ; ++i) cin >> a[i] ;   
    
    moveZeroesToEnd(a , size) ;
    
    for(int i = 0 ; i < size ; ++i) cout << a[i] << " " ; 
    
    cout << "\n" ; 
    
    moveZeroesToEnd(a , size) ;
    
    for(int i = 0 ; i < size ; ++i) cout << a[i] << " " ; 
    
    return 0 ;
}