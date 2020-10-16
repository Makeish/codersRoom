#include <bits/stdc++.h>

using namespace std ;

void reverseArray(int a[] , int n) //Brute Force Approach = O(n) + O(n)
{
    int temp[n] , j = 0 ;
    
    for(int i = n - 1 ; i >= 0 ; i--) temp[j++] = a[i] ;
    
    for(int i = 0 ; i < n ; ++i) a[i] = temp[i] ; 
}

void reverseArray3(int a[] , int start , int end) // recursive approach
{
    if(start >= end) return ;
    
    swap(a[start] , a[end]) ;
    reverseArray(a , start + 1 , end - 1) ;
}

void reverseArray1(int a[] , int n) //Efficient Approach = O(n) + O(1)
{
    int start = 0 , end = n - 1 ;
    
    while(start < end) swap(a[start++] , a[end--]) ;
}


int main()
{
    int size ; 
    
    cout << "Enter size of Array:" ;
    
    cin >> size ;
    
    int a[size] ;   // Input array
    
    cout << "Enter the array elements:" ;
    
    for(int i = 0 ; i < size ; ++i) cin >> a[i] ;   
    
    reverseArray(a , size) ;
    
    for(int i = 0 ; i < size ; ++i) cout << a[i] << " " ; 
    
    cout << "\n" ; 
    
    reverseArray1(a , size) ;
    
    for(int i = 0 ; i < size ; ++i) cout << a[i] << " " ; 

    cout << "\n" ;
    
    reverseArray3(a , 0 , size - 1) ;
    
    for(int i = 0 ; i < size ; ++i) cout << a[i] << " " ; 
    
    return 0 ;
}