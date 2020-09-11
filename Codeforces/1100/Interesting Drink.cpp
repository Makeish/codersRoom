#include <bits/stdc++.h>

using namespace std ;

/* Hint 1 : Brute force doesn't work , do think if sorting helps in some way */
/* Hint 2 : Apply Binary Search over data (u can use stl) */

int main()
{
    int noOfShops ;
    
    cin >> noOfShops ;
    
    int priceIn[noOfShops] ;
    
    for(int i = 0 ; i < noOfShops ; ++i) {
        cin >> priceIn[i] ;
    }
    
    sort(priceIn , priceIn + noOfShops) ; 
    
    int days ;
    
    cin >> days ; 
    
    while(days--){
        
        int money ;
        
        cin >> money ;
        
        
        if(money < priceIn[0]){
            cout << "0\n";
        }
        else{
            cout << upper_bound(priceIn , priceIn + noOfShops , money) - priceIn << "\n" ;
        }
    }
    
    
    return 0;
}