#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int size , maxi = -1e8 , mini = 1e8 ; 
    
    cout << "Enter size of Array:" ;
    
    cin >> size ;
    
    int a[size] ;
    
    cout << "Enter the array elements:" ;
    
    for(int i = 0 ; i < size ; ++i) cin >> a[i] ;
    
    for(int i = 0 ; i < size ; ++i) {
        if(a[i] > maxi) maxi = a[i] ;
        if(a[i] < mini) mini = a[i] ;
    }
    
    cout << "Largest Element of the array:" << maxi << endl ;
    cout << "Smallest Element of the array:" << mini << endl ;
    
    return 0 ;
}