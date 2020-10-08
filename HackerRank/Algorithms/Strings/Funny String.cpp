#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test ;

    cin >> test ;

    while(test--) {

    string a , b ; 

    int flag = 0 ; 

    cin >> a ;

    b = a ;

    reverse(a.begin() , a.end()) ; 

    for(int i = 1 ; i < a.length() ; i++) {
        
        if( abs(a[i] - a[i-1]) != abs(b[i] - b[i-1]) ) {
            flag = 1 ;
            break ; 
        }
    }
    (flag == 1) ? cout << "Not Funny\n" : cout << "Funny\n" ; 

    }

    return 0 ;
}