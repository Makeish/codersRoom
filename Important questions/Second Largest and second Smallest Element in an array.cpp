#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int size , maxi = -1e8 , mini = 1e8 , secondMaxi , secondMini ; 
    
    cout << "Enter size of Array:" ;
    
    cin >> size ;
    
    int a[size] ;   // Input array
    
    cout << "Enter the array elements:" ;
    
    for(int i = 0 ; i < size ; ++i) cin >> a[i] ;   
    
    for(int i = 0 ; i < size ; ++i) {
        
        if(a[i] > maxi) {
            secondMaxi = maxi ;                     // Logic to find secondMax Element
            maxi = a[i] ;
        }
        else if(a[i] < maxi and a[i] > secondMaxi) {
            secondMaxi = a[i] ;
        }
        
        if(a[i] < mini) {                           // Logic to find secondMin Element
            secondMini = mini ;
            mini = a[i] ;
        }
        else if(a[i] > mini and a[i] < secondMini) {
            secondMini = a[i] ;
        }
    }
    
    if(secondMaxi == -1e8 or secondMini == 1e8)     //Incase all elements are equal 
        cout << "Array Elements are equal" ; 
    else {
        cout << "Second Largest Element of the array:" << secondMaxi << endl ;  
        cout << "Second Smallest Element of the array:" << secondMini << endl ;
    }
    
    return 0 ;
}