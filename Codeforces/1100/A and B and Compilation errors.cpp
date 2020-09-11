#include <bits/stdc++.h>

using namespace std ;

/* Hint : Sorting may help u*/

int main()
{
    int noOferrors ;
    
    cin >> noOferrors ;
    
    int first[noOferrors] , second[noOferrors - 1] , third[noOferrors - 2] , i ;
    
    for(int i = 0 ; i < noOferrors ; ++i) {
        cin >> first[i];
    }
    
    for(int i = 0 ; i < noOferrors - 1 ; ++i) {
        cin >> second[i];
    }
    
    for(int i = 0 ; i < noOferrors - 2 ; ++i) {
        cin >> third[i];
    }
    
    sort(first , first + noOferrors) ;
    
    sort(second , second + noOferrors - 1) ;
    
    sort(third , third + noOferrors - 2) ;
    
    for(i = 0 ; i < noOferrors - 1; i++) {
        if(first[i] != second[i]){
            cout << first[i] ;
            break;
        }
    }
    
    if(i == noOferrors - 1) {
        cout << first[noOferrors - 1] ; 
    }
    cout << "\n";
    
    for(i = 0 ; i < noOferrors - 2 ; i++) {
        if(second[i] != third[i]){
            cout << second[i] ;
            break;
        }
    }
    
      if(i == noOferrors - 2) {
        cout << second[noOferrors - 2] ;
    }
    
    return 0;
}