#include <bits/stdc++.h>

using namespace std ;

bool isArraySorted(int a[] , int n) // It can be sorted in either ascending or descending order
{
    int flag = 0 , flag1 = 0 ;
    
    for(int i = 0 ; i < n - 1 ; ++i) {  //logic for Ascending Sorting
        if(a[i] > a[i+1]) {
            flag = 1 ;
            break ;
        }
    }
    
    for(int i = 0 ; i < n - 1 ; ++i) {
        if(a[i] < a[i+1]) {             //logic for Descending Sorting
            flag1 = 1 ;
            break ;
        }
    }
    
    if(flag == 1 and flag1 == 1) return false ;
    return true ;
}

int main()
{
    int size ; 
    
    cout << "Enter size of Array:" ;
    
    cin >> size ;
    
    int a[size] ;   // Input array
    
    cout << "Enter the array elements:" ;
    
    for(int i = 0 ; i < size ; ++i) cin >> a[i] ;   
    
    (isArraySorted(a , size) == true) ? cout << "Sorted" : cout << "Not sorted" ; 
    
    return 0 ;
}